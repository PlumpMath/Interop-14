using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using System.Runtime.InteropServices;

namespace Hello2_CSharp
{
    class Program
    {
        [DllImport("../../../Debug/Hello2_DLL.dll", EntryPoint = "HelloWorld_New")]
        public static extern IntPtr NewHello2World();

        [DllImport("../../../Debug/Hello2_DLL.dll", EntryPoint = "Hello2_DLL_Delete")]
        public static extern void DeleteHello2(IntPtr pHello2);

        [DllImport("../../../Debug/Hello2_DLL.dll", EntryPoint = "?SayThis@Hello2_DLL@@QAEXPA_W@Z", 
                                              CharSet = CharSet.Unicode, 
                                              CallingConvention = CallingConvention.ThisCall)]

        public static extern void SayThis(IntPtr pThis, String phrase);


        static void Main(string[] args)
        {
            IntPtr h2 = NewHello2World();
            SayThis(h2, "Hello World Hello2_DLL Marshal123");
            DeleteHello2(h2);
        }
    }
}
