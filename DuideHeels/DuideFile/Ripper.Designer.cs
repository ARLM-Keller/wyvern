namespace DuideHeels
{
    partial class Ripper
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Ripper));
            this.cmsLV = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.cmmiNextFile = new System.Windows.Forms.ToolStripMenuItem();
            this.cmmiNextPage = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.cmmiSaveAll = new System.Windows.Forms.ToolStripMenuItem();
            this.cmmiDeleteAll = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.cmmiWait = new System.Windows.Forms.ToolStripMenuItem();
            this.cmmiClear = new System.Windows.Forms.ToolStripMenuItem();
            this.label2 = new System.Windows.Forms.Label();
            this.folderBrowserDialog1 = new System.Windows.Forms.FolderBrowserDialog();
            this.DownloadFiles = new System.ComponentModel.BackgroundWorker();
            this.label3 = new System.Windows.Forms.Label();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.listView1 = new System.Windows.Forms.ListView();
            this.chName = new System.Windows.Forms.ColumnHeader();
            this.chDim = new System.Windows.Forms.ColumnHeader();
            this.chSize = new System.Windows.Forms.ColumnHeader();
            this.chState = new System.Windows.Forms.ColumnHeader();
            this.btnMinus = new System.Windows.Forms.Button();
            this.btnPlus = new System.Windows.Forms.Button();
            this.tbContent = new System.Windows.Forms.TextBox();
            this.lblCookie = new System.Windows.Forms.Label();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel1 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripProgressBar1 = new System.Windows.Forms.ToolStripProgressBar();
            this.lblBatch = new System.Windows.Forms.ToolStripStatusLabel();
            this.txtParse = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.btnDownloadCancel = new Wyvern.SplitButton();
            this.cmsButton = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.btnBatch = new System.Windows.Forms.ToolStripMenuItem();
            this.localDir = new System.Windows.Forms.TextBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.cmsPB = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.cmmiSave = new System.Windows.Forms.ToolStripMenuItem();
            this.cmmiDelete = new System.Windows.Forms.ToolStripMenuItem();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.tmMinus = new System.Windows.Forms.Timer(this.components);
            this.tmPlus = new System.Windows.Forms.Timer(this.components);
            this.cmsLV.SuspendLayout();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.statusStrip1.SuspendLayout();
            this.cmsButton.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.cmsPB.SuspendLayout();
            this.SuspendLayout();
            // 
            // cmsLV
            // 
            this.cmsLV.Enabled = false;
            this.cmsLV.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.cmmiNextFile,
            this.cmmiNextPage,
            this.toolStripSeparator1,
            this.cmmiSaveAll,
            this.cmmiDeleteAll,
            this.toolStripSeparator2,
            this.cmmiWait,
            this.cmmiClear});
            this.cmsLV.Name = "contextMenuStrip1";
            this.cmsLV.ShowCheckMargin = true;
            this.cmsLV.ShowImageMargin = false;
            this.cmsLV.ShowItemToolTips = false;
            this.cmsLV.Size = new System.Drawing.Size(137, 148);
            this.cmsLV.Closed += new System.Windows.Forms.ToolStripDropDownClosedEventHandler(this.cmsLV_Closed);
            // 
            // cmmiNextFile
            // 
            this.cmmiNextFile.Enabled = false;
            this.cmmiNextFile.Name = "cmmiNextFile";
            this.cmmiNextFile.Size = new System.Drawing.Size(136, 22);
            this.cmmiNextFile.Text = "Next File";
            this.cmmiNextFile.Click += new System.EventHandler(this.cmmiNextFile_Click);
            // 
            // cmmiNextPage
            // 
            this.cmmiNextPage.Enabled = false;
            this.cmmiNextPage.Name = "cmmiNextPage";
            this.cmmiNextPage.Size = new System.Drawing.Size(136, 22);
            this.cmmiNextPage.Text = "Next Page";
            this.cmmiNextPage.Click += new System.EventHandler(this.cmmiNextPage_Click);
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(133, 6);
            // 
            // cmmiSaveAll
            // 
            this.cmmiSaveAll.CheckOnClick = true;
            this.cmmiSaveAll.Enabled = false;
            this.cmmiSaveAll.Name = "cmmiSaveAll";
            this.cmmiSaveAll.Size = new System.Drawing.Size(136, 22);
            this.cmmiSaveAll.Text = "Small Files";
            // 
            // cmmiDeleteAll
            // 
            this.cmmiDeleteAll.Enabled = false;
            this.cmmiDeleteAll.Name = "cmmiDeleteAll";
            this.cmmiDeleteAll.Size = new System.Drawing.Size(136, 22);
            this.cmmiDeleteAll.Text = "Drop Group";
            this.cmmiDeleteAll.Click += new System.EventHandler(this.cmmiDeleteAll_Click);
            // 
            // toolStripSeparator2
            // 
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            this.toolStripSeparator2.Size = new System.Drawing.Size(133, 6);
            // 
            // cmmiWait
            // 
            this.cmmiWait.CheckOnClick = true;
            this.cmmiWait.Enabled = false;
            this.cmmiWait.Name = "cmmiWait";
            this.cmmiWait.Size = new System.Drawing.Size(136, 22);
            this.cmmiWait.Text = "Wait 5 secs";
            // 
            // cmmiClear
            // 
            this.cmmiClear.Enabled = false;
            this.cmmiClear.Name = "cmmiClear";
            this.cmmiClear.Size = new System.Drawing.Size(136, 22);
            this.cmmiClear.Text = "Clear List";
            this.cmmiClear.Click += new System.EventHandler(this.btnClear_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(3, 115);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(30, 17);
            this.label2.TabIndex = 5;
            this.label2.Text = "Dir:";
            // 
            // DownloadFiles
            // 
            this.DownloadFiles.WorkerReportsProgress = true;
            this.DownloadFiles.WorkerSupportsCancellation = true;
            this.DownloadFiles.DoWork += new System.ComponentModel.DoWorkEventHandler(this.DownloadFiles_DoWork);
            this.DownloadFiles.RunWorkerCompleted += new System.ComponentModel.RunWorkerCompletedEventHandler(this.DownloadFiles_RunWorkerCompleted);
            this.DownloadFiles.ProgressChanged += new System.ComponentModel.ProgressChangedEventHandler(this.DownloadFiles_ProgressChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(3, 27);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 17);
            this.label3.TabIndex = 19;
            this.label3.Text = "Url:";
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 0);
            this.splitContainer1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.AutoScroll = true;
            this.splitContainer1.Panel1.Controls.Add(this.listView1);
            this.splitContainer1.Panel1.Controls.Add(this.btnMinus);
            this.splitContainer1.Panel1.Controls.Add(this.btnPlus);
            this.splitContainer1.Panel1.Controls.Add(this.tbContent);
            this.splitContainer1.Panel1.Controls.Add(this.lblCookie);
            this.splitContainer1.Panel1.Controls.Add(this.statusStrip1);
            this.splitContainer1.Panel1.Controls.Add(this.label3);
            this.splitContainer1.Panel1.Controls.Add(this.txtParse);
            this.splitContainer1.Panel1.Controls.Add(this.button2);
            this.splitContainer1.Panel1.Controls.Add(this.btnDownloadCancel);
            this.splitContainer1.Panel1.Controls.Add(this.label2);
            this.splitContainer1.Panel1.Controls.Add(this.localDir);
            this.splitContainer1.Panel1.Padding = new System.Windows.Forms.Padding(1);
            this.splitContainer1.Panel1MinSize = 400;
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.pictureBox1);
            this.splitContainer1.Panel2.Padding = new System.Windows.Forms.Padding(1);
            this.splitContainer1.Panel2Collapsed = true;
            this.splitContainer1.Size = new System.Drawing.Size(787, 488);
            this.splitContainer1.SplitterDistance = 407;
            this.splitContainer1.SplitterWidth = 5;
            this.splitContainer1.TabIndex = 23;
            // 
            // listView1
            // 
            this.listView1.AllowColumnReorder = true;
            this.listView1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.chName,
            this.chDim,
            this.chSize,
            this.chState});
            this.listView1.ContextMenuStrip = this.cmsLV;
            this.listView1.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.listView1.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.Nonclickable;
            this.listView1.Location = new System.Drawing.Point(1, 160);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(785, 305);
            this.listView1.TabIndex = 30;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.View = System.Windows.Forms.View.Details;
            this.listView1.MouseClick += new System.Windows.Forms.MouseEventHandler(this.listView1_MouseClick);
            this.listView1.ItemMouseHover += new System.Windows.Forms.ListViewItemMouseHoverEventHandler(this.listView1_ItemMouseHover);
            this.listView1.SelectedIndexChanged += new System.EventHandler(this.listView1_SelectedIndexChanged);
            this.listView1.KeyDown += new System.Windows.Forms.KeyEventHandler(this.listView1_KeyDown);
            // 
            // chName
            // 
            this.chName.Text = "Name";
            this.chName.Width = 79;
            // 
            // chDim
            // 
            this.chDim.Text = "Dimension";
            this.chDim.Width = 85;
            // 
            // chSize
            // 
            this.chSize.Text = "Size";
            this.chSize.Width = 52;
            // 
            // chState
            // 
            this.chState.Text = "State";
            this.chState.Width = 136;
            // 
            // btnMinus
            // 
            this.btnMinus.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnMinus.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnMinus.Location = new System.Drawing.Point(751, 64);
            this.btnMinus.Name = "btnMinus";
            this.btnMinus.Size = new System.Drawing.Size(29, 29);
            this.btnMinus.TabIndex = 29;
            this.btnMinus.Text = "-";
            this.btnMinus.UseVisualStyleBackColor = true;
            this.btnMinus.Click += new System.EventHandler(this.btnMinus_Click);
            this.btnMinus.MouseDown += new System.Windows.Forms.MouseEventHandler(this.btnMinus_MouseDown);
            this.btnMinus.MouseUp += new System.Windows.Forms.MouseEventHandler(this.btnMinus_MouseUp);
            // 
            // btnPlus
            // 
            this.btnPlus.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnPlus.AutoSize = true;
            this.btnPlus.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnPlus.Location = new System.Drawing.Point(720, 64);
            this.btnPlus.Name = "btnPlus";
            this.btnPlus.Size = new System.Drawing.Size(29, 29);
            this.btnPlus.TabIndex = 28;
            this.btnPlus.Text = "+";
            this.btnPlus.UseVisualStyleBackColor = true;
            this.btnPlus.Click += new System.EventHandler(this.btnPlus_Click);
            this.btnPlus.MouseDown += new System.Windows.Forms.MouseEventHandler(this.btnPlus_MouseDown);
            this.btnPlus.MouseUp += new System.Windows.Forms.MouseEventHandler(this.btnPlus_MouseUp);
            // 
            // tbContent
            // 
            this.tbContent.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.tbContent.DataBindings.Add(new System.Windows.Forms.Binding("Text", global::DuideHeels.Properties.Settings.Default, "CookieContent", true, System.Windows.Forms.DataSourceUpdateMode.OnPropertyChanged));
            this.tbContent.Location = new System.Drawing.Point(57, 68);
            this.tbContent.Name = "tbContent";
            this.tbContent.Size = new System.Drawing.Size(657, 23);
            this.tbContent.TabIndex = 27;
            this.tbContent.Text = global::DuideHeels.Properties.Settings.Default.CookieContent;
            // 
            // lblCookie
            // 
            this.lblCookie.AutoSize = true;
            this.lblCookie.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblCookie.Location = new System.Drawing.Point(3, 71);
            this.lblCookie.Name = "lblCookie";
            this.lblCookie.Size = new System.Drawing.Size(53, 17);
            this.lblCookie.TabIndex = 26;
            this.lblCookie.Text = "Cookie:";
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel1,
            this.toolStripProgressBar1,
            this.lblBatch});
            this.statusStrip1.Location = new System.Drawing.Point(1, 465);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Padding = new System.Windows.Forms.Padding(1, 0, 16, 0);
            this.statusStrip1.Size = new System.Drawing.Size(785, 22);
            this.statusStrip1.TabIndex = 22;
            this.statusStrip1.Text = "statusStrip1";
            // 
            // toolStripStatusLabel1
            // 
            this.toolStripStatusLabel1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.toolStripStatusLabel1.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.toolStripStatusLabel1.Name = "toolStripStatusLabel1";
            this.toolStripStatusLabel1.Size = new System.Drawing.Size(39, 17);
            this.toolStripStatusLabel1.Text = "Done";
            // 
            // toolStripProgressBar1
            // 
            this.toolStripProgressBar1.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Bold);
            this.toolStripProgressBar1.Name = "toolStripProgressBar1";
            this.toolStripProgressBar1.Size = new System.Drawing.Size(100, 21);
            this.toolStripProgressBar1.Style = System.Windows.Forms.ProgressBarStyle.Continuous;
            this.toolStripProgressBar1.Visible = false;
            // 
            // lblBatch
            // 
            this.lblBatch.Font = new System.Drawing.Font("Segoe UI", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblBatch.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.lblBatch.Name = "lblBatch";
            this.lblBatch.Size = new System.Drawing.Size(0, 17);
            // 
            // txtParse
            // 
            this.txtParse.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtParse.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.SuggestAppend;
            this.txtParse.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.AllUrl;
            this.txtParse.DataBindings.Add(new System.Windows.Forms.Binding("Text", global::DuideHeels.Properties.Settings.Default, "txtParse", true, System.Windows.Forms.DataSourceUpdateMode.OnPropertyChanged));
            this.txtParse.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.txtParse.Location = new System.Drawing.Point(32, 24);
            this.txtParse.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.txtParse.Name = "txtParse";
            this.txtParse.ScrollBars = System.Windows.Forms.ScrollBars.Horizontal;
            this.txtParse.Size = new System.Drawing.Size(682, 23);
            this.txtParse.TabIndex = 20;
            this.txtParse.Text = global::DuideHeels.Properties.Settings.Default.txtParse;
            this.toolTip1.SetToolTip(this.txtParse, "The URL to be parsed");
            this.txtParse.WordWrap = false;
            // 
            // button2
            // 
            this.button2.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.button2.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.button2.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.Image = global::DuideHeels.Properties.Resources.folder_48;
            this.button2.Location = new System.Drawing.Point(720, 96);
            this.button2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(60, 54);
            this.button2.TabIndex = 15;
            this.toolTip1.SetToolTip(this.button2, "Open the folder you want to store files");
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // btnDownloadCancel
            // 
            this.btnDownloadCancel.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnDownloadCancel.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.btnDownloadCancel.ContextMenuStrip = this.cmsButton;
            this.btnDownloadCancel.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnDownloadCancel.Image = global::DuideHeels.Properties.Resources.accepted_48;
            this.btnDownloadCancel.Location = new System.Drawing.Point(720, 5);
            this.btnDownloadCancel.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.btnDownloadCancel.Name = "btnDownloadCancel";
            this.btnDownloadCancel.Size = new System.Drawing.Size(60, 54);
            this.btnDownloadCancel.TabIndex = 3;
            this.btnDownloadCancel.UseVisualStyleBackColor = true;
            this.btnDownloadCancel.Click += new System.EventHandler(this.DownloadCancel_Click);
            // 
            // cmsButton
            // 
            this.cmsButton.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.btnBatch});
            this.cmsButton.Name = "cmsButton";
            this.cmsButton.ShowItemToolTips = false;
            this.cmsButton.Size = new System.Drawing.Size(110, 26);
            // 
            // btnBatch
            // 
            this.btnBatch.Font = new System.Drawing.Font("Segoe UI", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnBatch.Image = global::DuideHeels.Properties.Resources.add_48;
            this.btnBatch.Name = "btnBatch";
            this.btnBatch.Size = new System.Drawing.Size(109, 22);
            this.btnBatch.Text = "Batch";
            this.btnBatch.TextImageRelation = System.Windows.Forms.TextImageRelation.Overlay;
            this.btnBatch.Click += new System.EventHandler(this.btnBatch_Click);
            // 
            // localDir
            // 
            this.localDir.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.localDir.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.SuggestAppend;
            this.localDir.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.FileSystemDirectories;
            this.localDir.DataBindings.Add(new System.Windows.Forms.Binding("Text", global::DuideHeels.Properties.Settings.Default, "txtDir", true, System.Windows.Forms.DataSourceUpdateMode.OnPropertyChanged));
            this.localDir.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.localDir.Location = new System.Drawing.Point(32, 112);
            this.localDir.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.localDir.Name = "localDir";
            this.localDir.Size = new System.Drawing.Size(682, 23);
            this.localDir.TabIndex = 4;
            this.localDir.Text = global::DuideHeels.Properties.Settings.Default.txtDir;
            this.toolTip1.SetToolTip(this.localDir, "Directory in which images will be stored.");
            this.localDir.Leave += new System.EventHandler(this.localDir_Leave);
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.pictureBox1.ContextMenuStrip = this.cmsPB;
            this.pictureBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.pictureBox1.InitialImage = null;
            this.pictureBox1.Location = new System.Drawing.Point(1, 1);
            this.pictureBox1.Margin = new System.Windows.Forms.Padding(0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(23, 98);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 22;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.DoubleClick += new System.EventHandler(this.pictureBox1_DoubleClick);
            // 
            // cmsPB
            // 
            this.cmsPB.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.cmmiSave,
            this.cmmiDelete});
            this.cmsPB.Name = "cmsPB";
            this.cmsPB.ShowImageMargin = false;
            this.cmsPB.Size = new System.Drawing.Size(83, 48);
            // 
            // cmmiSave
            // 
            this.cmmiSave.Name = "cmmiSave";
            this.cmmiSave.Size = new System.Drawing.Size(82, 22);
            this.cmmiSave.Text = "Save";
            this.cmmiSave.Click += new System.EventHandler(this.cmmiSave_Click);
            // 
            // cmmiDelete
            // 
            this.cmmiDelete.Name = "cmmiDelete";
            this.cmmiDelete.Size = new System.Drawing.Size(82, 22);
            this.cmmiDelete.Text = "Delete";
            this.cmmiDelete.Click += new System.EventHandler(this.cmmiDelete_Click);
            // 
            // toolTip1
            // 
            this.toolTip1.AutoPopDelay = 5000;
            this.toolTip1.InitialDelay = 300;
            this.toolTip1.ReshowDelay = 100;
            // 
            // tmMinus
            // 
            this.tmMinus.Tick += new System.EventHandler(this.btnMinus_Click);
            // 
            // tmPlus
            // 
            this.tmPlus.Tick += new System.EventHandler(this.btnPlus_Click);
            // 
            // Ripper
            // 
            this.AcceptButton = this.btnDownloadCancel;
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 17F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(787, 488);
            this.Controls.Add(this.splitContainer1);
            this.Font = new System.Drawing.Font("Microsoft YaHei", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.SystemColors.WindowText;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.KeyPreview = true;
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Name = "Ripper";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Duide & Heels - Design by Wyvern";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Ripper_KeyDown);
            this.cmsLV.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            this.splitContainer1.ResumeLayout(false);
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.cmsButton.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.cmsPB.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private Wyvern.SplitButton btnDownloadCancel;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox localDir;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.FolderBrowserDialog folderBrowserDialog1;
        internal System.ComponentModel.BackgroundWorker DownloadFiles;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtParse;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel1;
        private System.Windows.Forms.ToolStripProgressBar toolStripProgressBar1;
        private System.Windows.Forms.ToolTip toolTip1;
        private System.Windows.Forms.TextBox tbContent;
        private System.Windows.Forms.Label lblCookie;
        private System.Windows.Forms.Button btnPlus;
        private System.Windows.Forms.Button btnMinus;
        private System.Windows.Forms.Timer tmMinus;
        private System.Windows.Forms.Timer tmPlus;
        private System.Windows.Forms.ContextMenuStrip cmsLV;
        private System.Windows.Forms.ToolStripMenuItem cmmiNextFile;
        private System.Windows.Forms.ToolStripMenuItem cmmiWait;
        private System.Windows.Forms.ToolStripMenuItem cmmiNextPage;
        private System.Windows.Forms.ContextMenuStrip cmsPB;
        private System.Windows.Forms.ToolStripMenuItem cmmiSave;
        private System.Windows.Forms.ToolStripMenuItem cmmiDelete;
        private System.Windows.Forms.ToolStripMenuItem cmmiSaveAll;
        private System.Windows.Forms.ToolStripMenuItem cmmiDeleteAll;
        private System.Windows.Forms.ToolStripStatusLabel lblBatch;
        private System.Windows.Forms.ContextMenuStrip cmsButton;
        private System.Windows.Forms.ToolStripMenuItem btnBatch;
        private System.Windows.Forms.ToolStripMenuItem cmmiClear;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.ColumnHeader chName;
        private System.Windows.Forms.ColumnHeader chDim;
        private System.Windows.Forms.ColumnHeader chSize;
        private System.Windows.Forms.ColumnHeader chState;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator2;
    }
}

