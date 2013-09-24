using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using cliwrapperhello4;

namespace Hello4_CSharp
{
    class Program
    {

        static void Main(string[] args)
        {
            ManagedHello4 m = new ManagedHello4();
            m.SayThis("Yay, Yay, Yay!!!");
        }
    }
}
