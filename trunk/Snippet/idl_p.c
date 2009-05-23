

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Wed Dec 27 21:54:34 2006
 */
/* Compiler settings for ..\idl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "idl_h.h"

#define TYPE_FORMAT_STRING_SIZE   1299                              
#define PROC_FORMAT_STRING_SIZE   4567                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPTransport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPTransport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHTTPTransport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHTTPTransport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHTTPTransportAdv_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHTTPTransportAdv_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNamespaces_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNamespaces_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPEnvelope_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPEnvelope_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNodes_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNodes_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerOutput_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerOutput_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerContext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerContext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypesInit_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITypesInit_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISoapSerializer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISoapSerializer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISoapDeSerializerAttributes_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerAttributes_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISoapDeSerializer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerFactoryConfig_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISwATransport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISwATransport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNode2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNode2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerFactoryConfig2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPTransportTimeout_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPTransportTimeout_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXmlQName_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXmlQName_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNode3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNode3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IInterfaceFinder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IInterfaceFinder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimpleSoapSerializer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimpleSoapSerializer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimpleSoapDeSerializer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimpleSoapDeSerializer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerOutput2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerOutput2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISoapDeSerializerAttributes2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerAttributes2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHTTPTransportAdv2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHTTPTransportAdv2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISoapDeSerializerDefaultHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerDefaultHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerFactoryConfig3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerFactoryHeaders_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryHeaders_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNode12_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNode12_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPNodeDisp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPNodeDisp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPEnvelope2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPEnvelope2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISerializerContext2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISerializerContext2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISOAPTransport2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISOAPTransport2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHTTPTransportDisp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHTTPTransportDisp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXsdLong_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXsdLong_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INoMultirefSerializer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INoMultirefSerializer_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure StartElement */


	/* Procedure Send */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */


	/* Parameter endpoint */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */


	/* Parameter Envelope */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Receive */


	/* Procedure Receive */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 60 */	NdrFcShort( 0x13 ),	/* 19 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter characterEncoding */


	/* Parameter characterEncoding */

/* 66 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter Envelope */


	/* Parameter Envelope */

/* 72 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SOAPAction */


	/* Procedure get_EnvelopeVersion */


	/* Procedure get_Namespace */


	/* Procedure get_Namespace */


	/* Procedure get_Namespace */


	/* Procedure get_URI */


	/* Procedure get_SOAPAction */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter soapAction */


	/* Parameter envelopeVersionUri */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter soapAction */

/* 108 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SOAPAction */


	/* Procedure put_Namespace */


	/* Procedure put_Namespace */


	/* Procedure put_Namespace */


	/* Procedure put_URI */


	/* Procedure put_SOAPAction */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter soapAction */


	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter soapAction */

/* 144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Timeout */


	/* Procedure put_Timeout */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x7 ),	/* 7 */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeOut */


	/* Parameter timeOut */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Timeout */


	/* Procedure get_Timeout */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeOut */


	/* Parameter timeOut */

/* 216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProxy */


	/* Procedure SetProxy */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x9 ),	/* 9 */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x6 ),	/* 6 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProxyServer */


	/* Parameter ProxyServer */

/* 252 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ProxyPort */


	/* Parameter ProxyPort */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NoProxy */


	/* Procedure NoProxy */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0xa ),	/* 10 */
/* 278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Authentication */


	/* Procedure SetMethod */


	/* Procedure Authentication */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0xb ),	/* 11 */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 316 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x2 ),	/* 2 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter username */


	/* Parameter methodName */


	/* Parameter username */

/* 324 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter password */


	/* Parameter methodNameNamespaceURI */


	/* Parameter password */

/* 330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProxyAuthentication */


	/* Procedure understoodHeader */


	/* Procedure ProxyAuthentication */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0xc ),	/* 12 */
/* 350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 358 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x2 ),	/* 2 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter username */


	/* Parameter NamespaceURI */


	/* Parameter username */

/* 366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter password */


	/* Parameter localName */


	/* Parameter password */

/* 372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StatusCode */


	/* Procedure get_StatusCode */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0xd ),	/* 13 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x22 ),	/* 34 */
/* 398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter statusCode */


	/* Parameter statusCode */

/* 408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MaxRedirectDepth */


	/* Procedure get_MaxRedirectDepth */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xe ),	/* 14 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x22 ),	/* 34 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter depth */


	/* Parameter depth */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MaxRedirectDepth */


	/* Procedure put_MaxRedirectDepth */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xf ),	/* 15 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x6 ),	/* 6 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter depth */


	/* Parameter depth */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DefaultIID */


	/* Procedure GetPrefixForURI */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x3 ),	/* 3 */
/* 500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 508 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter theClass */


	/* Parameter NamespaceURI */

/* 516 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter iid */


	/* Parameter prefix */

/* 522 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 526 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetURIForPrefix */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 550 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prefix */

/* 558 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter NamespaceURI */

/* 564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ThrowFaults */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x3 ),	/* 3 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x22 ),	/* 34 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ThrowFaults */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x4 ),	/* 4 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x6 ),	/* 6 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */


	/* Procedure get_ref */


	/* Procedure get_Type */


	/* Procedure get_MethodName */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x7 ),	/* 7 */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter ref */


	/* Parameter pVal */


	/* Parameter pVal */

/* 672 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Type */


	/* Procedure put_ref */


	/* Procedure Characters */


	/* Procedure put_Type */


	/* Procedure put_MethodName */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 700 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter ref */


	/* Parameter charData */


	/* Parameter newVal */


	/* Parameter newVal */

/* 708 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TypeNS */


	/* Procedure get_TypeNS */


	/* Procedure get_EncodingStyle */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x9 ),	/* 9 */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 734 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 744 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TypeNS */


	/* Procedure WriteTextNoEncoding */


	/* Procedure put_TypeNS */


	/* Procedure put_EncodingStyle */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0xa ),	/* 10 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter text */


	/* Parameter newVal */


	/* Parameter newVal */

/* 780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Parse */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xc ),	/* 12 */
/* 800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 808 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x21 ),	/* 33 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Envelope */

/* 816 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter characterEncoding */

/* 822 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 826 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xd ),	/* 13 */
/* 842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter soapMsg */

/* 858 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 862 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Headers */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xe ),	/* 14 */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Nodes */

/* 894 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Body */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xf ),	/* 15 */
/* 914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Nodes */

/* 930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parameters */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Nodes */

/* 966 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SerializerFactory */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x11 ),	/* 17 */
/* 986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sf */

/* 1002 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_SerializerFactory */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sf */

/* 1038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */


	/* Procedure get_Name */


	/* Procedure get_role */


	/* Procedure get_Name */


	/* Procedure get_ContentType */


	/* Procedure get_Name */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1064 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1066 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter role */


	/* Parameter pVal */


	/* Parameter contentType */


	/* Parameter pVal */

/* 1074 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1078 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */


	/* Procedure put_Name */


	/* Procedure put_role */


	/* Procedure put_Name */


	/* Procedure put_ContentType */


	/* Procedure put_Name */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1100 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1102 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */


	/* Parameter newVal */


	/* Parameter newRole */


	/* Parameter newVal */


	/* Parameter contentType */


	/* Parameter newVal */

/* 1110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */


	/* Procedure get_Value */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0xb ),	/* 11 */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1138 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1140 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1146 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	NdrFcShort( 0x484 ),	/* Type Offset=1156 */

	/* Return value */


	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Value */


	/* Procedure put_Value */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0xc ),	/* 12 */
/* 1166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1174 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */


	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ValueAs */


	/* Procedure get_ValueAs */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0xd ),	/* 13 */
/* 1202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1210 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1212 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1214 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Type */


	/* Parameter Type */

/* 1218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNS */


	/* Parameter TypeNS */

/* 1224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1230 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1234 */	NdrFcShort( 0x484 ),	/* Type Offset=1156 */

	/* Return value */


	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_SerializerFactory */


	/* Procedure putref_SerializerFactory */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0xe ),	/* 14 */
/* 1250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sf */


	/* Parameter sf */

/* 1266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */


	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_root */


	/* Procedure get_root */

/* 1278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0xf ),	/* 15 */
/* 1286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IsRoot */


	/* Parameter IsRoot */

/* 1302 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1306 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_id */


	/* Procedure get_id */

/* 1314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1330 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */


	/* Parameter id */

/* 1338 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1342 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 1344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1346 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_href */


	/* Procedure get_href */

/* 1350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1364 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1366 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter href */


	/* Parameter href */

/* 1374 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1378 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_actor */


	/* Procedure get_actor */

/* 1386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1402 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actorURI */


	/* Parameter actorURI */

/* 1410 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_mustUnderstand */


	/* Procedure get_mustUnderstand */

/* 1422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1436 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MustUnderstand */


	/* Parameter MustUnderstand */

/* 1446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1450 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_offset */


	/* Procedure get_offset */

/* 1458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1474 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */


	/* Parameter offset */

/* 1482 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1486 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_position */


	/* Procedure get_position */

/* 1494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1510 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter postion */


	/* Parameter postion */

/* 1518 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1522 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nil */


	/* Procedure get_nil */

/* 1530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IsNil */


	/* Parameter IsNil */

/* 1554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1558 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_root */


	/* Procedure put_root */

/* 1566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1576 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1582 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IsRoot */


	/* Parameter IsRoot */

/* 1590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1594 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_id */


	/* Procedure put_id */

/* 1602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1618 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */


	/* Parameter id */

/* 1626 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1630 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_href */


	/* Procedure put_href */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1654 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter href */


	/* Parameter href */

/* 1662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_actor */


	/* Procedure put_actor */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1690 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actorURI */


	/* Parameter actorURI */

/* 1698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1702 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_mustUnderstand */


	/* Procedure put_mustUnderstand */

/* 1710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1720 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1726 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MustUnderstand */


	/* Parameter MustUnderstand */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1738 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_offset */


	/* Procedure put_offset */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1762 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */


	/* Parameter offset */

/* 1770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1774 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_position */


	/* Procedure put_position */

/* 1782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1790 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1798 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter postion */


	/* Parameter postion */

/* 1806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1810 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_nil */


	/* Procedure put_nil */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1828 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IsNil */


	/* Parameter IsNil */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Nodes */


	/* Procedure get_Nodes */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodes */


	/* Parameter ppNodes */

/* 1878 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1882 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */


	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1914 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 1920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 1926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1940 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1942 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter idx */

/* 1950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter node */

/* 1956 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1960 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 1962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ItemByName */

/* 1968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1976 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1982 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1984 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 1992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1996 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 1998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2002 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter node */

/* 2004 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2008 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Timeout */


	/* Procedure get_Count */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeOut */


	/* Parameter Count */

/* 2040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeNode */


	/* Procedure Append */

/* 2052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter n */


	/* Parameter newNode */

/* 2076 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2080 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */


	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */

/* 2088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 2118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2126 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2132 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2134 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Val */

/* 2148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2152 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter Namespace */

/* 2154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2156 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2158 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Type */

/* 2160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2162 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2164 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 2166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2168 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2170 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newNode */

/* 2172 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2174 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2176 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndElement */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2200 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 2214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attribute */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2234 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2242 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2250 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2254 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 2256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2260 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter value */

/* 2262 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2266 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QNameAttribute */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2282 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2290 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2302 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 2304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter value */

/* 2310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2314 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter valueNamespace */

/* 2316 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2320 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2324 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeValue */

/* 2328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2342 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2344 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter v */

/* 2352 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2356 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter Name */

/* 2358 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2362 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter NameNS */

/* 2364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2368 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteText */

/* 2376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2392 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2404 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Namespaces */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2426 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ns */

/* 2436 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Return value */

/* 2442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SerializerFactory */

/* 2448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sf */

/* 2472 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2476 */	NdrFcShort( 0x4c2 ),	/* Type Offset=1218 */

	/* Return value */

/* 2478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2492 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2500 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xmlType */

/* 2508 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2512 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter xmlTypeNamespace */

/* 2514 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2518 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter comType */

/* 2520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2524 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2540 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2548 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 2556 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter ctx */

/* 2562 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter dest */

/* 2568 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2572 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Return value */

/* 2574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2576 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isUnderstood */


	/* Procedure Exists */

/* 2580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2596 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NamespaceURI */


	/* Parameter Name */

/* 2604 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2608 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter localName */


	/* Parameter Namespace */

/* 2610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2614 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter understood */


	/* Parameter Exists */

/* 2616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2620 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Value */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2636 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2644 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2648 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 2658 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter val */

/* 2664 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2684 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter node */

/* 2700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Parameter ElementName */

/* 2706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Attributes */

/* 2712 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2716 */	NdrFcShort( 0x4fc ),	/* Type Offset=1276 */

	/* Parameter ns */

/* 2718 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2722 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Child */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2738 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2740 */	NdrFcShort( 0xe ),	/* 14 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 2754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ready */

/* 2760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2764 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter childNode */

/* 2766 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2770 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 2772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2774 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ChildReady */

/* 2778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2794 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter childNode */

/* 2808 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2812 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ChildRef */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2836 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter href */

/* 2844 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2848 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hrefNode */

/* 2850 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2854 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 2856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ref */

/* 2862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2870 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2876 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2878 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 2886 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2888 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2890 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter idNode */

/* 2892 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2894 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2896 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 2898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure End */

/* 2904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementMapping */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2942 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2948 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2950 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ElementName */

/* 2958 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2962 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ElementNamespace */

/* 2964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2968 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Type */

/* 2970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2974 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 2976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2980 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2984 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserializer */

/* 2988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2996 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2998 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3004 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Type */

/* 3012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3016 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 3018 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3022 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ArrayOf */

/* 3024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3028 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ComType */

/* 3030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3034 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter ProgID */

/* 3036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3038 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3040 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serializer */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3056 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3064 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ComType */

/* 3072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter Type */

/* 3078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3080 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3082 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 3084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3086 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3088 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ProgID */

/* 3090 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3092 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3094 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3098 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PrimarySchema */

/* 3102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3118 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 3126 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3130 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 3132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PrimarySchema */

/* 3138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 3162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3166 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootFirst */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rootFirst */

/* 3198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RootFirst */

/* 3210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3220 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rootFirst */

/* 3234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3238 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetConfig */

/* 3246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0xa ),	/* 10 */
/* 3254 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3262 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 3270 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3274 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Send */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3290 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter endpoint */

/* 3306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Payload */

/* 3312 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */

/* 3318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3320 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Receive */

/* 3324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3338 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3340 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter characterEncoding */

/* 3348 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3352 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter responseStream */

/* 3354 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3358 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EncodingStyle */


	/* Procedure get_EncodingStyle */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3382 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter encStyle */


	/* Parameter encStyle */

/* 3390 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EncodingStyle */


	/* Procedure put_EncodingStyle */

/* 3402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3418 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter encStyle */


	/* Parameter encStyle */

/* 3426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3430 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalTypeMapping */

/* 3438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0xb ),	/* 11 */
/* 3446 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3454 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParentXmlType */

/* 3462 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3466 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ParentXmlTypeNS */

/* 3468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3472 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ChildName */

/* 3474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ChildNamespace */

/* 3480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3484 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Type */

/* 3486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 3492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3494 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3496 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3500 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Timeout */

/* 3504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeOut */

/* 3528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Set */

/* 3540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3556 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3568 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 3570 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3574 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_explicitRoot */


	/* Procedure get_explicitRoot */

/* 3582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter explicitRoot */


	/* Parameter explicitRoot */

/* 3606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3610 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_explicitRoot */


	/* Procedure put_explicitRoot */

/* 3618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3628 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter explicitRoot */


	/* Parameter explicitRoot */

/* 3642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3646 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3670 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 3678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter ctx */

/* 3684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter dest */

/* 3690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3694 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserialize */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3710 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3718 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter characters */

/* 3726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3730 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ns */

/* 3732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3736 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Parameter dest */

/* 3738 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3742 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */

/* 3744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3746 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeAttribute */

/* 3750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0xb ),	/* 11 */
/* 3758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3764 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3766 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3774 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3778 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter Name */

/* 3780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3784 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 3786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3790 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValueAs */

/* 3798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3804 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3806 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3812 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3814 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3816 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3822 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3826 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Namespace */

/* 3828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3832 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter XmlType */

/* 3834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3838 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter TypeNamespace */

/* 3840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3844 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter value */

/* 3846 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3848 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3850 */	NdrFcShort( 0x484 ),	/* Type Offset=1156 */

	/* Return value */

/* 3852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3854 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Option */


	/* Procedure get_Option */

/* 3858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3872 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3874 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3876 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter optionName */


	/* Parameter optionName */

/* 3882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3886 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 3888 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3892 */	NdrFcShort( 0x484 ),	/* Type Offset=1156 */

	/* Return value */


	/* Return value */

/* 3894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Option */


	/* Procedure put_Option */

/* 3900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3908 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3916 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter optionName */


	/* Parameter optionName */

/* 3924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3928 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter val */


	/* Parameter val */

/* 3930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3934 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */


	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relay */

/* 3942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relay */

/* 3966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3970 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_relay */

/* 3978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relay */

/* 4002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4006 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_role */

/* 4014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4028 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4030 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter role */

/* 4038 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4042 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_role */

/* 4050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x25 ),	/* 37 */
/* 4058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4064 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4066 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRole */

/* 4074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4078 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relay */

/* 4086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x26 ),	/* 38 */
/* 4094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4102 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relay */

/* 4110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4114 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_relay */

/* 4122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x27 ),	/* 39 */
/* 4130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4132 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4138 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relay */

/* 4146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4150 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ref */

/* 4158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4172 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4174 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ref */

/* 4182 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4186 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ref */

/* 4194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x29 ),	/* 41 */
/* 4202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4210 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ref */

/* 4218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4222 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EnvelopeVersion */

/* 4230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4244 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4246 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter envelopeVersionUri */

/* 4254 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4258 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EnvelopeVersion */

/* 4266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4282 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter envelopeVersionUri */

/* 4290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4294 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Send */


	/* Procedure Send */

/* 4302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4310 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4316 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4318 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter endpoint */


	/* Parameter endpoint */

/* 4326 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4330 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Envelope */


	/* Parameter env */

/* 4332 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4336 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */


	/* Return value */

/* 4338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4340 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Receive */

/* 4344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4352 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4358 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4360 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter characterEncoding */

/* 4368 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 4370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4372 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter responseStream */

/* 4374 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4378 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 4380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HiDWord */

/* 4386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HiDWord */

/* 4422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4436 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 4446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LoDWord */

/* 4458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4472 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4474 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4482 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LoDWord */

/* 4494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4508 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4510 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 4518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 4530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cfgFactory */

/* 4554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4558 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 4560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x6 ),	/* Offset= 6 (46) */
/* 42 */	
			0x13, 0x0,	/* FC_OP */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (42) */
/* 56 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 58 */	NdrFcShort( 0x3f2 ),	/* Offset= 1010 (1068) */
/* 60 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	
			0x13, 0x0,	/* FC_OP */
/* 66 */	NdrFcShort( 0x3d8 ),	/* Offset= 984 (1050) */
/* 68 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 70 */	NdrFcShort( 0x18 ),	/* 24 */
/* 72 */	NdrFcShort( 0xa ),	/* 10 */
/* 74 */	NdrFcLong( 0x8 ),	/* 8 */
/* 78 */	NdrFcShort( 0x5a ),	/* Offset= 90 (168) */
/* 80 */	NdrFcLong( 0xd ),	/* 13 */
/* 84 */	NdrFcShort( 0x90 ),	/* Offset= 144 (228) */
/* 86 */	NdrFcLong( 0x9 ),	/* 9 */
/* 90 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (284) */
/* 92 */	NdrFcLong( 0xc ),	/* 12 */
/* 96 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (796) */
/* 98 */	NdrFcLong( 0x24 ),	/* 36 */
/* 102 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (844) */
/* 104 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 108 */	NdrFcShort( 0x302 ),	/* Offset= 770 (878) */
/* 110 */	NdrFcLong( 0x10 ),	/* 16 */
/* 114 */	NdrFcShort( 0x31c ),	/* Offset= 796 (910) */
/* 116 */	NdrFcLong( 0x2 ),	/* 2 */
/* 120 */	NdrFcShort( 0x336 ),	/* Offset= 822 (942) */
/* 122 */	NdrFcLong( 0x3 ),	/* 3 */
/* 126 */	NdrFcShort( 0x350 ),	/* Offset= 848 (974) */
/* 128 */	NdrFcLong( 0x14 ),	/* 20 */
/* 132 */	NdrFcShort( 0x36a ),	/* Offset= 874 (1006) */
/* 134 */	NdrFcShort( 0xffff ),	/* Offset= -1 (133) */
/* 136 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x4 ),	/* 4 */
/* 140 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 146 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	0x13, 0x0,	/* FC_OP */
/* 162 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (18) */
/* 164 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 168 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	NdrFcShort( 0x4 ),	/* 4 */
/* 180 */	0x11, 0x0,	/* FC_RP */
/* 182 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (136) */
/* 184 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 186 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 188 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 204 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 206 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 216 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 220 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 222 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 224 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (188) */
/* 226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 228 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x6 ),	/* Offset= 6 (240) */
/* 236 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 238 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 240 */	
			0x11, 0x0,	/* FC_RP */
/* 242 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (206) */
/* 244 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 246 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 256 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 258 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 260 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 262 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 272 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 276 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 278 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 280 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (244) */
/* 282 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 284 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x6 ),	/* Offset= 6 (296) */
/* 292 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 294 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 296 */	
			0x11, 0x0,	/* FC_RP */
/* 298 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (262) */
/* 300 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 302 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 304 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (310) */
/* 310 */	NdrFcShort( 0x10 ),	/* 16 */
/* 312 */	NdrFcShort( 0x2f ),	/* 47 */
/* 314 */	NdrFcLong( 0x14 ),	/* 20 */
/* 318 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 320 */	NdrFcLong( 0x3 ),	/* 3 */
/* 324 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 326 */	NdrFcLong( 0x11 ),	/* 17 */
/* 330 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 332 */	NdrFcLong( 0x2 ),	/* 2 */
/* 336 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 338 */	NdrFcLong( 0x4 ),	/* 4 */
/* 342 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 344 */	NdrFcLong( 0x5 ),	/* 5 */
/* 348 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 350 */	NdrFcLong( 0xb ),	/* 11 */
/* 354 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 356 */	NdrFcLong( 0xa ),	/* 10 */
/* 360 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 362 */	NdrFcLong( 0x6 ),	/* 6 */
/* 366 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (598) */
/* 368 */	NdrFcLong( 0x7 ),	/* 7 */
/* 372 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 374 */	NdrFcLong( 0x8 ),	/* 8 */
/* 378 */	NdrFcShort( 0xfeb0 ),	/* Offset= -336 (42) */
/* 380 */	NdrFcLong( 0xd ),	/* 13 */
/* 384 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (188) */
/* 386 */	NdrFcLong( 0x9 ),	/* 9 */
/* 390 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (244) */
/* 392 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 396 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (604) */
/* 398 */	NdrFcLong( 0x24 ),	/* 36 */
/* 402 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (612) */
/* 404 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 408 */	NdrFcShort( 0xcc ),	/* Offset= 204 (612) */
/* 410 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 414 */	NdrFcShort( 0xfc ),	/* Offset= 252 (666) */
/* 416 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 420 */	NdrFcShort( 0xfa ),	/* Offset= 250 (670) */
/* 422 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 426 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (674) */
/* 428 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 432 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (678) */
/* 434 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 438 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (682) */
/* 440 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 444 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (686) */
/* 446 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 450 */	NdrFcShort( 0xdc ),	/* Offset= 220 (670) */
/* 452 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 456 */	NdrFcShort( 0xda ),	/* Offset= 218 (674) */
/* 458 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 462 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (690) */
/* 464 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 468 */	NdrFcShort( 0xda ),	/* Offset= 218 (686) */
/* 470 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 474 */	NdrFcShort( 0xdc ),	/* Offset= 220 (694) */
/* 476 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 480 */	NdrFcShort( 0xda ),	/* Offset= 218 (698) */
/* 482 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 486 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (702) */
/* 488 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 492 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (706) */
/* 494 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 498 */	NdrFcShort( 0xdc ),	/* Offset= 220 (718) */
/* 500 */	NdrFcLong( 0x10 ),	/* 16 */
/* 504 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 506 */	NdrFcLong( 0x12 ),	/* 18 */
/* 510 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 512 */	NdrFcLong( 0x13 ),	/* 19 */
/* 516 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 518 */	NdrFcLong( 0x15 ),	/* 21 */
/* 522 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 524 */	NdrFcLong( 0x16 ),	/* 22 */
/* 528 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 530 */	NdrFcLong( 0x17 ),	/* 23 */
/* 534 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 536 */	NdrFcLong( 0xe ),	/* 14 */
/* 540 */	NdrFcShort( 0xba ),	/* Offset= 186 (726) */
/* 542 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 546 */	NdrFcShort( 0xbe ),	/* Offset= 190 (736) */
/* 548 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 552 */	NdrFcShort( 0xbc ),	/* Offset= 188 (740) */
/* 554 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 558 */	NdrFcShort( 0x70 ),	/* Offset= 112 (670) */
/* 560 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 564 */	NdrFcShort( 0x6e ),	/* Offset= 110 (674) */
/* 566 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 570 */	NdrFcShort( 0x6c ),	/* Offset= 108 (678) */
/* 572 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 576 */	NdrFcShort( 0x62 ),	/* Offset= 98 (674) */
/* 578 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 582 */	NdrFcShort( 0x5c ),	/* Offset= 92 (674) */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* Offset= 0 (588) */
/* 590 */	NdrFcLong( 0x1 ),	/* 1 */
/* 594 */	NdrFcShort( 0x0 ),	/* Offset= 0 (594) */
/* 596 */	NdrFcShort( 0xffff ),	/* Offset= -1 (595) */
/* 598 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 602 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 604 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 606 */	NdrFcShort( 0x2 ),	/* Offset= 2 (608) */
/* 608 */	
			0x13, 0x0,	/* FC_OP */
/* 610 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1050) */
/* 612 */	
			0x13, 0x0,	/* FC_OP */
/* 614 */	NdrFcShort( 0x20 ),	/* Offset= 32 (646) */
/* 616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 618 */	NdrFcLong( 0x2f ),	/* 47 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 628 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 632 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 634 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 638 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 644 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 646 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 648 */	NdrFcShort( 0x10 ),	/* 16 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0xa ),	/* Offset= 10 (662) */
/* 654 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 656 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 658 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (616) */
/* 660 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 662 */	
			0x13, 0x0,	/* FC_OP */
/* 664 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (634) */
/* 666 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 668 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 670 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 672 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 674 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 676 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 678 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 680 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 682 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 684 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 686 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 688 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 690 */	
			0x13, 0x0,	/* FC_OP */
/* 692 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (598) */
/* 694 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 696 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (42) */
/* 698 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 700 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (188) */
/* 702 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 704 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (244) */
/* 706 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (710) */
/* 710 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 712 */	NdrFcShort( 0x2 ),	/* Offset= 2 (714) */
/* 714 */	
			0x13, 0x0,	/* FC_OP */
/* 716 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1050) */
/* 718 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 720 */	NdrFcShort( 0x2 ),	/* Offset= 2 (722) */
/* 722 */	
			0x13, 0x0,	/* FC_OP */
/* 724 */	NdrFcShort( 0x14 ),	/* Offset= 20 (744) */
/* 726 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 728 */	NdrFcShort( 0x10 ),	/* 16 */
/* 730 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 732 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 734 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 736 */	
			0x13, 0x0,	/* FC_OP */
/* 738 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (726) */
/* 740 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 742 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 746 */	NdrFcShort( 0x20 ),	/* 32 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* Offset= 0 (750) */
/* 752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 754 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 756 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 758 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 760 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (300) */
/* 762 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 764 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 768 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 774 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	0x13, 0x0,	/* FC_OP */
/* 790 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (744) */
/* 792 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x6 ),	/* Offset= 6 (808) */
/* 804 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 808 */	
			0x11, 0x0,	/* FC_RP */
/* 810 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (764) */
/* 812 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 814 */	NdrFcShort( 0x4 ),	/* 4 */
/* 816 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 822 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 824 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	0x13, 0x0,	/* FC_OP */
/* 838 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (646) */
/* 840 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x6 ),	/* Offset= 6 (856) */
/* 852 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x11, 0x0,	/* FC_RP */
/* 858 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (812) */
/* 860 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 866 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 872 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 874 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (860) */
			0x5b,		/* FC_END */
/* 878 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x18 ),	/* 24 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0xa ),	/* Offset= 10 (894) */
/* 886 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 888 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 890 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (866) */
/* 892 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 894 */	
			0x11, 0x0,	/* FC_RP */
/* 896 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (206) */
/* 898 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 902 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 908 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 910 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 916 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 922 */	0x13, 0x0,	/* FC_OP */
/* 924 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (898) */
/* 926 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 928 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 930 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 932 */	NdrFcShort( 0x2 ),	/* 2 */
/* 934 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 940 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 942 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 946 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 948 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 952 */	NdrFcShort( 0x4 ),	/* 4 */
/* 954 */	0x13, 0x0,	/* FC_OP */
/* 956 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (930) */
/* 958 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 960 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 962 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 972 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 974 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 980 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 982 */	NdrFcShort( 0x4 ),	/* 4 */
/* 984 */	NdrFcShort( 0x4 ),	/* 4 */
/* 986 */	0x13, 0x0,	/* FC_OP */
/* 988 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (962) */
/* 990 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 992 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 994 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1004 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1006 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1012 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1016 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1018 */	0x13, 0x0,	/* FC_OP */
/* 1020 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (994) */
/* 1022 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1024 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1026 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1030 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1032 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1034 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1038 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1040 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1042 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1044 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1026) */
/* 1048 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1050 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1054 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1034) */
/* 1056 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1056) */
/* 1058 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1060 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1062 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1064 */	NdrFcShort( 0xfc1c ),	/* Offset= -996 (68) */
/* 1066 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1068 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1072 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0xfc08 ),	/* Offset= -1016 (60) */
/* 1078 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1080 */	NdrFcShort( 0xfbf6 ),	/* Offset= -1034 (46) */
/* 1082 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1084 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1086 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1088 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x12, 0x0,	/* FC_UP */
/* 1092 */	NdrFcShort( 0xfea4 ),	/* Offset= -348 (744) */
/* 1094 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1098 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1090) */
/* 1104 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1108) */
/* 1108 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1110 */	NdrFcLong( 0x59f284a ),	/* 94316618 */
/* 1114 */	NdrFcShort( 0xc198 ),	/* -15976 */
/* 1116 */	NdrFcShort( 0x4c6e ),	/* 19566 */
/* 1118 */	0x9e,		/* 158 */
			0x3b,		/* 59 */
/* 1120 */	0x2f,		/* 47 */
			0x45,		/* 69 */
/* 1122 */	0xac,		/* 172 */
			0xbe,		/* 190 */
/* 1124 */	0x7f,		/* 127 */
			0x12,		/* 18 */
/* 1126 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1130) */
/* 1130 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1132 */	NdrFcLong( 0xdde93c43 ),	/* -571917245 */
/* 1136 */	NdrFcShort( 0x9d84 ),	/* -25212 */
/* 1138 */	NdrFcShort( 0x4474 ),	/* 17524 */
/* 1140 */	0xa3,		/* 163 */
			0x7,		/* 7 */
/* 1142 */	0xe3,		/* 227 */
			0x1a,		/* 26 */
/* 1144 */	0x4f,		/* 79 */
			0x53,		/* 83 */
/* 1146 */	0x93,		/* 147 */
			0xf7,		/* 247 */
/* 1148 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1150 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1156) */
/* 1152 */	
			0x13, 0x0,	/* FC_OP */
/* 1154 */	NdrFcShort( 0xfe66 ),	/* Offset= -410 (744) */
/* 1156 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1158 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1152) */
/* 1166 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1168 */	NdrFcShort( 0xfc2c ),	/* Offset= -980 (188) */
/* 1170 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1172 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1174) */
/* 1174 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1176 */	NdrFcLong( 0x3d9e9ec5 ),	/* 1033805509 */
/* 1180 */	NdrFcShort( 0x16db ),	/* 5851 */
/* 1182 */	NdrFcShort( 0x48f3 ),	/* 18675 */
/* 1184 */	0xa6,		/* 166 */
			0xb,		/* 11 */
/* 1186 */	0x50,		/* 80 */
			0xf7,		/* 247 */
/* 1188 */	0x6f,		/* 111 */
			0x45,		/* 69 */
/* 1190 */	0x78,		/* 120 */
			0x5d,		/* 93 */
/* 1192 */	
			0x11, 0x0,	/* FC_RP */
/* 1194 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1094) */
/* 1196 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1200) */
/* 1200 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1202 */	NdrFcLong( 0x2b7b7eee ),	/* 729513710 */
/* 1206 */	NdrFcShort( 0x1082 ),	/* 4226 */
/* 1208 */	NdrFcShort( 0x4b51 ),	/* 19281 */
/* 1210 */	0x85,		/* 133 */
			0x19,		/* 25 */
/* 1212 */	0xe7,		/* 231 */
			0x18,		/* 24 */
/* 1214 */	0x5b,		/* 91 */
			0xe7,		/* 231 */
/* 1216 */	0x9f,		/* 159 */
			0xf2,		/* 242 */
/* 1218 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1222) */
/* 1222 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1224 */	NdrFcLong( 0xfda0f674 ),	/* -39782796 */
/* 1228 */	NdrFcShort( 0xdf3f ),	/* -8385 */
/* 1230 */	NdrFcShort( 0x496b ),	/* 18795 */
/* 1232 */	0xb3,		/* 179 */
			0x14,		/* 20 */
/* 1234 */	0x3e,		/* 62 */
			0x8d,		/* 141 */
/* 1236 */	0x87,		/* 135 */
			0xc2,		/* 194 */
/* 1238 */	0x60,		/* 96 */
			0xfa,		/* 250 */
/* 1240 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1242 */	NdrFcLong( 0xc5997f73 ),	/* -979796109 */
/* 1246 */	NdrFcShort( 0x9c61 ),	/* -25503 */
/* 1248 */	NdrFcShort( 0x4158 ),	/* 16728 */
/* 1250 */	0xb9,		/* 185 */
			0x3a,		/* 58 */
/* 1252 */	0xf1,		/* 241 */
			0x89,		/* 137 */
/* 1254 */	0x5d,		/* 93 */
			0x4c,		/* 76 */
/* 1256 */	0xee,		/* 238 */
			0xe7,		/* 231 */
/* 1258 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1260 */	NdrFcLong( 0x12ec9252 ),	/* 317493842 */
/* 1264 */	NdrFcShort( 0x557c ),	/* 21884 */
/* 1266 */	NdrFcShort( 0x4869 ),	/* 18537 */
/* 1268 */	0x9a,		/* 154 */
			0x1d,		/* 29 */
/* 1270 */	0x4a,		/* 74 */
			0x7a,		/* 122 */
/* 1272 */	0xaa,		/* 170 */
			0x41,		/* 65 */
/* 1274 */	0x56,		/* 86 */
			0x2b,		/* 43 */
/* 1276 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1278 */	NdrFcLong( 0xcded1874 ),	/* -840099724 */
/* 1282 */	NdrFcShort( 0x8b34 ),	/* -29900 */
/* 1284 */	NdrFcShort( 0x4026 ),	/* 16422 */
/* 1286 */	0x87,		/* 135 */
			0x74,		/* 116 */
/* 1288 */	0x44,		/* 68 */
			0xa7,		/* 167 */
/* 1290 */	0xdc,		/* 220 */
			0xb4,		/* 180 */
/* 1292 */	0x16,		/* 22 */
			0x24,		/* 36 */
/* 1294 */	
			0x11, 0x0,	/* FC_RP */
/* 1296 */	NdrFcShort( 0xfb0c ),	/* Offset= -1268 (28) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISOAPTransport, ver. 0.0,
   GUID={0x95B904E8,0x8E1A,0x40a3,{0xA2,0x29,0xE5,0xE8,0x60,0x6D,0x6D,0x3F}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPTransport_FormatStringOffsetTable[] =
    {
    0,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPTransport_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPTransport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransport_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _ISOAPTransportProxyVtbl = 
{
    &ISOAPTransport_ProxyInfo,
    &IID_ISOAPTransport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Receive */
};

const CInterfaceStubVtbl _ISOAPTransportStubVtbl =
{
    &IID_ISOAPTransport,
    &ISOAPTransport_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IHTTPTransport, ver. 0.0,
   GUID={0xC2F39358,0x2B60,0x4fda,{0xB6,0xFC,0xE9,0x5D,0xCC,0x4E,0x9C,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short IHTTPTransport_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    120
    };

static const MIDL_STUBLESS_PROXY_INFO IHTTPTransport_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IHTTPTransport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransport_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IHTTPTransportProxyVtbl = 
{
    &IHTTPTransport_ProxyInfo,
    &IID_IHTTPTransport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Receive */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::get_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::put_SOAPAction */
};

const CInterfaceStubVtbl _IHTTPTransportStubVtbl =
{
    &IID_IHTTPTransport,
    &IHTTPTransport_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IHTTPTransportAdv, ver. 0.0,
   GUID={0x326EBA3F,0x7120,0x4528,{0xAF,0x62,0x03,0xEA,0xBD,0x4E,0x00,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short IHTTPTransportAdv_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    120,
    156,
    192,
    228,
    270,
    300,
    342,
    384,
    420,
    456
    };

static const MIDL_STUBLESS_PROXY_INFO IHTTPTransportAdv_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportAdv_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IHTTPTransportAdv_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportAdv_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IHTTPTransportAdvProxyVtbl = 
{
    &IHTTPTransportAdv_ProxyInfo,
    &IID_IHTTPTransportAdv,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Receive */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::get_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::put_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::put_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::SetProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::NoProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::Authentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::ProxyAuthentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_StatusCode */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_MaxRedirectDepth */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::put_MaxRedirectDepth */
};

const CInterfaceStubVtbl _IHTTPTransportAdvStubVtbl =
{
    &IID_IHTTPTransportAdv,
    &IHTTPTransportAdv_ServerInfo,
    16,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_idl_0265, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISOAPNamespaces, ver. 0.0,
   GUID={0x2B7B7EEE,0x1082,0x4b51,{0x85,0x19,0xE7,0x18,0x5B,0xE7,0x9F,0xF2}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNamespaces_FormatStringOffsetTable[] =
    {
    492,
    534
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNamespaces_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNamespaces_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNamespaces_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNamespaces_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _ISOAPNamespacesProxyVtbl = 
{
    &ISOAPNamespaces_ProxyInfo,
    &IID_ISOAPNamespaces,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNamespaces::GetPrefixForURI */ ,
    (void *) (INT_PTR) -1 /* ISOAPNamespaces::GetURIForPrefix */
};

const CInterfaceStubVtbl _ISOAPNamespacesStubVtbl =
{
    &IID_ISOAPNamespaces,
    &ISOAPNamespaces_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPEnvelope, ver. 0.0,
   GUID={0x8B2091B1,0xDCF9,0x44a7,{0xA5,0x0B,0xF0,0x29,0x71,0xA0,0x1B,0xF1}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPEnvelope_FormatStringOffsetTable[] =
    {
    576,
    612,
    84,
    120,
    648,
    684,
    720,
    756,
    300,
    792,
    834,
    870,
    906,
    942,
    978,
    1014
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPEnvelope_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPEnvelope_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPEnvelope_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPEnvelope_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _ISOAPEnvelopeProxyVtbl = 
{
    &ISOAPEnvelope_ProxyInfo,
    &IID_ISOAPEnvelope,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_ThrowFaults */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_ThrowFaults */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_URI */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_URI */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_MethodName */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_MethodName */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::SetMethod */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::Parse */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::Serialize */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Headers */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Body */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Parameters */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::putref_SerializerFactory */
};

const CInterfaceStubVtbl _ISOAPEnvelopeStubVtbl =
{
    &IID_ISOAPEnvelope,
    &ISOAPEnvelope_ServerInfo,
    19,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNode, ver. 0.0,
   GUID={0x3D9E9EC5,0x16DB,0x48f3,{0xA6,0x0B,0x50,0xF7,0x6F,0x45,0x78,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNode_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    84,
    120,
    648,
    684,
    720,
    756,
    1122,
    1158,
    1194,
    1242,
    1278,
    1314,
    1350,
    1386,
    1422,
    1458,
    1494,
    1530,
    1566,
    1602,
    1638,
    1674,
    1710,
    1746,
    1782,
    1818,
    1854
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNode_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _ISOAPNodeProxyVtbl = 
{
    &ISOAPNode_ProxyInfo,
    &IID_ISOAPNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_ValueAs */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::putref_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Nodes */
};

const CInterfaceStubVtbl _ISOAPNodeStubVtbl =
{
    &IID_ISOAPNode,
    &ISOAPNode_ServerInfo,
    32,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNodes, ver. 0.0,
   GUID={0x059F284A,0xC198,0x4c6e,{0x9E,0x3B,0x2F,0x45,0xAC,0xBE,0x7F,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNodes_FormatStringOffsetTable[] =
    {
    1890,
    1926,
    1968,
    2016,
    2052,
    2088,
    2118
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNodes_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNodes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNodes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNodes_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ISOAPNodesProxyVtbl = 
{
    &ISOAPNodes_ProxyInfo,
    &IID_ISOAPNodes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::get_Item */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::get_ItemByName */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::get_Count */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::Append */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::Clear */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodes::Create */
};

const CInterfaceStubVtbl _ISOAPNodesStubVtbl =
{
    &IID_ISOAPNodes,
    &ISOAPNodes_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerOutput, ver. 0.0,
   GUID={0x12EC9252,0x557C,0x4869,{0x9A,0x1D,0x4A,0x7A,0xAA,0x41,0x56,0x2B}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerOutput_FormatStringOffsetTable[] =
    {
    0,
    2184,
    2226,
    2274,
    2052,
    2328,
    2376,
    756
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerOutput_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerOutput_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerOutput_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerOutput_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ISerializerOutputProxyVtbl = 
{
    &ISerializerOutput_ProxyInfo,
    &IID_ISerializerOutput,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::StartElement */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::EndElement */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::Attribute */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::QNameAttribute */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::SerializeNode */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::SerializeValue */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::WriteText */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::WriteTextNoEncoding */
};

const CInterfaceStubVtbl _ISerializerOutputStubVtbl =
{
    &IID_ISerializerOutput,
    &ISerializerOutput_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerContext, ver. 0.0,
   GUID={0xC5997F73,0x9C61,0x4158,{0xB9,0x3A,0xF1,0x89,0x5D,0x4C,0xEE,0xE7}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerContext_FormatStringOffsetTable[] =
    {
    2412,
    2448
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerContext_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerContext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerContext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerContext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _ISerializerContextProxyVtbl = 
{
    &ISerializerContext_ProxyInfo,
    &IID_ISerializerContext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerContext::get_Namespaces */ ,
    (void *) (INT_PTR) -1 /* ISerializerContext::get_SerializerFactory */
};

const CInterfaceStubVtbl _ISerializerContextStubVtbl =
{
    &IID_ISerializerContext,
    &ISerializerContext_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypesInit, ver. 0.0,
   GUID={0x04066DA1,0x3767,0x4388,{0xBC,0x1B,0x70,0xB5,0xC6,0x71,0x23,0xE1}} */

#pragma code_seg(".orpc")
static const unsigned short ITypesInit_FormatStringOffsetTable[] =
    {
    2484
    };

static const MIDL_STUBLESS_PROXY_INFO ITypesInit_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypesInit_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITypesInit_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypesInit_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ITypesInitProxyVtbl = 
{
    &ITypesInit_ProxyInfo,
    &IID_ITypesInit,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ITypesInit::Initialize */
};

const CInterfaceStubVtbl _ITypesInitStubVtbl =
{
    &IID_ITypesInit,
    &ITypesInit_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISoapSerializer, ver. 0.0,
   GUID={0x6EE30C35,0xDBDB,0x44e4,{0x85,0x2A,0x6F,0x06,0x36,0xF7,0xD8,0x27}} */

#pragma code_seg(".orpc")
static const unsigned short ISoapSerializer_FormatStringOffsetTable[] =
    {
    2532
    };

static const MIDL_STUBLESS_PROXY_INFO ISoapSerializer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISoapSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISoapSerializer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISoapSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISoapSerializerProxyVtbl = 
{
    &ISoapSerializer_ProxyInfo,
    &IID_ISoapSerializer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISoapSerializer::Serialize */
};

const CInterfaceStubVtbl _ISoapSerializerStubVtbl =
{
    &IID_ISoapSerializer,
    &ISoapSerializer_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISoapDeSerializerAttributes, ver. 0.0,
   GUID={0xCDED1874,0x8B34,0x4026,{0x87,0x74,0x44,0xA7,0xDC,0xB4,0x16,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short ISoapDeSerializerAttributes_FormatStringOffsetTable[] =
    {
    2580,
    2628
    };

static const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerAttributes_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerAttributes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISoapDeSerializerAttributes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerAttributes_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _ISoapDeSerializerAttributesProxyVtbl = 
{
    &ISoapDeSerializerAttributes_ProxyInfo,
    &IID_ISoapDeSerializerAttributes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializerAttributes::Exists */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializerAttributes::Value */
};

const CInterfaceStubVtbl _ISoapDeSerializerAttributesStubVtbl =
{
    &IID_ISoapDeSerializerAttributes,
    &ISoapDeSerializerAttributes_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISoapDeSerializer, ver. 0.0,
   GUID={0xEE9D8ADF,0x1996,0x4ffd,{0xBE,0x39,0xDF,0x9E,0x65,0x78,0x3A,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short ISoapDeSerializer_FormatStringOffsetTable[] =
    {
    2676,
    2730,
    2778,
    2820,
    2862,
    684,
    2904
    };

static const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISoapDeSerializer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ISoapDeSerializerProxyVtbl = 
{
    &ISoapDeSerializer_ProxyInfo,
    &IID_ISoapDeSerializer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::Start */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::Child */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::ChildReady */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::ChildRef */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::Ref */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::Characters */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializer::End */
};

const CInterfaceStubVtbl _ISoapDeSerializerStubVtbl =
{
    &IID_ISoapDeSerializer,
    &ISoapDeSerializer_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactory, ver. 0.0,
   GUID={0xFDA0F674,0xDF3F,0x496b,{0xB3,0x14,0x3E,0x8D,0x87,0xC2,0x60,0xFA}} */


/* Object interface: ISerializerFactoryConfig, ver. 0.0,
   GUID={0xDDE93C43,0x9D84,0x4474,{0xA3,0x07,0xE3,0x1A,0x4F,0x53,0x93,0xF7}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerFactoryConfig_FormatStringOffsetTable[] =
    {
    2934,
    2988,
    3048,
    3102,
    3138,
    3174,
    3210,
    3246
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerFactoryConfig_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ISerializerFactoryConfigProxyVtbl = 
{
    &ISerializerFactoryConfig_ProxyInfo,
    &IID_ISerializerFactoryConfig,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::ElementMapping */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Deserializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Serializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::SetConfig */
};

const CInterfaceStubVtbl _ISerializerFactoryConfigStubVtbl =
{
    &IID_ISerializerFactoryConfig,
    &ISerializerFactoryConfig_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISwATransport, ver. 0.0,
   GUID={0x55DA1181,0x49F5,0x429e,{0xB7,0x0D,0xAD,0xA9,0xFF,0x7C,0xEC,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short ISwATransport_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    3282,
    3324
    };

static const MIDL_STUBLESS_PROXY_INFO ISwATransport_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISwATransport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISwATransport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISwATransport_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ISwATransportProxyVtbl = 
{
    &ISwATransport_ProxyInfo,
    &IID_ISwATransport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISwATransport::get_ContentType */ ,
    (void *) (INT_PTR) -1 /* ISwATransport::put_ContentType */ ,
    (void *) (INT_PTR) -1 /* ISwATransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISwATransport::Receive */
};

const CInterfaceStubVtbl _ISwATransportStubVtbl =
{
    &IID_ISwATransport,
    &ISwATransport_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNode2, ver. 0.0,
   GUID={0x278B4636,0x7600,0x494f,{0xB9,0xF9,0xFD,0x3C,0x30,0x62,0xCA,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNode2_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    84,
    120,
    648,
    684,
    720,
    756,
    1122,
    1158,
    1194,
    1242,
    1278,
    1314,
    1350,
    1386,
    1422,
    1458,
    1494,
    1530,
    1566,
    1602,
    1638,
    1674,
    1710,
    1746,
    1782,
    1818,
    1854,
    3366,
    3402
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNode2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNode2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(34) _ISOAPNode2ProxyVtbl = 
{
    &ISOAPNode2_ProxyInfo,
    &IID_ISOAPNode2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_ValueAs */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::putref_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Nodes */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode2::get_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode2::put_EncodingStyle */
};

const CInterfaceStubVtbl _ISOAPNode2StubVtbl =
{
    &IID_ISOAPNode2,
    &ISOAPNode2_ServerInfo,
    34,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactoryPool, ver. 0.0,
   GUID={0x00F1C051,0xC42C,0x4ebc,{0xA0,0xD6,0xFE,0x26,0x98,0x0B,0xC6,0xB0}} */


/* Object interface: ISerializerFactoryConfig2, ver. 0.0,
   GUID={0xD82EB643,0x14C9,0x48f4,{0xA1,0x3B,0x99,0x5B,0x6F,0x8C,0xB0,0x6D}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerFactoryConfig2_FormatStringOffsetTable[] =
    {
    2934,
    2988,
    3048,
    3102,
    3138,
    3174,
    3210,
    3246,
    3438
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerFactoryConfig2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ISerializerFactoryConfig2ProxyVtbl = 
{
    &ISerializerFactoryConfig2_ProxyInfo,
    &IID_ISerializerFactoryConfig2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::ElementMapping */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Deserializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Serializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::SetConfig */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig2::LocalTypeMapping */
};

const CInterfaceStubVtbl _ISerializerFactoryConfig2StubVtbl =
{
    &IID_ISerializerFactoryConfig2,
    &ISerializerFactoryConfig2_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactory2, ver. 0.0,
   GUID={0x52021ABB,0x8796,0x4394,{0x8B,0xF7,0x91,0xB8,0x37,0xA9,0xD7,0x9D}} */


/* Object interface: ISOAPTransportTimeout, ver. 0.0,
   GUID={0x038D5938,0x2E2E,0x4f88,{0x94,0x76,0x8F,0xFB,0x04,0xAE,0x75,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPTransportTimeout_FormatStringOffsetTable[] =
    {
    0,
    42,
    3504,
    2016
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPTransportTimeout_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransportTimeout_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPTransportTimeout_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransportTimeout_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ISOAPTransportTimeoutProxyVtbl = 
{
    &ISOAPTransportTimeout_ProxyInfo,
    &IID_ISOAPTransportTimeout,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Receive */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransportTimeout::put_Timeout */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransportTimeout::get_Timeout */
};

const CInterfaceStubVtbl _ISOAPTransportTimeoutStubVtbl =
{
    &IID_ISOAPTransportTimeout,
    &ISOAPTransportTimeout_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactoryPool2, ver. 0.0,
   GUID={0xF09C7B38,0x7DC3,0x4a3e,{0xB6,0xBC,0xEF,0x09,0xFE,0x98,0xB1,0xCF}} */


/* Object interface: IXmlQName, ver. 0.0,
   GUID={0xA0F644A2,0x9A8B,0x4317,{0xA3,0x53,0x6E,0xF9,0xC4,0x2F,0x58,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IXmlQName_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    84,
    120,
    3540
    };

static const MIDL_STUBLESS_PROXY_INFO IXmlQName_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IXmlQName_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXmlQName_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IXmlQName_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IXmlQNameProxyVtbl = 
{
    &IXmlQName_ProxyInfo,
    &IID_IXmlQName,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXmlQName::get_Name */ ,
    (void *) (INT_PTR) -1 /* IXmlQName::put_Name */ ,
    (void *) (INT_PTR) -1 /* IXmlQName::get_Namespace */ ,
    (void *) (INT_PTR) -1 /* IXmlQName::put_Namespace */ ,
    (void *) (INT_PTR) -1 /* IXmlQName::Set */
};

const CInterfaceStubVtbl _IXmlQNameStubVtbl =
{
    &IID_IXmlQName,
    &IXmlQName_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNode3, ver. 0.0,
   GUID={0xCCFC68CD,0xDCD8,0x4369,{0xA0,0xAB,0x2F,0xCC,0x80,0x5E,0x3B,0xB0}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNode3_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    84,
    120,
    648,
    684,
    720,
    756,
    1122,
    1158,
    1194,
    1242,
    1278,
    1314,
    1350,
    1386,
    1422,
    1458,
    1494,
    1530,
    1566,
    1602,
    1638,
    1674,
    1710,
    1746,
    1782,
    1818,
    1854,
    3366,
    3402,
    3582,
    3618
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNode3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNode3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(36) _ISOAPNode3ProxyVtbl = 
{
    &ISOAPNode3_ProxyInfo,
    &IID_ISOAPNode3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_ValueAs */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::putref_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::put_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode::get_Nodes */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode2::get_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode2::put_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode3::get_explicitRoot */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode3::put_explicitRoot */
};

const CInterfaceStubVtbl _ISOAPNode3StubVtbl =
{
    &IID_ISOAPNode3,
    &ISOAPNode3_ServerInfo,
    36,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IInterfaceFinder, ver. 0.0,
   GUID={0x1999232F,0xD5BA,0x428B,{0x82,0xC2,0xA2,0xD6,0xDE,0x9B,0x67,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IInterfaceFinder_FormatStringOffsetTable[] =
    {
    492
    };

static const MIDL_STUBLESS_PROXY_INFO IInterfaceFinder_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IInterfaceFinder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IInterfaceFinder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IInterfaceFinder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IInterfaceFinderProxyVtbl = 
{
    &IInterfaceFinder_ProxyInfo,
    &IID_IInterfaceFinder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IInterfaceFinder::DefaultIID */
};

const CInterfaceStubVtbl _IInterfaceFinderStubVtbl =
{
    &IID_IInterfaceFinder,
    &IInterfaceFinder_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISimpleSoapSerializer, ver. 0.0,
   GUID={0x5B62D729,0x6CEC,0x49b7,{0x9B,0xDD,0x84,0x4D,0xCE,0x42,0xE8,0x42}} */

#pragma code_seg(".orpc")
static const unsigned short ISimpleSoapSerializer_FormatStringOffsetTable[] =
    {
    3654
    };

static const MIDL_STUBLESS_PROXY_INFO ISimpleSoapSerializer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISimpleSoapSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISimpleSoapSerializer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISimpleSoapSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISimpleSoapSerializerProxyVtbl = 
{
    &ISimpleSoapSerializer_ProxyInfo,
    &IID_ISimpleSoapSerializer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISimpleSoapSerializer::Serialize */
};

const CInterfaceStubVtbl _ISimpleSoapSerializerStubVtbl =
{
    &IID_ISimpleSoapSerializer,
    &ISimpleSoapSerializer_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISimpleSoapDeSerializer, ver. 0.0,
   GUID={0xF9799A1A,0xF2F7,0x4dd6,{0xAA,0xA2,0xC0,0xCA,0x59,0x7B,0x64,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short ISimpleSoapDeSerializer_FormatStringOffsetTable[] =
    {
    3702
    };

static const MIDL_STUBLESS_PROXY_INFO ISimpleSoapDeSerializer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISimpleSoapDeSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISimpleSoapDeSerializer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISimpleSoapDeSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISimpleSoapDeSerializerProxyVtbl = 
{
    &ISimpleSoapDeSerializer_ProxyInfo,
    &IID_ISimpleSoapDeSerializer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISimpleSoapDeSerializer::Deserialize */
};

const CInterfaceStubVtbl _ISimpleSoapDeSerializerStubVtbl =
{
    &IID_ISimpleSoapDeSerializer,
    &ISimpleSoapDeSerializer_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerOutput2, ver. 0.0,
   GUID={0x8DBA86E6,0x08D1,0x4510,{0x98,0x9A,0x76,0xA0,0x59,0x6E,0x54,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerOutput2_FormatStringOffsetTable[] =
    {
    0,
    2184,
    2226,
    2274,
    2052,
    2328,
    2376,
    756,
    3750
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerOutput2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerOutput2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerOutput2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerOutput2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ISerializerOutput2ProxyVtbl = 
{
    &ISerializerOutput2_ProxyInfo,
    &IID_ISerializerOutput2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::StartElement */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::EndElement */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::Attribute */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::QNameAttribute */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::SerializeNode */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::SerializeValue */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::WriteText */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput::WriteTextNoEncoding */ ,
    (void *) (INT_PTR) -1 /* ISerializerOutput2::SerializeAttribute */
};

const CInterfaceStubVtbl _ISerializerOutput2StubVtbl =
{
    &IID_ISerializerOutput2,
    &ISerializerOutput2_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISoapDeSerializerAttributes2, ver. 0.0,
   GUID={0x2F26011E,0x67AC,0x4bc4,{0x81,0x87,0x43,0x1F,0xD8,0xE6,0x1B,0x27}} */

#pragma code_seg(".orpc")
static const unsigned short ISoapDeSerializerAttributes2_FormatStringOffsetTable[] =
    {
    2580,
    2628,
    3798
    };

static const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerAttributes2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerAttributes2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISoapDeSerializerAttributes2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerAttributes2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _ISoapDeSerializerAttributes2ProxyVtbl = 
{
    &ISoapDeSerializerAttributes2_ProxyInfo,
    &IID_ISoapDeSerializerAttributes2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializerAttributes::Exists */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializerAttributes::Value */ ,
    (void *) (INT_PTR) -1 /* ISoapDeSerializerAttributes2::ValueAs */
};

const CInterfaceStubVtbl _ISoapDeSerializerAttributes2StubVtbl =
{
    &IID_ISoapDeSerializerAttributes2,
    &ISoapDeSerializerAttributes2_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactoryEx, ver. 0.0,
   GUID={0xB32E88A3,0x9C49,0x4a35,{0x87,0xEA,0x9D,0x81,0xA3,0xC0,0xF1,0xE1}} */


/* Object interface: IStreamReader, ver. 0.0,
   GUID={0x114BD3E3,0x983B,0x4509,{0x8D,0xD7,0x42,0xDC,0x36,0xF4,0xD2,0x62}} */


/* Object interface: IHTTPTransportAdv2, ver. 0.0,
   GUID={0xD74864A2,0x6351,0x445c,{0xAC,0xD0,0x2D,0xE2,0x50,0x8C,0x8E,0x8C}} */

#pragma code_seg(".orpc")
static const unsigned short IHTTPTransportAdv2_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    120,
    156,
    192,
    228,
    270,
    300,
    342,
    384,
    420,
    456,
    3858,
    3900
    };

static const MIDL_STUBLESS_PROXY_INFO IHTTPTransportAdv2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportAdv2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IHTTPTransportAdv2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportAdv2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IHTTPTransportAdv2ProxyVtbl = 
{
    &IHTTPTransportAdv2_ProxyInfo,
    &IID_IHTTPTransportAdv2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport::Receive */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::get_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransport::put_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::put_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::SetProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::NoProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::Authentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::ProxyAuthentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_StatusCode */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::get_MaxRedirectDepth */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv::put_MaxRedirectDepth */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv2::get_Option */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportAdv2::put_Option */
};

const CInterfaceStubVtbl _IHTTPTransportAdv2StubVtbl =
{
    &IID_IHTTPTransportAdv2,
    &IHTTPTransportAdv2_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISoapDeSerializerDefaultHandler, ver. 0.0,
   GUID={0xA27B2876,0x2E26,0x449e,{0xA5,0xB8,0x1D,0x08,0x6A,0x71,0x07,0x87}} */

#pragma code_seg(".orpc")
static const unsigned short ISoapDeSerializerDefaultHandler_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISoapDeSerializerDefaultHandler_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerDefaultHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISoapDeSerializerDefaultHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISoapDeSerializerDefaultHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _ISoapDeSerializerDefaultHandlerProxyVtbl = 
{
    0,
    &IID_ISoapDeSerializerDefaultHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _ISoapDeSerializerDefaultHandlerStubVtbl =
{
    &IID_ISoapDeSerializerDefaultHandler,
    &ISoapDeSerializerDefaultHandler_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactoryConfig3, ver. 0.0,
   GUID={0xCC263B9C,0x4C97,0x4539,{0x8D,0x9D,0x50,0xEC,0x5C,0x7F,0xAA,0x17}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerFactoryConfig3_FormatStringOffsetTable[] =
    {
    2934,
    2988,
    3048,
    3102,
    3138,
    3174,
    3210,
    3246,
    3438,
    342
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryConfig3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerFactoryConfig3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryConfig3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ISerializerFactoryConfig3ProxyVtbl = 
{
    &ISerializerFactoryConfig3_ProxyInfo,
    &IID_ISerializerFactoryConfig3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::ElementMapping */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Deserializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::Serializer */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_PrimarySchema */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::get_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::put_RootFirst */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig::SetConfig */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig2::LocalTypeMapping */ ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryConfig3::understoodHeader */
};

const CInterfaceStubVtbl _ISerializerFactoryConfig3StubVtbl =
{
    &IID_ISerializerFactoryConfig3,
    &ISerializerFactoryConfig3_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerFactoryHeaders, ver. 0.0,
   GUID={0xE57AC401,0xCC12,0x45e0,{0xB5,0xAC,0x08,0x5E,0xBE,0x1D,0x2C,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerFactoryHeaders_FormatStringOffsetTable[] =
    {
    2580
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerFactoryHeaders_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryHeaders_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerFactoryHeaders_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerFactoryHeaders_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISerializerFactoryHeadersProxyVtbl = 
{
    &ISerializerFactoryHeaders_ProxyInfo,
    &IID_ISerializerFactoryHeaders,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerFactoryHeaders::isUnderstood */
};

const CInterfaceStubVtbl _ISerializerFactoryHeadersStubVtbl =
{
    &IID_ISerializerFactoryHeaders,
    &ISerializerFactoryHeaders_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNode12, ver. 0.0,
   GUID={0x7C0183C2,0x8598,0x4cdf,{0x92,0x3F,0x40,0xA5,0x57,0x6F,0x39,0xC2}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNode12_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    3942,
    3978,
    648,
    684
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNode12_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode12_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNode12_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNode12_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ISOAPNode12ProxyVtbl = 
{
    &ISOAPNode12_ProxyInfo,
    &IID_ISOAPNode12,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::get_role */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::put_role */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::get_relay */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::put_relay */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::get_ref */ ,
    (void *) (INT_PTR) -1 /* ISOAPNode12::put_ref */
};

const CInterfaceStubVtbl _ISOAPNode12StubVtbl =
{
    &IID_ISOAPNode12,
    &ISOAPNode12_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPNodeDisp, ver. 0.0,
   GUID={0xC6118D9E,0x9F46,0x400e,{0xA0,0x9B,0x7D,0x9F,0x01,0xC6,0xA5,0x93}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPNodeDisp_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    84,
    120,
    648,
    684,
    720,
    756,
    1122,
    1158,
    1194,
    1242,
    1278,
    1314,
    1350,
    1386,
    1422,
    1458,
    1494,
    1530,
    1566,
    1602,
    1638,
    1674,
    1710,
    1746,
    1782,
    1818,
    1854,
    3366,
    3402,
    3582,
    3618,
    4014,
    4050,
    4086,
    4122,
    4158,
    4194
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPNodeDisp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPNodeDisp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPNodeDisp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPNodeDisp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(42) _ISOAPNodeDispProxyVtbl = 
{
    &ISOAPNodeDisp_ProxyInfo,
    &IID_ISOAPNodeDisp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_Name */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_Namespace */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_Type */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_TypeNS */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_Value */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_ValueAs */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::putref_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_root */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_id */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_href */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_actor */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_mustUnderstand */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_offset */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_position */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_nil */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_Nodes */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_explicitRoot */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_explicitRoot */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_role */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_role */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_relay */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_relay */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::get_ref */ ,
    (void *) (INT_PTR) -1 /* ISOAPNodeDisp::put_ref */
};

const CInterfaceStubVtbl _ISOAPNodeDispStubVtbl =
{
    &IID_ISOAPNodeDisp,
    &ISOAPNodeDisp_ServerInfo,
    42,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISOAPEnvelope2, ver. 0.0,
   GUID={0x6DBEBD71,0xF91F,0x4924,{0xAB,0x0E,0xDB,0x37,0xDD,0x38,0xDA,0x76}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPEnvelope2_FormatStringOffsetTable[] =
    {
    576,
    612,
    84,
    120,
    648,
    684,
    720,
    756,
    300,
    792,
    834,
    870,
    906,
    942,
    978,
    1014,
    4230,
    4266
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPEnvelope2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPEnvelope2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPEnvelope2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPEnvelope2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(21) _ISOAPEnvelope2ProxyVtbl = 
{
    &ISOAPEnvelope2_ProxyInfo,
    &IID_ISOAPEnvelope2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_ThrowFaults */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_ThrowFaults */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_URI */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_URI */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_MethodName */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_MethodName */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::put_EncodingStyle */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::SetMethod */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::Parse */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::Serialize */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Headers */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Body */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_Parameters */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::get_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope::putref_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope2::get_EnvelopeVersion */ ,
    (void *) (INT_PTR) -1 /* ISOAPEnvelope2::put_EnvelopeVersion */
};

const CInterfaceStubVtbl _ISOAPEnvelope2StubVtbl =
{
    &IID_ISOAPEnvelope2,
    &ISOAPEnvelope2_ServerInfo,
    21,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISerializerContext2, ver. 0.0,
   GUID={0x9A8E7E4D,0x59B3,0x4f55,{0xB5,0x87,0x1E,0xA0,0x48,0xAA,0x9C,0x65}} */

#pragma code_seg(".orpc")
static const unsigned short ISerializerContext2_FormatStringOffsetTable[] =
    {
    2412,
    2448,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO ISerializerContext2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISerializerContext2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISerializerContext2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISerializerContext2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _ISerializerContext2ProxyVtbl = 
{
    &ISerializerContext2_ProxyInfo,
    &IID_ISerializerContext2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISerializerContext::get_Namespaces */ ,
    (void *) (INT_PTR) -1 /* ISerializerContext::get_SerializerFactory */ ,
    (void *) (INT_PTR) -1 /* ISerializerContext2::get_EnvelopeVersion */
};

const CInterfaceStubVtbl _ISerializerContext2StubVtbl =
{
    &IID_ISerializerContext2,
    &ISerializerContext2_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IClassFactoryVersion, ver. 0.0,
   GUID={0x9AD41BB8,0x76A9,0x4ee0,{0x94,0x63,0x5B,0xF5,0x78,0xBA,0x78,0xDC}} */


/* Object interface: ISOAPTransport2, ver. 0.0,
   GUID={0x9DDD12DF,0x404B,0x45dd,{0xB9,0x82,0x25,0x1A,0x30,0xD2,0x90,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short ISOAPTransport2_FormatStringOffsetTable[] =
    {
    4302,
    4344
    };

static const MIDL_STUBLESS_PROXY_INFO ISOAPTransport2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransport2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISOAPTransport2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISOAPTransport2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _ISOAPTransport2ProxyVtbl = 
{
    &ISOAPTransport2_ProxyInfo,
    &IID_ISOAPTransport2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISOAPTransport2::Send */ ,
    (void *) (INT_PTR) -1 /* ISOAPTransport2::Receive */
};

const CInterfaceStubVtbl _ISOAPTransport2StubVtbl =
{
    &IID_ISOAPTransport2,
    &ISOAPTransport2_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IHTTPTransportDisp, ver. 0.0,
   GUID={0xF63C057A,0xDB72,0x4a35,{0xB5,0xC3,0x2F,0xCF,0xCE,0xA5,0xBB,0x8B}} */

#pragma code_seg(".orpc")
static const unsigned short IHTTPTransportDisp_FormatStringOffsetTable[] =
    {
    4302,
    42,
    84,
    120,
    156,
    192,
    228,
    270,
    300,
    342,
    384,
    420,
    456,
    3858,
    3900
    };

static const MIDL_STUBLESS_PROXY_INFO IHTTPTransportDisp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportDisp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IHTTPTransportDisp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHTTPTransportDisp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IHTTPTransportDispProxyVtbl = 
{
    &IHTTPTransportDisp_ProxyInfo,
    &IID_IHTTPTransportDisp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::Send */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::Receive */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::get_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::put_SOAPAction */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::put_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::get_Timeout */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::SetProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::NoProxy */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::Authentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::ProxyAuthentication */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::get_StatusCode */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::get_MaxRedirectDepth */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::put_MaxRedirectDepth */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::get_Option */ ,
    (void *) (INT_PTR) -1 /* IHTTPTransportDisp::put_Option */
};

const CInterfaceStubVtbl _IHTTPTransportDispStubVtbl =
{
    &IID_IHTTPTransportDisp,
    &IHTTPTransportDisp_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXsdLong, ver. 0.0,
   GUID={0x81E713C6,0xBC0B,0x4853,{0x82,0xBA,0x27,0xD3,0x41,0xCA,0x35,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IXsdLong_FormatStringOffsetTable[] =
    {
    1050,
    1086,
    4386,
    4422,
    4458,
    4494,
    4530
    };

static const MIDL_STUBLESS_PROXY_INFO IXsdLong_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IXsdLong_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXsdLong_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IXsdLong_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IXsdLongProxyVtbl = 
{
    &IXsdLong_ProxyInfo,
    &IID_IXsdLong,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXsdLong::get_String */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::put_String */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::get_HiDWord */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::put_HiDWord */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::get_LoDWord */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::put_LoDWord */ ,
    (void *) (INT_PTR) -1 /* IXsdLong::Register */
};

const CInterfaceStubVtbl _IXsdLongStubVtbl =
{
    &IID_IXsdLong,
    &IXsdLong_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: INoMultirefSerializer, ver. 0.0,
   GUID={0x679E93E6,0x4DCE,0x44d2,{0x84,0x13,0x52,0x37,0x37,0x98,0x0E,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short INoMultirefSerializer_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO INoMultirefSerializer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &INoMultirefSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO INoMultirefSerializer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &INoMultirefSerializer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _INoMultirefSerializerProxyVtbl = 
{
    0,
    &IID_INoMultirefSerializer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _INoMultirefSerializerStubVtbl =
{
    &IID_INoMultirefSerializer,
    &INoMultirefSerializer_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _idl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISerializerFactoryHeadersProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISimpleSoapDeSerializerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISoapDeSerializerAttributes2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISimpleSoapSerializerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IInterfaceFinderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISoapSerializerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNode2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPTransportTimeoutProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHTTPTransportAdvProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerFactoryConfigProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerFactoryConfig2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNodesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerContext2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerOutputProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHTTPTransportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPEnvelope2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerContextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISoapDeSerializerAttributesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISoapDeSerializerDefaultHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHTTPTransportDispProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISwATransportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerFactoryConfig3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNodeDispProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypesInitProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXmlQNameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHTTPTransportAdv2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPEnvelopeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNode12ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXsdLongProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNode3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPTransport2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISoapDeSerializerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISerializerOutput2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INoMultirefSerializerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPTransportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISOAPNamespacesProxyVtbl,
    0
};

const CInterfaceStubVtbl * _idl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISerializerFactoryHeadersStubVtbl,
    ( CInterfaceStubVtbl *) &_ISimpleSoapDeSerializerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISoapDeSerializerAttributes2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISimpleSoapSerializerStubVtbl,
    ( CInterfaceStubVtbl *) &_IInterfaceFinderStubVtbl,
    ( CInterfaceStubVtbl *) &_ISoapSerializerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNode2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPTransportTimeoutStubVtbl,
    ( CInterfaceStubVtbl *) &_IHTTPTransportAdvStubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerFactoryConfigStubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerFactoryConfig2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNodesStubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerContext2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerOutputStubVtbl,
    ( CInterfaceStubVtbl *) &_IHTTPTransportStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPEnvelope2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerContextStubVtbl,
    ( CInterfaceStubVtbl *) &_ISoapDeSerializerAttributesStubVtbl,
    ( CInterfaceStubVtbl *) &_ISoapDeSerializerDefaultHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &_IHTTPTransportDispStubVtbl,
    ( CInterfaceStubVtbl *) &_ISwATransportStubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerFactoryConfig3StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNodeDispStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypesInitStubVtbl,
    ( CInterfaceStubVtbl *) &_IXmlQNameStubVtbl,
    ( CInterfaceStubVtbl *) &_IHTTPTransportAdv2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPEnvelopeStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNode12StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IXsdLongStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNode3StubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPTransport2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISoapDeSerializerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISerializerOutput2StubVtbl,
    ( CInterfaceStubVtbl *) &_INoMultirefSerializerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPTransportStubVtbl,
    ( CInterfaceStubVtbl *) &_ISOAPNamespacesStubVtbl,
    0
};

PCInterfaceName const _idl_InterfaceNamesList[] = 
{
    "ISerializerFactoryHeaders",
    "ISimpleSoapDeSerializer",
    "ISoapDeSerializerAttributes2",
    "ISimpleSoapSerializer",
    "IInterfaceFinder",
    "ISoapSerializer",
    "ISOAPNode2",
    "ISOAPTransportTimeout",
    "IHTTPTransportAdv",
    "ISerializerFactoryConfig",
    "ISerializerFactoryConfig2",
    "ISOAPNodes",
    "ISerializerContext2",
    "ISerializerOutput",
    "IHTTPTransport",
    "ISOAPEnvelope2",
    "ISerializerContext",
    "ISoapDeSerializerAttributes",
    "ISoapDeSerializerDefaultHandler",
    "IHTTPTransportDisp",
    "ISwATransport",
    "ISerializerFactoryConfig3",
    "ISOAPNodeDisp",
    "ITypesInit",
    "IXmlQName",
    "IHTTPTransportAdv2",
    "ISOAPEnvelope",
    "ISOAPNode12",
    "ISOAPNode",
    "IXsdLong",
    "ISOAPNode3",
    "ISOAPTransport2",
    "ISoapDeSerializer",
    "ISerializerOutput2",
    "INoMultirefSerializer",
    "ISOAPTransport",
    "ISOAPNamespaces",
    0
};


#define _idl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _idl, pIID, n)

int __stdcall _idl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _idl, 37, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _idl, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _idl, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _idl, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _idl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _idl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _idl, 37, *pIndex )
    
}

const ExtendedProxyFileInfo idl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _idl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _idl_StubVtblList,
    (const PCInterfaceName * ) & _idl_InterfaceNamesList,
    0, // no delegation
    & _idl_IID_Lookup, 
    37,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

