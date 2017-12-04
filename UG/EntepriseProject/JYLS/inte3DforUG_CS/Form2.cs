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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
            textBox1.Text = "_model3.prt";
            textBox2.Text = "D:\\ug_two\\model\\";
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void OK_Click(object sender, EventArgs e)
        {
            str_name = textBox1.Text;
            str_file = textBox2.Text;
            //this.DialogResult = DialogResult.OK;
            this.Close();
        }

        private void Cancle_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        //private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        //{
        //    openFileDialog1.InitialDirectory = "C:\\";//初始加载路径为C盘；
        //    openFileDialog1.Filter = "文本文件 (*.part)|*.part";//过滤你想设置的文本文件类型（这是txt型）
        //    // openFileDialog1.Filter = "文本文件 (*.txt)|*.txt|All files (*.*)|*.*";（这是全部类型文件）
        //    if (this.openFileDialog1.ShowDialog() == DialogResult.OK)
        //    {
        //        //textBox1.Text = Path.GetFileName(openFileDialog1.FileName);//显示文件的名字
        //    }
        //}

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog fopen = new OpenFileDialog();
            fopen.Filter = " 部件（*.part）|*.part|All files (*.*)|*.*";
            fopen.ShowDialog();
            
        }
    }
}
