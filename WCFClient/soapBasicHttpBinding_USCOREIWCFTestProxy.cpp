/* soapBasicHttpBinding_USCOREIWCFTestProxy.cpp
   Generated by gSOAP 2.8.34 for WCFTest.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapBasicHttpBinding_USCOREIWCFTestProxy.h"

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy() : soap(SOAP_IO_DEFAULT)
{	BasicHttpBinding_USCOREIWCFTestProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(const BasicHttpBinding_USCOREIWCFTestProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(const struct soap &_soap) : soap(_soap)
{ }

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	BasicHttpBinding_USCOREIWCFTestProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(soap_mode iomode) : soap(iomode)
{	BasicHttpBinding_USCOREIWCFTestProxy_init(iomode, iomode);
}

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	BasicHttpBinding_USCOREIWCFTestProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	BasicHttpBinding_USCOREIWCFTestProxy_init(imode, omode);
}

BasicHttpBinding_USCOREIWCFTestProxy::~BasicHttpBinding_USCOREIWCFTestProxy()
{
	this->destroy();
	}

void BasicHttpBinding_USCOREIWCFTestProxy::BasicHttpBinding_USCOREIWCFTestProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"tempuri", "http://tempuri.org/", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

#ifndef WITH_PURE_VIRTUAL
BasicHttpBinding_USCOREIWCFTestProxy *BasicHttpBinding_USCOREIWCFTestProxy::copy()
{	BasicHttpBinding_USCOREIWCFTestProxy *dup = SOAP_NEW_COPY(BasicHttpBinding_USCOREIWCFTestProxy(*(struct soap*)this));
	return dup;
}
#endif

BasicHttpBinding_USCOREIWCFTestProxy& BasicHttpBinding_USCOREIWCFTestProxy::operator=(const BasicHttpBinding_USCOREIWCFTestProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void BasicHttpBinding_USCOREIWCFTestProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void BasicHttpBinding_USCOREIWCFTestProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	BasicHttpBinding_USCOREIWCFTestProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void BasicHttpBinding_USCOREIWCFTestProxy::soap_noheader()
{	this->header = NULL;
}

::SOAP_ENV__Header *BasicHttpBinding_USCOREIWCFTestProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *BasicHttpBinding_USCOREIWCFTestProxy::soap_fault()
{	return this->fault;
}

const char *BasicHttpBinding_USCOREIWCFTestProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *BasicHttpBinding_USCOREIWCFTestProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int BasicHttpBinding_USCOREIWCFTestProxy::soap_close_socket()
{	return soap_closesock(this);
}

int BasicHttpBinding_USCOREIWCFTestProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void BasicHttpBinding_USCOREIWCFTestProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void BasicHttpBinding_USCOREIWCFTestProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *BasicHttpBinding_USCOREIWCFTestProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int BasicHttpBinding_USCOREIWCFTestProxy::DoWork(const char *endpoint, const char *soap_action, _tempuri__DoWork *tempuri__DoWork, _tempuri__DoWorkResponse &tempuri__DoWorkResponse)
{	struct soap *soap = this;
	struct __tempuri__DoWork soap_tmp___tempuri__DoWork;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://127.0.0.1:8001/WCFTest";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/IWCFTest/DoWork";
	soap_tmp___tempuri__DoWork.tempuri__DoWork = tempuri__DoWork;
	soap_begin(soap);
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tempuri__DoWork(soap, &soap_tmp___tempuri__DoWork);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__DoWork(soap, &soap_tmp___tempuri__DoWork, "-tempuri:DoWork", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__DoWork(soap, &soap_tmp___tempuri__DoWork, "-tempuri:DoWork", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tempuri__DoWorkResponse*>(&tempuri__DoWorkResponse)) // NULL ref?
		return soap_closesock(soap);
	tempuri__DoWorkResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__DoWorkResponse.soap_get(soap, "tempuri:DoWorkResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCOREIWCFTestProxy::Add(const char *endpoint, const char *soap_action, _tempuri__Add *tempuri__Add, _tempuri__AddResponse &tempuri__AddResponse)
{	struct soap *soap = this;
	struct __tempuri__Add soap_tmp___tempuri__Add;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://127.0.0.1:8001/WCFTest";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/IWCFTest/Add";
	soap_tmp___tempuri__Add.tempuri__Add = tempuri__Add;
	soap_begin(soap);
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tempuri__Add(soap, &soap_tmp___tempuri__Add);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Add(soap, &soap_tmp___tempuri__Add, "-tempuri:Add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Add(soap, &soap_tmp___tempuri__Add, "-tempuri:Add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tempuri__AddResponse*>(&tempuri__AddResponse)) // NULL ref?
		return soap_closesock(soap);
	tempuri__AddResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__AddResponse.soap_get(soap, "tempuri:AddResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCOREIWCFTestProxy::Sub(const char *endpoint, const char *soap_action, _tempuri__Sub *tempuri__Sub, _tempuri__SubResponse &tempuri__SubResponse)
{	struct soap *soap = this;
	struct __tempuri__Sub soap_tmp___tempuri__Sub;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://127.0.0.1:8001/WCFTest";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/IWCFTest/Sub";
	soap_tmp___tempuri__Sub.tempuri__Sub = tempuri__Sub;
	soap_begin(soap);
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tempuri__Sub(soap, &soap_tmp___tempuri__Sub);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Sub(soap, &soap_tmp___tempuri__Sub, "-tempuri:Sub", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Sub(soap, &soap_tmp___tempuri__Sub, "-tempuri:Sub", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tempuri__SubResponse*>(&tempuri__SubResponse)) // NULL ref?
		return soap_closesock(soap);
	tempuri__SubResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__SubResponse.soap_get(soap, "tempuri:SubResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
