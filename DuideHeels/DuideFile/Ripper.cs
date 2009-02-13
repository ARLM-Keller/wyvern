using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Net;
using System.Text;
using System.Threading;
using System.Windows.Forms;

using DuideHeels.Properties;
using HTMLParser;
using HtmlDocument = HTMLParser.HtmlDocument;
using HtmlElement = HTMLParser.HtmlElement;

namespace DuideHeels
{
    public partial class Ripper : Form
    {
        private Action ActivePictureBox;
        private Action EnableListViewContextMenu;
        private Action EnablePictureBoxContextMenu;
        
        /// <summary>
        /// Show statusprogressbar
        /// </summary>
        private Action<bool> ssp;

        /// <summary>
        /// Add an new item into listview
        /// </summary>
        private Action<ListViewItem> ulv;

        /// <summary>
        /// Update the current item in listview
        /// </summary>
        private Action<string, string, string, string> ulvi;

        /// <summary>
        /// Update statuslabel value
        /// </summary>
        private Action<string> usl;

        /// <summary>
        /// Update statusprogressbar indicator
        /// </summary>
        private Action<int> usp;

        public bool BatchDownload;
        private Downloader dl;

        public int Range;
        private int TryTimes;

        public Ripper()
        {
            InitializeComponent();
        }

        void UICallBack()
        {
            ulv = lvi =>
            {
                if (dl.PS == ParseStyle.Heels)
                {
                    string key = Url.Query.Substring(Url.Query.LastIndexOf('=') + 1);
                    if (listView1.Groups[key] == null) listView1.Groups.Add(key, dl.Title);
                    lvi.Group = listView1.Groups[key];
                }
                listView1.Items.Add(lvi).EnsureVisible();
            };

            ulvi = (name, dimension, size, state) =>
            {
                if (listView1.Items.Count > 0)//Update existed item
                {
                    ListViewItem lvi = listView1.FindItemWithText(name);
                    if (!string.IsNullOrEmpty(dimension)) lvi.SubItems[1].Text = dimension;
                    if (!string.IsNullOrEmpty(size)) lvi.SubItems[2].Text = size;
                    if (!string.IsNullOrEmpty(state)) lvi.SubItems[3].Text = state;
                    if (lvi.Font.Style != FontStyle.Regular)
                        lvi.Font = new Font(lvi.Font, FontStyle.Regular);
                    lvi.ForeColor = state.Contains("Finished") ?
                        Color.Green : state.Contains("Dropped") ?
                        Color.Gray : state.Contains("Existed") ? Color.LightSeaGreen : Color.PaleVioletRed;
                }
                else//Add new item to group
                {
                    string key = string.Empty;
                    if (dl.PS == ParseStyle.Heels) key = Url.Query.Substring(Url.Query.LastIndexOf('=') + 1);
                    ListViewItem lvi = new ListViewItem(new string[] { dl.Current.Name, dimension, size, state });
                    lvi.Tag = dl.Address;
                    if (dl.PS == ParseStyle.Heels) lvi.Group = listView1.Groups.Add(key, dl.Title);
                    lvi.ForeColor = state.Contains("Finished") ?
                        Color.Green : state.Contains("Dropped") ?
                        Color.Gray : Color.PaleVioletRed;
                    listView1.Items.Add(lvi).EnsureVisible();
                }

            };

            usl = value => toolStripStatusLabel1.Text = value;
            usp = value => toolStripProgressBar1.Value = value;
            ssp = value => toolStripProgressBar1.Visible = value;

            EnableListViewContextMenu = () =>
            {
                if (!cmsLV.Enabled)
                {
                    cmsLV.Enabled = true;
                    foreach (ToolStripItem item in cmsLV.Items)
                    {
                        item.Enabled = true;
                    }
                }
            };

            EnablePictureBoxContextMenu = () =>
            {
                if (!cmsPB.Enabled)
                {
                    cmsPB.Enabled = true;
                    foreach (ToolStripItem item in cmsPB.Items)
                    {
                        item.Enabled = true;
                    }
                }
            };

            ActivePictureBox = () =>
            {
                splitContainer1.Panel2Collapsed = false;
            };
        }

        public int From { get; set; }
        public int To { get; set; }

        public string Dir
        {
            get { return localDir.Text.Trim(); }
            set { localDir.Text = value ?? string.Empty; }
        }

        public Uri Url
        {
            get { return new Uri(txtParse.Text.Trim()); }
            set { txtParse.Text = value.ToString(); }
        }

        public string Cookie
        {
            get { return tbContent.Text.Trim(); }
            set { tbContent.Text = value ?? string.Empty; }
        }

        private void DownloadCancel_Click(object sender, EventArgs e)
        {
            if (dl == null)
            {
                dl = new Downloader();
            }

            switch (dl.PushState)
            {
                default:
                case PushAction.Download:
                    ///Save application settings
                    Settings.Default.txtParse = txtParse.Text;
                    Settings.Default.txtDir = localDir.Text;
                    Settings.Default.CookieContent = tbContent.Text;
                    Settings.Default.Save();
                    TryTimes = 0;
                    DownloadFiles.RunWorkerAsync();
                    ((Button) sender).Image = Resources.cancel_48;
                    dl.PushState = PushAction.Cancel;
                    break;
                case PushAction.Cancel:
                    if (DownloadFiles.CancellationPending) return;
                    BatchDownload = false;
                    dl.Canceled = true;
                    if (DownloadFiles.IsBusy)
                        DownloadFiles.CancelAsync();
                    ((Button) sender).Enabled = false;
                    break;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            folderBrowserDialog1.SelectedPath = Dir;
            if ((folderBrowserDialog1.ShowDialog()) == DialogResult.OK)
                Dir = folderBrowserDialog1.SelectedPath;
        }

        private void UpdateStatus()
        {
            statusStrip1.Invoke(usl, "Downloading...");
            statusStrip1.Invoke(usp, 0);
            statusStrip1.Invoke(ssp, true);
        }

        private void DownloadFiles_DoWork(object sender, DoWorkEventArgs e)
        {
            #region Wait 5 seconds
            if ((BatchDownload || TryTimes != 0) && cmmiWait.Checked && dl.Finished != 0)
            {
                statusStrip1.Invoke(usl, "Waiting...");
                Thread.Sleep(5000);
                statusStrip1.Invoke(usl, "Downloading...");
            }
            #endregion

            if (dl.Canceled) return;

            TryTimes++;
            if (TryTimes >= 2)
            {
                e.Cancel = true;
                TryTimes = 0;
                return;
            }

            if (!Directory.Exists(Dir))
            {
                MessageBox.Show("Please select a valid folder...");
                return;
            }

            #region CheckUrl validation
            CheckURL(Url);
            if (string.IsNullOrEmpty(Cookie) && dl.PS == ParseStyle.Heels)
            {
                MessageBox.Show("Please input Cookie Content when download heels.cn files.");
                return;
            }
            #endregion
            
            //Initialize UI callback function objects' definition
            UICallBack();

            #region Parse specified url file
            try
            {
                if (!ParseURL(Url)) return;
            }
            catch (Exception)
            {
                MessageBox.Show("Parse Error!");
                return;
            }
            #endregion
            
            ListViewItem lviFile;
            switch (dl.PS)
            {
                
                case ParseStyle.Duide:

                    #region Download duide.com files
                    dl.Reqs = dl.Imgs.Count;
                    UpdateStatus();
                    for (int idx = dl.Finished; idx < dl.Imgs.Count; idx++)
                    {
                        try
                        {
                            if (dl.Canceled)
                            {
                                e.Cancel = true;
                                TryTimes = -1;
                                return;
                            }

                            string url = Url.AbsoluteUri.Substring(0, Url.ToString().LastIndexOf('/') + 1) +
                                         dl.Imgs[idx];
                            dl.Finished++;
                            string newname =
                                Path.GetFileNameWithoutExtension(Url.Segments[Url.Segments.Length - 1]).ToUpper() + '-' +
                                dl.Finished + ".jpg";
                            FileInfo fi = new FileInfo(Dir + '\\' + newname);
                            dl.Current = fi;
                            if (fi.Exists && listView1.FindItemWithText(fi.Name) == null)
                            {
                                lviFile = new ListViewItem(new string[] 
                                { 
                                    fi.Name, 
                                    string.Empty, 
                                    fi.Length / 1024 + "KB", 
                                    "Existed",
                                });
                                lviFile.Tag = url;
                                lviFile.ForeColor = Color.LightSeaGreen;
                                listView1.Invoke(ulv, lviFile);
                                continue;
                            }
                            if (splitContainer1.Panel2Collapsed) splitContainer1.Invoke(ActivePictureBox);
                            lviFile = new ListViewItem(new string[] 
                            { 
                                fi.Name, //File Name
                                string.Empty,//Dimension 
                                string.Empty, //Size
                                "Downloading", //State
                            });
                            lviFile.Tag = url;
                            lviFile.ForeColor = Color.Purple;
                            listView1.Invoke(ulv, lviFile);
                            dl.Rip.DownloadFile(url, dl.ImageLocation = fi.ToString());
                            pictureBox1.ImageLocation = dl.ImageLocation;
                            fi.Refresh();
                            DownloadFiles.ReportProgress(dl.Finished*100/dl.Reqs);
                            listView1.Invoke(ulvi, dl.Current.Name, string.Empty, fi.Length / 1024 + "KB", "Finished (" + dl.Finished + "/" + dl.Reqs + ")");
                        }
                        catch (WebException exp)
                        {
                            listView1.Invoke(ulvi, dl.Current.Name, string.Empty, string.Empty, exp.Message);
                        }
                    }

                    #endregion

                    break;

                case ParseStyle.Heels:

                    #region Download heels.cn files

                    dl.Reqs = dl.Imgs.Count;
                    const string header = "http://www.heels.cn/web/";
                    var ck = new Cookie("JSESSIONID", Cookie, "/", "www.heels.cn");
                    UpdateStatus();
                    listView1.Invoke(EnableListViewContextMenu);
                    HttpWebRequest req;
                    Bitmap bmp;
                    for (int index = dl.Finished; index < dl.Imgs.Count; index++)
                    {
                        if (dl.Canceled)
                        {
                            e.Cancel = true;
                            TryTimes = -1;
                            return;
                        }
                        if (dl.SkipPage)
                        {
                            dl.SkipPage = false;
                            return;
                        }
                        
                        FileInfo fi = new FileInfo(Dir + '\\' + dl.Imgs.Keys[index] + ".jpg");
                        dl.Address = header + "getattachment?attach=" + dl.Imgs.Keys[index];
                        dl.Current = fi;
                        if (fi.Exists)
                        {
                            if (listView1.FindItemWithText(fi.Name) == null)
                            {
                                lviFile = new ListViewItem(new string[] 
                                { 
                                    fi.Name, 
                                    string.Empty, 
                                    fi.Length / 1024 + "KB", 
                                    "Existed", 
                                });
                                lviFile.Tag = dl.Address;
                                lviFile.ForeColor = Color.LightSeaGreen;
                                listView1.Invoke(ulv, lviFile);
                            }
                            else
                                listView1.Invoke(ulvi, fi.Name, null, null, "Existed");
                            dl.Finished++;
                            continue;
                        }
                        if (splitContainer1.Panel2Collapsed) splitContainer1.Invoke(ActivePictureBox);
                        req = (HttpWebRequest) WebRequest.Create(header + dl.Imgs[index]);
                        req.CookieContainer = new CookieContainer();
                        req.CookieContainer.Add(ck);
                        if (listView1.FindItemWithText(fi.Name)==null)
                        {
                            lviFile = new ListViewItem(new string[] 
                            { 
                                fi.Name, //File Name #0 index
                                string.Empty,//Dimension #1 index
                                string.Empty, //Size #2 index
                                "Downloading", //State #3 index
                            });
                            lviFile.Tag = dl.Address;
                            lviFile.ForeColor = Color.Purple;
                            listView1.Invoke(ulv, lviFile);
                        }
                        else
                            listView1.Invoke(ulvi, fi.Name, string.Empty, string.Empty, "Try again");
                        try
                        {
                            
                            using (Stream s = req.GetResponse().GetResponseStream())
                            {
                                bmp = new Bitmap(s);
                                s.Close();
                            }
                        }
                        catch (Exception exp)
                        {
                            listView1.Invoke(ulvi, fi.Name, null, null, exp.Message);
                            e.Cancel = true;
                            return;
                        }
                        dl.TooSmall = false;
                        if (bmp.Width >= 768 && bmp.Height >= 768 || cmmiSaveAll.Checked)
                        {
                            bmp.Save(dl.ImageLocation = fi.ToString());
                            fi.Refresh();
                        }
                        else
                        {
                            dl.TooSmall = true;
                            dl.ImageLocation = null;
                        }
                        pictureBox1.Image = bmp.Clone() as Image;
                        dl.SaveOrDelete = fi;
                        dl.Finished++;
                        DownloadFiles.ReportProgress(dl.Finished * 100 / dl.Reqs);
                        string size = fi.Exists ? fi.Length / 1024 + "KB" : string.Empty;
                        string state = dl.TooSmall ? "Dropped": "Finished";
                        listView1.Invoke(ulvi, fi.Name, bmp.Width + "x" + bmp.Height, size, state + " (" + dl.Finished + "/" + dl.Reqs + ")");
                        bmp.Dispose();
                    }

                    #endregion //http://www.heels.cn/web/getattachment?attach=????

                    break;

                case ParseStyle.Other:

                    #region Download other site files

                    UpdateStatus();
                    for (int idx = dl.Finished; idx < dl.Imgs.Count; idx++)
                    {
                        try
                        {
                            if (dl.Canceled)
                            {
                                e.Cancel = true;
                                return;
                            }

                            string url = Url.AbsoluteUri.Substring(0, Url.AbsoluteUri.ToString().LastIndexOf('/') + 1) +
                                         dl.Imgs[idx];
                            dl.Finished++;
                            string newname = dl.Imgs.GetKey(idx);
                            var fi = new FileInfo(Dir + '\\' + newname);
                            if (fi.Exists && listView1.FindItemWithText(fi.Name) == null)
                            {
                                lviFile = new ListViewItem(new string[] 
                                { 
                                    fi.Name, 
                                    string.Empty, 
                                    fi.Length / 1024 + "KB", 
                                    "Existed",
                                });
                                lviFile.Tag = url;
                                lviFile.ForeColor = Color.LightSeaGreen;
                                listView1.Invoke(ulv, lviFile);
                                continue;
                            }
                            if (splitContainer1.Panel2Collapsed) splitContainer1.Invoke(ActivePictureBox);
                            lviFile = new ListViewItem(new string[] 
                            { 
                                fi.Name, //File Name
                                string.Empty,//Dimension 
                                string.Empty, //Size
                                "Downloading", //State
                            });
                            lviFile.Tag = url;
                            lviFile.ForeColor = Color.Purple;
                            listView1.Invoke(ulv, lviFile);
                            dl.Rip.DownloadFile(url, dl.ImageLocation = fi.ToString());
                            pictureBox1.ImageLocation = dl.ImageLocation;
                            DownloadFiles.ReportProgress(dl.Finished*100/dl.Reqs);
                            listView1.Invoke(ulvi, fi.Length / 1024 + "KB", "Finished (" + dl.Finished + "/" + dl.Reqs + ")");
                        }
                        catch (WebException exp)
                        {
                            listView1.Invoke(ulvi, string.Empty, string.Empty, exp.Message);
                        }
                    }

                    #endregion

                    break;
            }
        }

        private void CheckURL(Uri uri)
        {
            if (dl == null) dl = new Downloader();
            if (uri.Host.Contains("heels"))
            {
                dl.PS = ParseStyle.Heels;
            }
            else dl.PS = uri.Host.Contains("duide") ? ParseStyle.Duide : ParseStyle.Other;
        }

        /// <summary>
        /// Parse URL address and generate dataset collection to store download information
        /// </summary>
        /// <param name="url">The address value from txtParse TextBox control</param>
        private bool ParseURL(Uri url)
        {
            switch (dl.PS)
            {
                    #region Parse Heels.cn site

                case ParseStyle.Heels:

                    if (dl.Imgs.Count == 0)
                    {
                        statusStrip1.Invoke(usl, "Parsing...");
                        try
                        {
                            var doc = new HtmlDocument(dl.Rip.DownloadString(url), true);
                            HtmlElement title = doc.Nodes.FindByName("title")[0] as HtmlElement;
                            dl.Title = Encoding.UTF8.GetString(Encoding.Default.GetBytes(title.Text));
                            dl.Title = dl.Title.Substring(dl.Title.LastIndexOf('-') + 1);
                            HtmlNodeCollection links = doc.Nodes.FindByName("a", true);
                            foreach (HtmlElement lnk in links)
                            {
                                if (lnk.Attributes["href"] != null)
                                {
                                    string href = lnk.Attributes["href"].Value;
                                    if (href.StartsWith("getattachment"))
                                    {
                                        string key = href.Substring(href.LastIndexOf('=') + 1);
                                        if (dl.Imgs[key] == null)
                                        {
                                            dl.Imgs[key] = href;
                                        }
                                    }
                                }
                            }
                        }
                        catch (WebException we)
                        {
                            statusStrip1.Invoke(usl, we.Message);
                            throw;
                        }
                    }
                    break;

                    #endregion

                    #region Parse other site

                case ParseStyle.Other:
                    break;
                    #endregion

                    #region Parse duide.com site

                case ParseStyle.Duide:

                    if (dl.Imgs.Count == 0)
                    {
                        statusStrip1.Invoke(usl, "Parsing...");
                        try
                        {
                            var doc = new HtmlDocument(dl.Rip.DownloadString(url), true);
                            HtmlElement title = doc.Nodes.FindByName("title")[0] as HtmlElement;
                            //dl.Title = Encoding.UTF8.GetString(Encoding.Default.GetBytes(title.Text));
                            //dl.Title = dl.Title.Substring(dl.Title.LastIndexOf('-') + 1);
                            dl.Title = title.Text;
                            HtmlNodeCollection links = doc.Nodes.FindByName("a", true);
                            foreach (HtmlElement lnk in links)
                            {
                                if (lnk.Nodes["img"] != null)
                                {
                                    string href = lnk.Attributes["href"].Value;
                                    string key = href.Substring(href.LastIndexOf('/') + 1,
                                                                href.Length - href.LastIndexOf('/') - 1);
                                    if (href.EndsWith(".jpg") && dl.Imgs[key] == null)
                                        dl.Imgs[key] = href;
                                }
                            }
                        }
                        catch (WebException we)
                        {
                            statusStrip1.Invoke(usl, we.Message);
                            throw;
                        }
                    }
                    break;

                    #endregion
            }
            return (dl.Imgs.Count == 0) ? false : true;
        }

        private void DownloadFiles_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            if (e.Cancelled)
            {
                toolStripStatusLabel1.Text = "Task terminated.";
                if (!BatchDownload)
                {
                    if (TryTimes != 0)
                    {
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                    }
                    else if (dl.Finished == 0)
                    {
                        dl.PushState = PushAction.Download;
                        dl.Canceled = true;
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                        lblBatch.Text = string.Empty;
                    }
                    else
                    {
                        dl.Canceled = false;
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                        dl.PushState = PushAction.Cancel;
                    }
                }
                else //Batchdownload in cancelled or exception mode
                {
                    if (TryTimes != 0)
                    {
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                    }
                    else if (dl.Finished == 0)
                    {
                        dl.PushState = PushAction.Download;
                        dl.Canceled = true;
                        lblBatch.Text = string.Empty;
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                    }
                    else
                    {
                        dl.Canceled = false;
                        TryTimes = 0;
                        dl.PushState = PushAction.Cancel;
                        btnDownloadCancel.Image = Resources.cancel_48;
                        btnDownloadCancel.Enabled = true;
                        lock (GetType()) DownloadFiles.RunWorkerAsync();
                    }
                }
            }
            else
            {
                dl.Reset();
                toolStripStatusLabel1.Text = "Task completed.";
                toolStripProgressBar1.Visible = false;
                TryTimes = 0;
                lblBatch.Text = string.Empty;
                if (BatchDownload)
                {
                    if (dl == null)
                    {
                        dl = new Downloader();
                    }

                    switch (dl.PushState)
                    {
                        default://DownloadOrCancel.Download
                            lock (GetType()) DownloadFiles.RunWorkerAsync();
                            btnDownloadCancel.Image = Resources.cancel_48;
                            dl.PushState = PushAction.Cancel;
                            From++;
                            AdjustURL(1);
                            lblBatch.Text = " #" + (Range - (To - From) - 1) + "/" + Range;
                            BatchDownload = From != To;
                            break;
                        case PushAction.Cancel:
                            BatchDownload = false;
                            if (DownloadFiles.CancellationPending) return;
                            dl.Canceled = true;
                            if (DownloadFiles.IsBusy)
                                DownloadFiles.CancelAsync();
                            btnDownloadCancel.Enabled = false;
                            break;
                    }
                }
                else
                {
                    btnDownloadCancel.Image = Resources.accepted_48;
                    btnDownloadCancel.Enabled = true;
                    btnBatch.Enabled = true;
                    ///Save application settings
                    Settings.Default.txtParse = Url.ToString();
                    Settings.Default.txtDir = Dir;
                    Settings.Default.CookieContent = Cookie;
                    Settings.Default.Save();
                }
            }
        }

        private void DownloadFiles_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            toolStripProgressBar1.Value = e.ProgressPercentage;
        }

        private void pictureBox1_DoubleClick(object sender, EventArgs e)
        {
            if (dl != null && dl.ImageLocation != null)
                Process.Start(dl.ImageLocation);
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            AdjustURL(1);
        }

        private void btnMinus_Click(object sender, EventArgs e)
        {
            AdjustURL(-1);
        }

        /// <summary>
        /// Adjust URL querystring value by increment/decrement number variable
        /// </summary>
        /// <param name="pm">The PlusMinus enum value indicate the action type.</param>
        private void AdjustURL(int step)
        {
            CheckURL(Url);
            string number;
            int value;
            switch (dl.PS)
            {
                case ParseStyle.Heels:
                    number = Url.Query.Substring(Url.Query.LastIndexOf('=') + 1);
                    if (int.TryParse(number, out value))
                    {
                        value += step;
                        Url = new Uri(Url.AbsoluteUri.Replace(number, value.ToString()));
                    }
                    break;
                case ParseStyle.Duide://http://www.duide.com/ggg656567/a93.htm
                    number = Url.LocalPath.Substring(Url.LocalPath.LastIndexOf("/") + 2);
                    number = number.Remove(number.LastIndexOf('.'));
                    if (int.TryParse(number, out value))
                    {
                        value += step;
                        Url = new Uri(Url.AbsoluteUri.Replace(number, value.ToString()));
                    }
                    break;
                case ParseStyle.Other:
                    break;
            }

        }

        /// <summary>
        /// Clear the listbox items, and reset dataset to initial state.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnClear_Click(object sender, EventArgs e)
        {
            if (listView1.Items.Count > 0)
            {
                listView1.Items.Clear();
                listView1.Groups.Clear();
            }
        }

        private void btnMinus_MouseDown(object sender, MouseEventArgs e)
        {
            tmMinus.Enabled = true;
        }

        private void btnMinus_MouseUp(object sender, MouseEventArgs e)
        {
            tmMinus.Enabled = false;
        }

        private void btnPlus_MouseDown(object sender, MouseEventArgs e)
        {
            tmPlus.Enabled = true;
        }

        private void btnPlus_MouseUp(object sender, MouseEventArgs e)
        {
            tmPlus.Enabled = false;
        }

        private void btnBatch_Click(object sender, EventArgs e)
        {
            var batch = new BatchAction();
            string text = Url.Query.Substring(Url.Query.LastIndexOf('=') + 1);
            if (!string.IsNullOrEmpty(text))
                batch.From = batch.To = decimal.Parse(text);
            batch.Owner = this;
            batch.ShowDialog();
        }

        private void cmmiNextFile_Click(object sender, EventArgs e)
        {
            if (dl != null && dl.Imgs.Count != 0 && dl.Finished < dl.Imgs.Count - 1)
                dl.Finished++;
        }

        private void cmmiNextPage_Click(object sender, EventArgs e)
        {
            dl.SkipPage = true;
        }

        private void cmmiSave_Click(object sender, EventArgs e)
        {
            if (dl.SaveOrDelete != null && pictureBox1.Image != null && !dl.SaveOrDelete.Exists)
            {
                pictureBox1.Image.Save(dl.ImageLocation = dl.SaveOrDelete.ToString());
                dl.SaveOrDelete.Refresh();
                ListViewItem lvi = listView1.FindItemWithText(dl.SaveOrDelete.Name);
                if (lvi != null)
                {
                    lvi.SubItems[3].Text = "Saved";
                    lvi.SubItems[2].Text = dl.SaveOrDelete.Length / 1024 + "KB";
                    lvi.ForeColor = Color.Green;
                }
            }
        }

        private void cmmiDelete_Click(object sender, EventArgs e)
        {
            if (dl.ImageLocation != null && File.Exists(dl.ImageLocation))
            {
                File.Delete(dl.ImageLocation);
                FileInfo fi = new FileInfo(dl.ImageLocation);
                dl.ImageLocation = null;
                ListViewItem lvi = listView1.FindItemWithText(fi.Name);
                if (lvi != null)
                {
                    lvi.SubItems[3].Text = "Deleted";
                    lvi.Font = new Font(lvi.Font, FontStyle.Strikeout);
                    lvi.ForeColor = SystemColors.GrayText;
                }
            }
        }

        private void cmmiDeleteAll_Click(object sender, EventArgs e)
        {
            if (dl != null && dl.Imgs != null && dl.Imgs.Count > 0)
            {
                foreach (string name in dl.Imgs.AllKeys)
                {
                    string file = Dir + '\\' + name + ".jpg";
                    if (File.Exists(file))
                    {
                        File.Delete(file);
                        ListViewItem lvi = listView1.FindItemWithText(name + ".jpg");
                        if (lvi != null)
                        {
                            lvi.SubItems[3].Text = "Deleted";
                            lvi.Font = new Font(lvi.Font, FontStyle.Strikeout);
                            lvi.ForeColor = SystemColors.GrayText;
                        }
                    }
                }
                dl.SkipPage = true;
            }
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listView1.FocusedItem!=null)
            {
                string file = Dir + "\\" + listView1.FocusedItem.Text;
                if (File.Exists(file))
                {
                    if (splitContainer1.Panel2Collapsed) splitContainer1.Panel2Collapsed = false;
                    dl.ImageLocation = pictureBox1.ImageLocation = file;
                }
            }
        }

        private void listView1_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Right && listView1.FocusedItem != null)
            {
                ToolStripMenuItem tsmi = new ToolStripMenuItem("Remove", null, cmmiDeleteFile, "cmmiDeleteFile");
                cmsLV.Items.Insert(cmsLV.Items.IndexOf(toolStripSeparator2), tsmi);
                tsmi = new ToolStripMenuItem("Save", null, cmmiDownloadFile, "cmmiDownloadFile");
                cmsLV.Items.Insert(cmsLV.Items.IndexOf(toolStripSeparator2), tsmi);
            }
        }

        private void cmmiDeleteFile(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count > 0)
            {
                foreach (ListViewItem lvi in listView1.SelectedItems)
                {
                    FileInfo fi = new FileInfo(Dir + "\\" + lvi.Text);
                    if (fi.Exists)
                    {
                        fi.Delete();
                        lvi.SubItems[3].Text = "Deleted";
                        lvi.Font = new Font(lvi.Font, FontStyle.Strikeout);
                        lvi.ForeColor = SystemColors.GrayText;
                    }
                }
                
            }
        }

        private void cmmiDownloadFile(object sender, EventArgs e)
        {
            foreach (ListViewItem lvi in listView1.SelectedItems)
            {
                FileInfo fi = new FileInfo(Dir + "\\" + lvi.Text);
                if (!fi.Exists)
                {
                    if (ThreadPool.QueueUserWorkItem(DownloadFile,
                        new DownloadFileArgs { Url = (string)lvi.Tag, Fi = fi }))
                    {
                        lvi.SubItems[3].Text = "Downloading";
                        lvi.Font = new Font(lvi.Font, FontStyle.Regular);
                        lvi.ForeColor = Color.LimeGreen;
                    }
                }
            }
            
        }

        //locker object to control multiple DownloadFile functions excute in order
        object downloading = new object();

        void DownloadFile(object args)
        {
            lock (downloading)
            {
                DownloadFileArgs dfa = args as DownloadFileArgs;
                try
                {
                    if (dl.PS == ParseStyle.Heels)
                    {
                        HttpWebRequest req = WebRequest.Create(dfa.Url) as HttpWebRequest;
                        req.CookieContainer = new CookieContainer();
                        req.CookieContainer.Add(new Cookie("JSESSIONID", Cookie, "/", "www.heels.cn"));
                        using (Stream s = req.GetResponse().GetResponseStream())
                        {
                            Bitmap bmp = new Bitmap(s);
                            bmp.Save(dfa.Fi.ToString());
                            s.Close();
                        }
                        listView1.Invoke(ulvi, dfa.Fi.Name, null, null, "Finished");

                    }
                    else
                    {
                        WebClient wc = new WebClient();
                        wc.DownloadFile(dfa.Url, dfa.Fi.ToString());
                        listView1.Invoke(ulvi, dfa.Fi.Name, null, null, "Finished");
                    }

                }
                catch (Exception exp)
                {
                    listView1.Invoke(ulvi, dfa.Fi.Name, null, null, exp.Message);
                }
            }
            
        }

        class DownloadFileArgs
        {
            public string Url { get; set; }
            public FileInfo Fi { get; set; }
        }

        private void cmsLV_Closed(object sender, ToolStripDropDownClosedEventArgs e)
        {
            if (cmsLV.Items.ContainsKey("cmmiDeleteFile"))
                cmsLV.Items.RemoveByKey("cmmiDeleteFile");
            if (cmsLV.Items.ContainsKey("cmmiDownloadFile"))
                cmsLV.Items.RemoveByKey("cmmiDownloadFile");
        }

        private void localDir_Leave(object sender, EventArgs e)
        {
            TextBox tb = sender as TextBox;
            if (tb.Text.EndsWith("\\"))
                tb.Text = tb.Text.Remove(tb.Text.Length - 1);
        }

        private void listView1_ItemMouseHover(object sender, ListViewItemMouseHoverEventArgs e)
        {
            if (e.Item != null)
            {
                listView1.ShowItemToolTips = true;
                e.Item.ToolTipText = e.Item.Tag as String;
            }
        }

        private void listView1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Delete:
                    if (e.Shift)
                        cmmiDeleteAll_Click(sender, e);
                    else
                        cmmiDeleteFile(sender, e);
                    break;
                case Keys.C:
                    if (e.Control && listView1.FocusedItem != null)
                        Clipboard.SetText(listView1.FocusedItem.Tag as string);
                    break;
            }
        }

        public bool _FullScreen = false;

        private void Ripper_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Escape:
                    if (FormBorderStyle == FormBorderStyle.None)
                    {
                        _FullScreen = false;
                        FormBorderStyle = FormBorderStyle.Sizable;
                        Bounds = (Rectangle)this.Tag;
                    }
                    break;
                case Keys.F11:
                    if (_FullScreen)
                    {
                        _FullScreen = false;
                        FormBorderStyle = FormBorderStyle.Sizable;
                        Bounds = (Rectangle)this.Tag;
                    }
                    else 
                    {
                        if (WindowState == FormWindowState.Maximized)
                            WindowState = FormWindowState.Normal;
                        this.Tag = Bounds;
                        FormBorderStyle = FormBorderStyle.None;
                        Bounds = Screen.PrimaryScreen.Bounds;
                        _FullScreen = true;
                    }
                    break;
            }
        }
    }
}