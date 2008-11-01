using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.IO;
using System.Net;
using System.Windows.Forms;

namespace DuideFile
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            ulb = new UpdateListBox(UpdateListBoxHandler);
        }
        static int reqs = 0;
        static int finished = 0;
        static bool canceled = false;

        private void button1_Click(object sender, EventArgs e)
        {
            backgroundWorker1.RunWorkerAsync();
            btnCancel.Enabled = true;
            btnDownload.Enabled = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            folderBrowserDialog1.SelectedPath = localDir.Text;
            if ((folderBrowserDialog1.ShowDialog()) == DialogResult.OK)
                localDir.Text = folderBrowserDialog1.SelectedPath + "\\";
        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {

            string url = txtParse.Text.Trim(); // http://www.duide.com/gg3e3erbgrer5/
            string dir = localDir.Text.Trim(); 
            string pagename = url.Substring(url.LastIndexOf('/') + 1, url.Length - url.LastIndexOf('/') - 5).ToUpper();


            WebClient Client = new WebClient();
            Dictionary<string, string> fns = new Dictionary<string, string>();
            HTMLParser.HtmlDocument doc = new HTMLParser.HtmlDocument(Client.DownloadString(txtParse.Text.Trim()), true);
            HTMLParser.HtmlNodeCollection links = doc.Nodes.FindByName("a", true);
            foreach (HTMLParser.HtmlElement lnk in links)
            {
                if (lnk.Nodes.FindByName("img").Count!=0)
                {
                    string href = lnk.Attributes.FindByName("href").Value;
                    if (href.EndsWith(".jpg"))
                    {
                        fns.Add(href.Substring(href.LastIndexOf('/') + 1, href.Length - href.LastIndexOf('/') - 1), href);
                    }
                    
                }

            }

            reqs = fns.Count;
            
            foreach (var img in fns)
            {

                try
                {
                    if (canceled)
                    {
                        e.Cancel = true;
                        return;
                    }


                    string uri = txtUrl.Text.Trim() + img.Value;
                    listBox1.Invoke(ulb, uri); finished++;
                    string newname = cbDuide.Checked ? pagename + '-' + finished.ToString() + ".jpg" : img.Key;
                    FileInfo fi = new FileInfo(dir + newname);
                    if (fi.Exists)
                    {
                        listBox1.Invoke(ulb, fi.Name + " Already existed.");
                        continue;
                    }

                    Client.DownloadFile(uri, fi.ToString());
                    backgroundWorker1.ReportProgress(finished * 100 / reqs);
                    listBox1.Invoke(ulb, fi.Name + " Download completed. (" + finished + " of " + reqs + ")");

                }
                catch (System.Net.WebException exp)
                {
                    listBox1.Invoke(ulb, exp.Message);
                }
            }


            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (backgroundWorker1.CancellationPending) return;
            canceled = true;
            if (backgroundWorker1.IsBusy)
                backgroundWorker1.CancelAsync();
            btnCancel.Enabled = false;
        }

        delegate void UpdateListBox(string s);
        delegate void UpdatePrograssBar(int percentage);
        UpdateListBox ulb;

        void UpdateListBoxHandler(string str)
        {
            listBox1.SetSelected(this.listBox1.Items.Add(str), true);
        }

        private void backgroundWorker1_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {

            btnDownload.Enabled = true;
            btnCancel.Enabled = false;
            ulb.Invoke(e.Cancelled ? "Task terminated." : "Task completed!");
            this.Activate();
        }

        private void backgroundWorker1_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            UpdatePrograssBar upb = p => progressBar1.Value = p;
            progressBar1.Invoke(upb, e.ProgressPercentage);
        }

        private void listBox1_DrawItem(object sender, DrawItemEventArgs e)
        {
            //
            // Draw the background of the ListBox control for each item.
            // Create a new Brush and initialize to a Black colored brush
            // by default.
            //
            Brush brush = Brushes.Black;
            //
            // Determine the color of the brush to draw each item based on 
            // the index of the item to draw.
            //
            if((e.State & DrawItemState.Selected)!=0)
            {
                string strItem = (sender as ListBox).Items[e.Index].ToString();
                if (strItem.Contains("Already"))
                {
                    brush = Brushes.Red;
                }
                else if (strItem.Contains("Download"))
                {
                    brush = Brushes.Green;
                }
                else if (strItem.Contains("Task"))
                {
                    brush = Brushes.Indigo;
                }            
                e.Graphics.DrawString(strItem, e.Font, brush, e.Bounds, StringFormat.GenericDefault);
            }
        }

    }
        

}
