using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


using NXOpen;
using NXOpen.UF;
using NXOpen.MenuBar;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace ModifyDimPlane
{
    class CModifyDimPlane
    {
        static int iCurrent = 0;

        [StructLayout(LayoutKind.Sequential)]
        public class KeyboardHookStruct
        {
            public int vkCode;  //定一个虚拟键码。该代码必须有一个价值的范围1至254 
            public int scanCode; // 指定的硬件扫描码的关键 
            public int flags;  // 键标志 
            public int time; // 指定的时间戳记的这个讯息 
            public int dwExtraInfo; // 指定额外信息相关的信息  
        }
        // 安装钩子

        [DllImport("user32.dll", CharSet = CharSet.Auto, CallingConvention = CallingConvention.StdCall)]

        public static extern int SetWindowsHookEx(int idHook, HookProc lpfn, IntPtr hInstance, int threadId);

        [DllImport("kernel32.dll")]
        public static extern IntPtr GetModuleHandle(string name);
        // 卸载钩子

        [DllImport("user32.dll", CharSet = CharSet.Auto, CallingConvention = CallingConvention.StdCall)]

        public static extern bool UnhookWindowsHookEx(int idHook);

        // 继续下一个钩子

        [DllImport("user32.dll", CharSet = CharSet.Auto, CallingConvention = CallingConvention.StdCall)]

        public static extern int CallNextHookEx(int idHook, int nCode, Int32 wParam, IntPtr lParam);

        // 取得当前线程编号

        [DllImport("kernel32.dll")]

        static extern int GetCurrentThreadId();

        public delegate int HookProc(int nCode, Int32 wParam, IntPtr lParam);

        static int hKeyboardHook = 0;

        private const int WM_KEYDOWN = 0x100;//KEYDOWN  
        private const int WM_KEYUP = 0x101;//KEYUP 
        private const int WM_SYSKEYDOWN = 0x104;//SYSKEYDOWN 
        private const int WM_SYSKEYUP = 0x105;//SYSKEYUP 
        static private int KeyboardHookProc(int nCode, Int32 wParam, IntPtr lParam)
        {
            if (wParam == WM_KEYDOWN)
            {
                KeyboardHookStruct MyKeyboardHookStruct = (KeyboardHookStruct)Marshal.PtrToStructure(lParam, typeof(KeyboardHookStruct));
                if (MyKeyboardHookStruct.vkCode == 9) //tab键
                {
                    //如果Tab键被按下，就调用ChangDimPlane()函数;
                    ChangeDimPlane();
                }
                //return 1;
            }
            //如果想把信息继续传递给下一个钩子过程,可以调用CallNextHookEx函数来实现;
            return CallNextHookEx(hKeyboardHook/*当前钩子过程的句柄*/, nCode, wParam, lParam);

        }
        public const int WH_KEYBOARD_LL = 13;   //线程键盘钩子监听鼠标消息设为2，全局键盘监听鼠标消息设为13 
        static public HookProc KeyboardHookProcedure;
        static public void HookStart()
        {

            if (hKeyboardHook == 0)//hKeyboardHook保存键盘钩子过程句柄;
            {

                // 创建HookProc实例

                KeyboardHookProcedure = new HookProc(KeyboardHookProc);

                // 设置线程钩子

                //hKeyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardHookProcedure, IntPtr.Zero,

                //                               GetCurrentThreadId());
                //hKeyboardHook为非0值表示已经对当前消息进行了处理;
                hKeyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardHookProcedure, GetModuleHandle(System.Diagnostics.Process.GetCurrentProcess().MainModule.ModuleName), 0);

                // 如果设置钩子失败

                if (hKeyboardHook == 0)
                {

                    HookStop();

                    throw new Exception("SetWindowsHookEx failed.");

                }

            }

        }
        static public void HookStop()
        {

            bool retKeyboard = true;

            if (hKeyboardHook != 0)
            {
                //将已安装的钩子过程移除;
                retKeyboard = UnhookWindowsHookEx(hKeyboardHook);

                hKeyboardHook = 0;

            }

            if (!(retKeyboard)) throw new Exception("UnhookWindowsHookEx  failed.");

        }

        public static void ChangeDimPlane()
        {
            Selection oSlection;
            oSlection=Program.theUI.SelectionManager;
            if (oSlection == null) //没有选择
                return;
            if (oSlection.GetNumSelectedObjects() <= 0)
                return;
            //判断选择的是否是dim、annotation
            NXOpen.Annotations.Annotation oAnnotation;
            //oAnnotation只能得到一个对象;
            oAnnotation = (NXOpen.Annotations.Annotation) oSlection.GetSelectedObject(0);
            if (oAnnotation == null)
                return;

            Xform xform1;
            Xform xform2;
            Xform xform3;

            
            //函数GetInferredAnnotationPlane()得到推断的标注平面;
            xform1 = oAnnotation.GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.YzOfWcs/*4*/);
            xform2 = oAnnotation.GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.XyOfWcs/*1*/);
            xform3 = oAnnotation.GetInferredAnnotationPlane(NXOpen.Annotations.PmiDefaultPlane.XzOfWcs/*3*/);
                
            NXOpen.Session.UndoMarkId markId1;
            markId1 = Program.theSession.SetUndoMark(NXOpen.Session.MarkVisibility.Visible, "Edit Dimension");

            iCurrent++;
            if (iCurrent > 3)
                iCurrent = 1;
            if (iCurrent == 1)
                oAnnotation.AnnotationPlane = xform1;
            else if (iCurrent == 2)
                oAnnotation.AnnotationPlane = xform2;
            else if (iCurrent == 3)
                oAnnotation.AnnotationPlane = xform3;
            int nErrs1;
            nErrs1 = Program.theSession.UpdateManager.DoUpdate(markId1);

        }

    }
}
