#include "soapServerTestService.h"
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
	ServerTestService Instance;
	return Instance.run(8089);
}

int ServerTestService::add(int a, int b, int &c)
{
	c = a + b;
	return SOAP_OK;
}

int ServerTestService::sub(int a, int b, int &c)
{
	c = a - b;
	return SOAP_OK;
}