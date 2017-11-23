using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;

namespace WCFServer
{
    // 注意: 使用“重构”菜单上的“重命名”命令，可以同时更改代码和配置文件中的类名“WCFTest”。
    public class WCFTest : IWCFTest
    {
        public void DoWork()
        {
            Console.WriteLine("DoWork被调用!");
        }

        public int Add(int a,int b)
        {
            Console.WriteLine("Add被调用!");
            return a + b;
        }

        public int Sub(int a,int b)
        {
            Console.WriteLine("Sub被调用!");
            return a - b;
        }
    }
}
