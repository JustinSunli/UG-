using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace ModifyDimPlane
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            try
            {
                textBox1.Text = "_asm1.prt";
                textBox2.Text = "D:\\ug_two\\model\\";

            }
            catch (System.Exception ex)
            {
            	
            }
           
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void OK_Click(object sender, EventArgs e)
        {
            str_name = textBox1.Text;
            str_file = textBox2.Text;
            this.DialogResult = DialogResult.OK;
            this.Close();
            //Application.Exit();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
