#include "soapServerTestProxy.h"
#include "ServerTest.nsmap"

//参考链接：http://blog.csdn.net/testcs_dn/article/details/51463367
//------------------------------------------------------------------------------
// c++类的形式发布调用webservice
//  1.通过webservice头文件gsoap生成所有客户端服务的需要的头文件及nsmap文件
//  2.soapcpp2 -i -1（这个不确定通常使用-2，不过wcf服务soap协议是-1的。） -L *.h
//  3.讲soapcpp2 生成的文件及gsoap下面的stdsoap2.cpp，stdsoap2.h复制到工程下并引用
//  4.使用代码如下。
//  5.-C -S 分别是只生成客户端和服务端文件
//------------------------------------------------------------------------------

int main()
{
	ServerTestProxy proxy;
	proxy.soap_endpoint = "http://127.0.0.1:8089";
	int result = 0;
	proxy.add(1, 1,result);
	std::cout << "1 + 1 = " << result << std::endl;
	proxy.sub(2, 1, result);
	std::cout << "2 - 1 = " << result << std::endl;
	system("pause");
	return 0;
}