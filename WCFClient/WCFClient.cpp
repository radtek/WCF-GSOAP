//#include "soapH.h"
#include "soapBasicHttpBinding_USCOREIWCFTestProxy.h"
#include "BasicHttpBinding_USCOREIWCFTest.nsmap"

//�ο����ӣ�http://www.cnblogs.com/hgwang/p/5840265.html
//------------------------------------------------------------------------------
// c++����wcf service
//  1.ʹ��gsoap�µ�bin�����wsdl2h ��wcf�ṩ��httpget���ص�wsdlת����*.h
//				wsdl2h -s -t ../../typemap.dat  -o WCFTest.h  http://127.0.0.1:8001/WCFTest/wsdl
//  2.ת���ɹ���ʹ��soapcpp2 ��ͷ�ļ����ɶ���ͻ�����
//				soapcpp2   -C -I ../../import(import�ļ���·��) WCFTest.h -L -i -x -1��������Ϸ������415����
//  3.���ɵ��ļ�����stdsoap2.cpp��stdsoap2.h���빤��Ŀ¼�²�����
//  4.����ʹ�÷�������
//------------------------------------------------------------------------------

int main()
{
	const char* endPointUrl = "http://127.0.0.1:8001/WCFTest";
	BasicHttpBinding_USCOREIWCFTestProxy Proxy(endPointUrl);
	soap_set_mode(&Proxy, SOAP_C_UTFSTRING);//�����ַ���
	int a = 1, b = 2, c = 3, d = 4;
	//Add������������뷵��ʵ��
	_tempuri__Add requestAdd;
	_tempuri__AddResponse responseAdd;
	requestAdd.a = &a;
	requestAdd.b = &b;
	//Sub������������뷵��ʵ��
	_tempuri__Sub requestSub;
	_tempuri__SubResponse responseSub;
	requestSub.a = &d;
	requestSub.b = &c;

	if (Proxy.Add(&requestAdd, responseAdd) == SOAP_OK)//������ȷ��ɷ���ΪSOAP_OK
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