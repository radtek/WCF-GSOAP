using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//参考链接：http://blog.csdn.net/caowei880123/article/details/49129211
//------------------------------------------------------------------------------
// c#调用gsoap发布的webservice
//  1.下载webservice发布的wsdl文件 
//  2.通过vs命令行到wsdl文件地址
//  3.执行wsdl -o *.wsdl便能生成同名cs文件
//  4.导入c#工程即可。                                     
//------------------------------------------------------------------------------

namespace GsoapClient
{
    class Program
    {
        static void Main(string[] args)
        {
            string ServerAddr = "http://127.0.0.1:8089";//WebService地址
            ServerTest Proxy = new ServerTest(ServerAddr);

            Console.WriteLine(Proxy.add(1, 2).ToString());
            Console.WriteLine(Proxy.sub(2, 1).ToString());
            Console.Read();
            return ;             
        }
    }
}
