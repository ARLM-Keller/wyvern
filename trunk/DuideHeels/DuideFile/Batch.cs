namespace DuideHeels
{
    using System;
    using System.Windows.Forms;

    public partial class BatchAction : Form
    {
        public BatchAction()
        {
            InitializeComponent();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            Close();
        }

        public decimal From
        {
            get { return udFrom.Value; }
            set { udFrom.Value = value; }
        }
        public decimal To
        {
            get { return udTo.Value; }
            set { udTo.Value = value;}
        }

        private void btnSet_Click(object sender, EventArgs e)
        {
            //Do batch download actions.
            Ripper ripper = this.Owner as Ripper;
            int from = decimal.ToInt32(From), to = decimal.ToInt32(To);
            if (from >100 && from<to)
            {
                ripper.From = from; ripper.To = to;
                ripper.Range = to - from + 1;
                ripper.Url = new Uri(ripper.Url.AbsoluteUri.Substring(0, ripper.Url.AbsoluteUri.LastIndexOf('=') + 1) + from.ToString());
                ripper.BatchDownload = true;
                Close();
            }
            else
            {
                MessageBox.Show("Please input valid From/To number!", "Invalid input!", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
            }
        }
    }
}
