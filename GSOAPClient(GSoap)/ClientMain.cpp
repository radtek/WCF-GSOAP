#include "soapServerTestProxy.h"
#include "ServerTest.nsmap"

//�ο����ӣ�http://blog.csdn.net/testcs_dn/article/details/51463367
//------------------------------------------------------------------------------
// c++�����ʽ��������webservice
//  1.ͨ��webserviceͷ�ļ�gsoap�������пͻ��˷������Ҫ��ͷ�ļ���nsmap�ļ�
//  2.soapcpp2 -i -1�������ȷ��ͨ��ʹ��-2������wcf����soapЭ����-1�ġ��� -L *.h
//  3.��soapcpp2 ���ɵ��ļ���gsoap�����stdsoap2.cpp��stdsoap2.h���Ƶ������²�����
//  4.ʹ�ô������¡�
//  5.-C -S �ֱ���ֻ���ɿͻ��˺ͷ�����ļ�
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