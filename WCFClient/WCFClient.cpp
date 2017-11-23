//#include "soapH.h"
#include "soapBasicHttpBinding_USCOREIWCFTestProxy.h"
#include "BasicHttpBinding_USCOREIWCFTest.nsmap"

//参考链接：http://www.cnblogs.com/hgwang/p/5840265.html
//------------------------------------------------------------------------------
// c++调用wcf service
//  1.使用gsoap下的bin里面的wsdl2h 讲wcf提供的httpget下载的wsdl转化成*.h
//				wsdl2h -s -t ../../typemap.dat  -o WCFTest.h  http://127.0.0.1:8001/WCFTest/wsdl
//  2.转化成功后使用soapcpp2 和头文件生成多个客户端类
//				soapcpp2   -C -I ../../import(import文件夹路径) WCFTest.h -L -i -x -1（必须加上否则初现415错误）
//  3.生成的文件加上stdsoap2.cpp，stdsoap2.h加入工程目录下并引用
//  4.具体使用方法如下
//------------------------------------------------------------------------------

int main()
{
	const char* endPointUrl = "http://127.0.0.1:8001/WCFTest";
	BasicHttpBinding_USCOREIWCFTestProxy Proxy(endPointUrl);
	soap_set_mode(&Proxy, SOAP_C_UTFSTRING);//设置字符集
	int a = 1, b = 2, c = 3, d = 4;
	//Add方法请求参数与返回实例
	_tempuri__Add requestAdd;
	_tempuri__AddResponse responseAdd;
	requestAdd.a = &a;
	requestAdd.b = &b;
	//Sub方法请求参数与返回实例
	_tempuri__Sub requestSub;
	_tempuri__SubResponse responseSub;
	requestSub.a = &d;
	requestSub.b = &c;

	if (Proxy.Add(&requestAdd, responseAdd) == SOAP_OK)//调用正确完成返回为SOAP_OK
	{
		std::cout << a << " + " << b << " = " << *(responseAdd.AddResult) << std::endl;
	}
	if (Proxy.Sub(&requestSub, responseSub) == SOAP_OK)
	{
		std::cout << d << " - " << c << " = " << *(responseSub.SubResult) << std::endl;
	}

	Proxy.destroy();
	system("Pause");
	return 0;
}