using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ServiceModel;
using System.ServiceModel.Channels;
using System.Reflection;
using WCFServer;

//------------------------------------------------------------------------------
// c#调用WCF服务
//  1.项目添加接口文件(IWCFTest.cs)
//  2.使用ChannelFactory动态创建连接。
//  3.直接使用类函数就可以了。                       
//------------------------------------------------------------------------------


namespace WCFClient_WCF_
{
    class Program
    {
        static void Main(string[] args)
        {
            //连接方法 存在多种。目前使用BasicHttpBinding，使用其他存在问题，应该是服务端应与客户端保持一致
            BasicHttpBinding thisBind = new BasicHttpBinding();

            //新建终端地址
            EndpointAddress thisAddr = new EndpointAddress("http://127.0.0.1:8001/WCFTest");            

            //创建代理类实例
            IWCFTest proxy = ChannelFactory<IWCFTest>.CreateChannel(thisBind, thisAddr);
            //调用方法
            Console.WriteLine(proxy.Add(1, 1).ToString());
            Console.WriteLine(proxy.Sub(2, 1).ToString());
            Console.ReadKey();
        }
    }
}
