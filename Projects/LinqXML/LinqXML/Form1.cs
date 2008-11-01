using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Xml.Linq;
using System.Text;
using System.Windows.Forms;

namespace LinqXML
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            XDocument doc = XDocument.Load(System.IO.Directory.GetCurrentDirectory()+"..\\..\\..\\Demo.xml");
            var xNode = from Xml in doc.Descendants("outline")
                        select new { Text = Xml.Attribute("text").Value, Title = Xml.Attribute("title").Value, XmlUrl = Xml.Attribute("xmlUrl").Value };

            dataGridView1.DataSource = xNode.ToList();
        
        }

    }
}
