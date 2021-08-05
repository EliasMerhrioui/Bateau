// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Net.HttpClientComponent.pas' rev: 33.00 (Windows)

#ifndef System_Net_HttpclientcomponentHPP
#define System_Net_HttpclientcomponentHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.Net.URLClient.hpp>
#include <System.Net.HttpClient.hpp>
#include <System.Net.Mime.hpp>

//-- user supplied -----------------------------------------------------------
#pragma comment(lib, "winhttp")
#pragma comment(lib, "crypt32")

namespace System
{
namespace Net
{
namespace Httpclientcomponent
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TNetHTTPClient;
/*Helper*/typedef void *TNetHTTPClientHelper;

class DELPHICLASS TNetHTTPRequest;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TRequestCompletedEvent)(System::TObject* const Sender, const System::Net::Httpclient::_di_IHTTPResponse AResponse);

typedef void __fastcall (__closure *TRequestErrorEvent)(System::TObject* const Sender, const System::UnicodeString AError);

class PASCALIMPLEMENTATION TNetHTTPClient : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Net::Httpclient::THTTPClient* FHttpClient;
	TRequestCompletedEvent FOnRequestCompleted;
	TRequestErrorEvent FOnRequestError;
	System::Net::Httpclient::TReceiveDataEvent FOnReceiveData;
	bool FAsynchronous;
	void __fastcall DoOnRequestCompleted(System::TObject* const Sender, const System::Net::Httpclient::_di_IHTTPResponse AResponse);
	void __fastcall DoOnRequestError(System::TObject* const Sender, const System::UnicodeString AError);
	void __fastcall DoOnReceiveData(System::TObject* const Sender, __int64 AContentLength, __int64 AReadCount, bool &Abort);
	void __fastcall DoOnAsyncRequestCompleted(const System::Types::_di_IAsyncResult AAsyncResult);
	int __fastcall GetMaxRedirects();
	void __fastcall SetMaxRedirects(const int Value);
	void __fastcall SetAuthEvent(const System::Net::Urlclient::TCredentialsStorage::TCredentialAuthEvent Value);
	void __fastcall SetOnNeedClientCertificate(const System::Net::Urlclient::TNeedClientCertificateEvent Value);
	void __fastcall SetOnValidateServerCertificate(const System::Net::Urlclient::TValidateCertificateEvent Value);
	System::Net::Urlclient::TCredentialsStorage::TCredentialAuthEvent __fastcall GetAuthEvent();
	System::Net::Urlclient::TNeedClientCertificateEvent __fastcall GetOnNeedClientCertificate();
	System::Net::Urlclient::TValidateCertificateEvent __fastcall GetOnValidateServerCertificate();
	System::Net::Urlclient::TProxySettings __fastcall GetProxySettings();
	void __fastcall SetProxySettings(const System::Net::Urlclient::TProxySettings &Value);
	bool __fastcall GetAllowCookies();
	void __fastcall SetAllowCookies(const bool Value);
	System::Net::Httpclient::TCookieManager* __fastcall GetCookieManager();
	void __fastcall SetCookieManager(System::Net::Httpclient::TCookieManager* const Value);
	bool __fastcall GetHandleRedirects();
	void __fastcall SetHandleRedirects(const bool Value);
	System::UnicodeString __fastcall GetCustomHeaderValue(const System::UnicodeString AName);
	void __fastcall SetCustomHeaderValue(const System::UnicodeString AName, const System::UnicodeString Value);
	System::UnicodeString __fastcall GetAccept();
	System::UnicodeString __fastcall GetAcceptCharSet();
	System::UnicodeString __fastcall GetAcceptEncoding();
	System::UnicodeString __fastcall GetAcceptLanguage();
	System::UnicodeString __fastcall GetContentType();
	void __fastcall SetAccept(const System::UnicodeString Value);
	void __fastcall SetAcceptCharSet(const System::UnicodeString Value);
	void __fastcall SetAcceptEncoding(const System::UnicodeString Value);
	void __fastcall SetAcceptLanguage(const System::UnicodeString Value);
	void __fastcall SetContentType(const System::UnicodeString Value);
	System::Net::Urlclient::TCredentialsStorage* __fastcall GetCredentialsStorage();
	void __fastcall SetCredentialsStorage(System::Net::Urlclient::TCredentialsStorage* const Value);
	System::UnicodeString __fastcall GetUserAgent();
	void __fastcall SetUserAgent(const System::UnicodeString Value);
	int __fastcall GetConnectionTimeout();
	int __fastcall GetResponseTimeout();
	void __fastcall SetConnectionTimeout(const int Value);
	void __fastcall SetResponseTimeout(const int Value);
	System::Net::Httpclient::THTTPRedirectsWithGET __fastcall GetRedirectsWithGET();
	System::Net::Httpclient::THTTPSecureProtocols __fastcall GetSecureProtocols();
	void __fastcall SetRedirectsWithGET(const System::Net::Httpclient::THTTPRedirectsWithGET AValue);
	void __fastcall SetSecureProtocols(const System::Net::Httpclient::THTTPSecureProtocols AValue);
	
public:
	__fastcall virtual TNetHTTPClient(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TNetHTTPClient();
#ifndef _WIN64
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Delete(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Options(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Get(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Trace(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Head(const System::UnicodeString AURL, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall GetRange(const System::UnicodeString AURL, __int64 AStart, __int64 AnEnd = -1LL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStream* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Merge(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall MergeAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Patch(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall PatchAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
#else /* _WIN64 */
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Delete(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Options(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Get(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Trace(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Head(const System::UnicodeString AURL, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall GetRange(const System::UnicodeString AURL, __int64 AStart, __int64 AnEnd = (__int64)(-1LL), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStream* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Merge(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall MergeAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Patch(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall PatchAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
#endif /* _WIN64 */
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::Net::Httpclient::_di_IHTTPRequest ARequest, System::Classes::TStream* const AContentStream = (System::Classes::TStream*)(0x0))/* overload */;
#ifndef _WIN64
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::UnicodeString ARequestMethod, const System::Net::Urlclient::TURI &AURI, System::Classes::TStream* const ASourceStream = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AContentStream = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::UnicodeString ARequestMethod, const System::UnicodeString AURIStr, System::Classes::TStream* const ASourceStream = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AContentStream = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
#else /* _WIN64 */
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::UnicodeString ARequestMethod, const System::Net::Urlclient::TURI &AURI, System::Classes::TStream* const ASourceStream = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AContentStream = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::UnicodeString ARequestMethod, const System::UnicodeString AURIStr, System::Classes::TStream* const ASourceStream = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AContentStream = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
#endif /* _WIN64 */
	__property System::Net::Httpclient::TCookieManager* CookieManager = {read=GetCookieManager, write=SetCookieManager};
	__property System::UnicodeString CustomHeaders[const System::UnicodeString AName] = {read=GetCustomHeaderValue, write=SetCustomHeaderValue};
	__property System::Net::Urlclient::TCredentialsStorage* CredentialsStorage = {read=GetCredentialsStorage, write=SetCredentialsStorage};
	__property System::Net::Urlclient::TProxySettings ProxySettings = {read=GetProxySettings, write=SetProxySettings};
	
__published:
	__property bool Asynchronous = {read=FAsynchronous, write=FAsynchronous, nodefault};
	__property int ConnectionTimeout = {read=GetConnectionTimeout, write=SetConnectionTimeout, nodefault};
	__property int ResponseTimeout = {read=GetResponseTimeout, write=SetResponseTimeout, nodefault};
	__property bool HandleRedirects = {read=GetHandleRedirects, write=SetHandleRedirects, nodefault};
	__property int MaxRedirects = {read=GetMaxRedirects, write=SetMaxRedirects, default=5};
	__property System::Net::Httpclient::THTTPRedirectsWithGET RedirectsWithGET = {read=GetRedirectsWithGET, write=SetRedirectsWithGET, default=4231};
	__property bool AllowCookies = {read=GetAllowCookies, write=SetAllowCookies, nodefault};
	__property System::UnicodeString Accept = {read=GetAccept, write=SetAccept};
	__property System::UnicodeString AcceptCharSet = {read=GetAcceptCharSet, write=SetAcceptCharSet};
	__property System::UnicodeString AcceptEncoding = {read=GetAcceptEncoding, write=SetAcceptEncoding};
	__property System::UnicodeString AcceptLanguage = {read=GetAcceptLanguage, write=SetAcceptLanguage};
	__property System::UnicodeString ContentType = {read=GetContentType, write=SetContentType};
	__property System::UnicodeString UserAgent = {read=GetUserAgent, write=SetUserAgent};
	__property System::Net::Httpclient::THTTPSecureProtocols SecureProtocols = {read=GetSecureProtocols, write=SetSecureProtocols, default=0};
	__property System::Net::Urlclient::TNeedClientCertificateEvent OnNeedClientCertificate = {read=GetOnNeedClientCertificate, write=SetOnNeedClientCertificate};
	__property System::Net::Urlclient::TValidateCertificateEvent OnValidateServerCertificate = {read=GetOnValidateServerCertificate, write=SetOnValidateServerCertificate};
	__property System::Net::Urlclient::TCredentialsStorage::TCredentialAuthEvent OnAuthEvent = {read=GetAuthEvent, write=SetAuthEvent};
	__property TRequestCompletedEvent OnRequestCompleted = {read=FOnRequestCompleted, write=FOnRequestCompleted};
	__property TRequestErrorEvent OnRequestError = {read=FOnRequestError, write=FOnRequestError};
	__property System::Net::Httpclient::TReceiveDataEvent OnReceiveData = {read=FOnReceiveData, write=FOnReceiveData};
};


class PASCALIMPLEMENTATION TNetHTTPRequest : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TNetHTTPClient* FClient;
	System::Classes::TStream* FContentStream;
	System::Classes::TStream* FSourceStream;
	System::UnicodeString FURL;
	System::UnicodeString FMethodString;
	System::Net::Httpclient::_di_IHTTPRequest FHttpRequest;
	System::Net::Httpclient::_di_IHTTPResponse FHttpResponse;
	System::Net::Urlclient::TNeedClientCertificateEvent FOnNeedClientCertificate;
	System::Net::Urlclient::TValidateCertificateEvent FOnValidateServerCertificate;
	TRequestCompletedEvent FOnRequestCompleted;
	TRequestErrorEvent FOnRequestError;
	System::Net::Httpclient::TReceiveDataEvent FOnReceiveData;
#ifndef _WIN64
	System::DynamicArray<System::Net::Urlclient::TNameValuePair> FCustomHeaders;
#else /* _WIN64 */
	System::TArray__1<System::Net::Urlclient::TNameValuePair> FCustomHeaders;
#endif /* _WIN64 */
	bool FAsynchronous;
	int FConnectionTimeout;
	int FResponseTimeout;
	void __fastcall DoOnRequestCompleted(System::TObject* const Sender, const System::Net::Httpclient::_di_IHTTPResponse AResponse);
	void __fastcall DoOnRequestError(System::TObject* const Sender, const System::UnicodeString AError);
	void __fastcall DoOnReceiveData(System::TObject* const Sender, __int64 AContentLength, __int64 AReadCount, bool &Abort);
	void __fastcall DoOnAsyncRequestCompleted(const System::Types::_di_IAsyncResult AAsyncResult);
	System::UnicodeString __fastcall GetMethodString();
	void __fastcall SetMethodString(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetURL();
	void __fastcall SetURL(const System::UnicodeString Value);
	TNetHTTPClient* __fastcall GetClient();
	void __fastcall SetClient(TNetHTTPClient* const Value);
	void __fastcall SetOnNeedClientCertificate(const System::Net::Urlclient::TNeedClientCertificateEvent Value);
	void __fastcall SetOnValidateServerCertificate(const System::Net::Urlclient::TValidateCertificateEvent Value);
	System::Net::Httpclient::TReceiveDataEvent __fastcall GetOnReceiveData();
	void __fastcall SetOnReceiveData(const System::Net::Httpclient::TReceiveDataEvent Value);
	System::Net::Httpclient::_di_IHTTPRequest __fastcall GetRequest(const System::UnicodeString AMethod, const System::UnicodeString AURL, System::Classes::TStream* const ASourceStream, bool AOwnsSourceStream = false);
	System::UnicodeString __fastcall GetAccept();
	System::UnicodeString __fastcall GetAcceptCharSet();
	System::UnicodeString __fastcall GetAcceptEncoding();
	System::UnicodeString __fastcall GetAcceptLanguage();
	void __fastcall SetAccept(const System::UnicodeString Value);
	void __fastcall SetAcceptCharSet(const System::UnicodeString Value);
	void __fastcall SetAcceptEncoding(const System::UnicodeString Value);
	void __fastcall SetAcceptLanguage(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetCustomHeaderValue(const System::UnicodeString AName);
	void __fastcall SetCustomHeaderValue(const System::UnicodeString AName, const System::UnicodeString Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
#ifndef _WIN64
	System::Net::Httpclient::_di_IHTTPResponse __fastcall DoExecute(const System::Net::Httpclient::_di_IHTTPRequest ARequest, System::Classes::TStream* const AResponseContent, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders, bool AOwnsSourceStream = false);
#else /* _WIN64 */
	System::Net::Httpclient::_di_IHTTPResponse __fastcall DoExecute(const System::Net::Httpclient::_di_IHTTPRequest ARequest, System::Classes::TStream* const AResponseContent, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders, bool AOwnsSourceStream = false);
#endif /* _WIN64 */
	
public:
	__fastcall virtual TNetHTTPRequest(System::Classes::TComponent* AOwner);
#ifndef _WIN64
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Delete(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Options(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Get(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Trace(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Head(const System::UnicodeString AURL, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall GetRange(const System::UnicodeString AURL, __int64 AStart, __int64 AnEnd = -1LL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStream* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Merge(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall MergeAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Patch(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall PatchAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::DynamicArray<System::Net::Urlclient::TNameValuePair> AHeaders = System::DynamicArray<System::Net::Urlclient::TNameValuePair>());
#else /* _WIN64 */
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Delete(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Options(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Get(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Trace(const System::UnicodeString AURL, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Head(const System::UnicodeString AURL, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall GetRange(const System::UnicodeString AURL, __int64 AStart, __int64 AnEnd = (__int64)(-1LL), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Classes::TStream* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Post(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, const System::UnicodeString ASourceFile, System::Classes::TStream* AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStrings* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), System::Sysutils::TEncoding* const AEncoding = (System::Sysutils::TEncoding*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Put(const System::UnicodeString AURL, System::Net::Mime::TMultipartFormData* const ASource, System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>())/* overload */;
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Merge(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall MergeAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource, const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Patch(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall PatchAlternative(const System::UnicodeString AURL, System::Classes::TStream* const ASource = (System::Classes::TStream*)(0x0), System::Classes::TStream* const AResponseContent = (System::Classes::TStream*)(0x0), const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
	System::Net::Httpclient::_di_IHTTPResponse __fastcall Execute(const System::TArray__1<System::Net::Urlclient::TNameValuePair> AHeaders = System::TArray__1<System::Net::Urlclient::TNameValuePair>());
#endif /* _WIN64 */
	__property System::UnicodeString CustomHeaders[const System::UnicodeString AName] = {read=GetCustomHeaderValue, write=SetCustomHeaderValue};
	__property System::Classes::TStream* ContentStream = {read=FContentStream, write=FContentStream};
	__property System::Classes::TStream* SourceStream = {read=FSourceStream, write=FSourceStream};
	
__published:
	__property bool Asynchronous = {read=FAsynchronous, write=FAsynchronous, nodefault};
	__property int ConnectionTimeout = {read=FConnectionTimeout, write=FConnectionTimeout, nodefault};
	__property int ResponseTimeout = {read=FResponseTimeout, write=FResponseTimeout, nodefault};
	__property System::UnicodeString Accept = {read=GetAccept, write=SetAccept};
	__property System::UnicodeString AcceptCharSet = {read=GetAcceptCharSet, write=SetAcceptCharSet};
	__property System::UnicodeString AcceptEncoding = {read=GetAcceptEncoding, write=SetAcceptEncoding};
	__property System::UnicodeString AcceptLanguage = {read=GetAcceptLanguage, write=SetAcceptLanguage};
	__property System::UnicodeString MethodString = {read=GetMethodString, write=SetMethodString};
	__property System::UnicodeString URL = {read=GetURL, write=SetURL};
	__property TNetHTTPClient* Client = {read=GetClient, write=SetClient};
	__property System::Net::Urlclient::TNeedClientCertificateEvent OnNeedClientCertificate = {read=FOnNeedClientCertificate, write=SetOnNeedClientCertificate};
	__property System::Net::Urlclient::TValidateCertificateEvent OnValidateServerCertificate = {read=FOnValidateServerCertificate, write=SetOnValidateServerCertificate};
	__property TRequestCompletedEvent OnRequestCompleted = {read=FOnRequestCompleted, write=FOnRequestCompleted};
	__property TRequestErrorEvent OnRequestError = {read=FOnRequestError, write=FOnRequestError};
	__property System::Net::Httpclient::TReceiveDataEvent OnReceiveData = {read=GetOnReceiveData, write=SetOnReceiveData};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TNetHTTPRequest() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Httpclientcomponent */
}	/* namespace Net */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_NET_HTTPCLIENTCOMPONENT)
using namespace System::Net::Httpclientcomponent;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_NET)
using namespace System::Net;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Net_HttpclientcomponentHPP
