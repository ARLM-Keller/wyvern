namespace DuideHeels
{
    partial class BatchAction
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
            this.lblFrom = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.lblTo = new System.Windows.Forms.Label();
            this.btnSet = new System.Windows.Forms.Button();
            this.btnCancel = new System.Windows.Forms.Button();
            this.udFrom = new System.Windows.Forms.NumericUpDown();
            this.udTo = new System.Windows.Forms.NumericUpDown();
            ((System.ComponentModel.ISupportInitialize)(this.udFrom)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.udTo)).BeginInit();
            this.SuspendLayout();
            // 
            // lblFrom
            // 
            this.lblFrom.AutoSize = true;
            this.lblFrom.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblFrom.ForeColor = System.Drawing.Color.LimeGreen;
            this.lblFrom.Location = new System.Drawing.Point(69, 75);
            this.lblFrom.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.lblFrom.Name = "lblFrom";
            this.lblFrom.Size = new System.Drawing.Size(48, 19);
            this.lblFrom.TabIndex = 1;
            this.lblFrom.Text = "From:";
            // 
            // label1
            // 
            this.label1.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.ForeColor = System.Drawing.SystemColors.Highlight;
            this.label1.Location = new System.Drawing.Point(-1, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(324, 19);
            this.label1.TabIndex = 2;
            this.label1.Text = "Please input index number of download pages.";
            // 
            // lblTo
            // 
            this.lblTo.AutoSize = true;
            this.lblTo.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTo.ForeColor = System.Drawing.Color.LimeGreen;
            this.lblTo.Location = new System.Drawing.Point(69, 121);
            this.lblTo.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.lblTo.Name = "lblTo";
            this.lblTo.Size = new System.Drawing.Size(30, 19);
            this.lblTo.TabIndex = 4;
            this.lblTo.Text = "To:";
            // 
            // btnSet
            // 
            this.btnSet.AutoSize = true;
            this.btnSet.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnSet.ForeColor = System.Drawing.Color.DarkCyan;
            this.btnSet.Location = new System.Drawing.Point(57, 160);
            this.btnSet.Name = "btnSet";
            this.btnSet.Size = new System.Drawing.Size(87, 29);
            this.btnSet.TabIndex = 5;
            this.btnSet.Text = "Set";
            this.btnSet.UseVisualStyleBackColor = true;
            this.btnSet.Click += new System.EventHandler(this.btnSet_Click);
            // 
            // btnCancel
            // 
            this.btnCancel.AutoSize = true;
            this.btnCancel.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.btnCancel.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnCancel.ForeColor = System.Drawing.Color.DarkCyan;
            this.btnCancel.Location = new System.Drawing.Point(179, 160);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(87, 29);
            this.btnCancel.TabIndex = 6;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.UseVisualStyleBackColor = true;
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // udFrom
            // 
            this.udFrom.AutoSize = true;
            this.udFrom.Location = new System.Drawing.Point(113, 73);
            this.udFrom.Maximum = new decimal(new int[] {
            10000,
            0,
            0,
            0});
            this.udFrom.Minimum = new decimal(new int[] {
            100,
            0,
            0,
            0});
            this.udFrom.Name = "udFrom";
            this.udFrom.Size = new System.Drawing.Size(120, 25);
            this.udFrom.TabIndex = 7;
            this.udFrom.Value = new decimal(new int[] {
            100,
            0,
            0,
            0});
            // 
            // udTo
            // 
            this.udTo.AutoSize = true;
            this.udTo.Increment = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.udTo.Location = new System.Drawing.Point(113, 119);
            this.udTo.Maximum = new decimal(new int[] {
            10000,
            0,
            0,
            0});
            this.udTo.Minimum = new decimal(new int[] {
            100,
            0,
            0,
            0});
            this.udTo.Name = "udTo";
            this.udTo.Size = new System.Drawing.Size(120, 25);
            this.udTo.TabIndex = 8;
            this.udTo.Value = new decimal(new int[] {
            100,
            0,
            0,
            0});
            // 
            // BatchAction
            // 
            this.AcceptButton = this.btnSet;
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 19F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoValidate = System.Windows.Forms.AutoValidate.EnablePreventFocusChange;
            this.CancelButton = this.btnCancel;
            this.ClientSize = new System.Drawing.Size(323, 205);
            this.ControlBox = false;
            this.Controls.Add(this.udTo);
            this.Controls.Add(this.udFrom);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnSet);
            this.Controls.Add(this.lblTo);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.lblFrom);
            this.Font = new System.Drawing.Font("Microsoft YaHei", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Margin = new System.Windows.Forms.Padding(4);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "BatchAction";
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Batch Download files";
            this.TopMost = true;
            ((System.ComponentModel.ISupportInitialize)(this.udFrom)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.udTo)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblFrom;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lblTo;
        private System.Windows.Forms.Button btnSet;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.NumericUpDown udFrom;
        private System.Windows.Forms.NumericUpDown udTo;
    }
}