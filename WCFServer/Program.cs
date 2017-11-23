using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ServiceModel;
using System.ServiceModel.Description;

//参考链接：http://www.cnblogs.com/jiagoushi/archive/2013/03/16/2964027.html
//------------------------------------------------------------------------------
// c#使用serviceHost发布WCF SERVICE
//  1.右键工程添加新建项，选择wcf服务
//  2.通过如下代码实现wcf并添加httpget（返回wsdl描述文件）。
//  3.在server.cs与Iserver.cs中分别定义与实现接口
//  4.生成即可                                     
//------------------------------------------------------------------------------

namespace WCFServer//WCF服务端。提供接口服务
{
    class Program
    {
        static void Main()
        {
            ServiceHost host = new ServiceHost(typeof(WCFTest), new Uri("http://127.0.0.1:8001/WCFTest"));

            host.AddServiceEndpoint(typeof(IWCFTest),new BasicHttpBinding(), new Uri("http://127.0.0.1:8001/WCFTest"));

            //下面为提供wsdl描述文件方法
            if (host.Description.Behaviors.Find<ServiceMetadataBehavior>() == null)
            {
                ServiceMetadataBehavior metaDataBehavior = new ServiceMetadataBehavior();//创建元数据行为对象
                metaDataBehavior.HttpGetEnabled = true;//重点 启用元数据行为的访问
                metaDataBehavior.HttpGetUrl = new Uri("http://127.0.0.1:8001/WCFTest/wsdl");
                host.Description.Behaviors.Add(metaDataBehavior);//添加元数据行为
            }
            else
            {
                ServiceMetadataBehavior temp = host.Description.Behaviors.Find<ServiceMetadataBehavior>();
                temp.HttpGetEnabled = true;
                temp.HttpGetUrl = new Uri("http://127.0.0.1:8001/WCFTest/wsdl");
            }

            host.Open();//启动服务
            Console.WriteLine("open successful!");
            Console.ReadKey(true);
        }
    }
}
