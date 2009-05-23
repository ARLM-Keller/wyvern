

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __idl_h_h__
#define __idl_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISOAPTransport_FWD_DEFINED__
#define __ISOAPTransport_FWD_DEFINED__
typedef interface ISOAPTransport ISOAPTransport;
#endif 	/* __ISOAPTransport_FWD_DEFINED__ */


#ifndef __IHTTPTransport_FWD_DEFINED__
#define __IHTTPTransport_FWD_DEFINED__
typedef interface IHTTPTransport IHTTPTransport;
#endif 	/* __IHTTPTransport_FWD_DEFINED__ */


#ifndef __IHTTPTransportAdv_FWD_DEFINED__
#define __IHTTPTransportAdv_FWD_DEFINED__
typedef interface IHTTPTransportAdv IHTTPTransportAdv;
#endif 	/* __IHTTPTransportAdv_FWD_DEFINED__ */


#ifndef __ISOAPNamespaces_FWD_DEFINED__
#define __ISOAPNamespaces_FWD_DEFINED__
typedef interface ISOAPNamespaces ISOAPNamespaces;
#endif 	/* __ISOAPNamespaces_FWD_DEFINED__ */


#ifndef __ISOAPEnvelope_FWD_DEFINED__
#define __ISOAPEnvelope_FWD_DEFINED__
typedef interface ISOAPEnvelope ISOAPEnvelope;
#endif 	/* __ISOAPEnvelope_FWD_DEFINED__ */


#ifndef __ISOAPNode_FWD_DEFINED__
#define __ISOAPNode_FWD_DEFINED__
typedef interface ISOAPNode ISOAPNode;
#endif 	/* __ISOAPNode_FWD_DEFINED__ */


#ifndef __ISOAPNodes_FWD_DEFINED__
#define __ISOAPNodes_FWD_DEFINED__
typedef interface ISOAPNodes ISOAPNodes;
#endif 	/* __ISOAPNodes_FWD_DEFINED__ */


#ifndef __ISerializerOutput_FWD_DEFINED__
#define __ISerializerOutput_FWD_DEFINED__
typedef interface ISerializerOutput ISerializerOutput;
#endif 	/* __ISerializerOutput_FWD_DEFINED__ */


#ifndef __ISerializerContext_FWD_DEFINED__
#define __ISerializerContext_FWD_DEFINED__
typedef interface ISerializerContext ISerializerContext;
#endif 	/* __ISerializerContext_FWD_DEFINED__ */


#ifndef __ITypesInit_FWD_DEFINED__
#define __ITypesInit_FWD_DEFINED__
typedef interface ITypesInit ITypesInit;
#endif 	/* __ITypesInit_FWD_DEFINED__ */


#ifndef __ISoapSerializer_FWD_DEFINED__
#define __ISoapSerializer_FWD_DEFINED__
typedef interface ISoapSerializer ISoapSerializer;
#endif 	/* __ISoapSerializer_FWD_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes_FWD_DEFINED__
#define __ISoapDeSerializerAttributes_FWD_DEFINED__
typedef interface ISoapDeSerializerAttributes ISoapDeSerializerAttributes;
#endif 	/* __ISoapDeSerializerAttributes_FWD_DEFINED__ */


#ifndef __ISoapDeSerializer_FWD_DEFINED__
#define __ISoapDeSerializer_FWD_DEFINED__
typedef interface ISoapDeSerializer ISoapDeSerializer;
#endif 	/* __ISoapDeSerializer_FWD_DEFINED__ */


#ifndef __ISerializerFactory_FWD_DEFINED__
#define __ISerializerFactory_FWD_DEFINED__
typedef interface ISerializerFactory ISerializerFactory;
#endif 	/* __ISerializerFactory_FWD_DEFINED__ */


#ifndef __ISerializerFactoryConfig_FWD_DEFINED__
#define __ISerializerFactoryConfig_FWD_DEFINED__
typedef interface ISerializerFactoryConfig ISerializerFactoryConfig;
#endif 	/* __ISerializerFactoryConfig_FWD_DEFINED__ */


#ifndef __ISwATransport_FWD_DEFINED__
#define __ISwATransport_FWD_DEFINED__
typedef interface ISwATransport ISwATransport;
#endif 	/* __ISwATransport_FWD_DEFINED__ */


#ifndef __ISOAPNode2_FWD_DEFINED__
#define __ISOAPNode2_FWD_DEFINED__
typedef interface ISOAPNode2 ISOAPNode2;
#endif 	/* __ISOAPNode2_FWD_DEFINED__ */


#ifndef __ISerializerFactoryPool_FWD_DEFINED__
#define __ISerializerFactoryPool_FWD_DEFINED__
typedef interface ISerializerFactoryPool ISerializerFactoryPool;
#endif 	/* __ISerializerFactoryPool_FWD_DEFINED__ */


#ifndef __ISerializerFactoryConfig2_FWD_DEFINED__
#define __ISerializerFactoryConfig2_FWD_DEFINED__
typedef interface ISerializerFactoryConfig2 ISerializerFactoryConfig2;
#endif 	/* __ISerializerFactoryConfig2_FWD_DEFINED__ */


#ifndef __ISerializerFactory2_FWD_DEFINED__
#define __ISerializerFactory2_FWD_DEFINED__
typedef interface ISerializerFactory2 ISerializerFactory2;
#endif 	/* __ISerializerFactory2_FWD_DEFINED__ */


#ifndef __ISOAPTransportTimeout_FWD_DEFINED__
#define __ISOAPTransportTimeout_FWD_DEFINED__
typedef interface ISOAPTransportTimeout ISOAPTransportTimeout;
#endif 	/* __ISOAPTransportTimeout_FWD_DEFINED__ */


#ifndef __ISerializerFactoryPool2_FWD_DEFINED__
#define __ISerializerFactoryPool2_FWD_DEFINED__
typedef interface ISerializerFactoryPool2 ISerializerFactoryPool2;
#endif 	/* __ISerializerFactoryPool2_FWD_DEFINED__ */


#ifndef __IXmlQName_FWD_DEFINED__
#define __IXmlQName_FWD_DEFINED__
typedef interface IXmlQName IXmlQName;
#endif 	/* __IXmlQName_FWD_DEFINED__ */


#ifndef __ISOAPNode3_FWD_DEFINED__
#define __ISOAPNode3_FWD_DEFINED__
typedef interface ISOAPNode3 ISOAPNode3;
#endif 	/* __ISOAPNode3_FWD_DEFINED__ */


#ifndef __IInterfaceFinder_FWD_DEFINED__
#define __IInterfaceFinder_FWD_DEFINED__
typedef interface IInterfaceFinder IInterfaceFinder;
#endif 	/* __IInterfaceFinder_FWD_DEFINED__ */


#ifndef __ISimpleSoapSerializer_FWD_DEFINED__
#define __ISimpleSoapSerializer_FWD_DEFINED__
typedef interface ISimpleSoapSerializer ISimpleSoapSerializer;
#endif 	/* __ISimpleSoapSerializer_FWD_DEFINED__ */


#ifndef __ISimpleSoapDeSerializer_FWD_DEFINED__
#define __ISimpleSoapDeSerializer_FWD_DEFINED__
typedef interface ISimpleSoapDeSerializer ISimpleSoapDeSerializer;
#endif 	/* __ISimpleSoapDeSerializer_FWD_DEFINED__ */


#ifndef __ISerializerOutput2_FWD_DEFINED__
#define __ISerializerOutput2_FWD_DEFINED__
typedef interface ISerializerOutput2 ISerializerOutput2;
#endif 	/* __ISerializerOutput2_FWD_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes2_FWD_DEFINED__
#define __ISoapDeSerializerAttributes2_FWD_DEFINED__
typedef interface ISoapDeSerializerAttributes2 ISoapDeSerializerAttributes2;
#endif 	/* __ISoapDeSerializerAttributes2_FWD_DEFINED__ */


#ifndef __ISerializerFactoryEx_FWD_DEFINED__
#define __ISerializerFactoryEx_FWD_DEFINED__
typedef interface ISerializerFactoryEx ISerializerFactoryEx;
#endif 	/* __ISerializerFactoryEx_FWD_DEFINED__ */


#ifndef __IStreamReader_FWD_DEFINED__
#define __IStreamReader_FWD_DEFINED__
typedef interface IStreamReader IStreamReader;
#endif 	/* __IStreamReader_FWD_DEFINED__ */


#ifndef __IHTTPTransportAdv2_FWD_DEFINED__
#define __IHTTPTransportAdv2_FWD_DEFINED__
typedef interface IHTTPTransportAdv2 IHTTPTransportAdv2;
#endif 	/* __IHTTPTransportAdv2_FWD_DEFINED__ */


#ifndef __ISoapDeSerializerDefaultHandler_FWD_DEFINED__
#define __ISoapDeSerializerDefaultHandler_FWD_DEFINED__
typedef interface ISoapDeSerializerDefaultHandler ISoapDeSerializerDefaultHandler;
#endif 	/* __ISoapDeSerializerDefaultHandler_FWD_DEFINED__ */


#ifndef __ISerializerFactoryConfig3_FWD_DEFINED__
#define __ISerializerFactoryConfig3_FWD_DEFINED__
typedef interface ISerializerFactoryConfig3 ISerializerFactoryConfig3;
#endif 	/* __ISerializerFactoryConfig3_FWD_DEFINED__ */


#ifndef __ISerializerFactoryHeaders_FWD_DEFINED__
#define __ISerializerFactoryHeaders_FWD_DEFINED__
typedef interface ISerializerFactoryHeaders ISerializerFactoryHeaders;
#endif 	/* __ISerializerFactoryHeaders_FWD_DEFINED__ */


#ifndef __ISOAPNode12_FWD_DEFINED__
#define __ISOAPNode12_FWD_DEFINED__
typedef interface ISOAPNode12 ISOAPNode12;
#endif 	/* __ISOAPNode12_FWD_DEFINED__ */


#ifndef __ISOAPNodeDisp_FWD_DEFINED__
#define __ISOAPNodeDisp_FWD_DEFINED__
typedef interface ISOAPNodeDisp ISOAPNodeDisp;
#endif 	/* __ISOAPNodeDisp_FWD_DEFINED__ */


#ifndef __ISOAPEnvelope2_FWD_DEFINED__
#define __ISOAPEnvelope2_FWD_DEFINED__
typedef interface ISOAPEnvelope2 ISOAPEnvelope2;
#endif 	/* __ISOAPEnvelope2_FWD_DEFINED__ */


#ifndef __ISerializerContext2_FWD_DEFINED__
#define __ISerializerContext2_FWD_DEFINED__
typedef interface ISerializerContext2 ISerializerContext2;
#endif 	/* __ISerializerContext2_FWD_DEFINED__ */


#ifndef __IClassFactoryVersion_FWD_DEFINED__
#define __IClassFactoryVersion_FWD_DEFINED__
typedef interface IClassFactoryVersion IClassFactoryVersion;
#endif 	/* __IClassFactoryVersion_FWD_DEFINED__ */


#ifndef __ISOAPTransport2_FWD_DEFINED__
#define __ISOAPTransport2_FWD_DEFINED__
typedef interface ISOAPTransport2 ISOAPTransport2;
#endif 	/* __ISOAPTransport2_FWD_DEFINED__ */


#ifndef __IHTTPTransportDisp_FWD_DEFINED__
#define __IHTTPTransportDisp_FWD_DEFINED__
typedef interface IHTTPTransportDisp IHTTPTransportDisp;
#endif 	/* __IHTTPTransportDisp_FWD_DEFINED__ */


#ifndef __IXsdLong_FWD_DEFINED__
#define __IXsdLong_FWD_DEFINED__
typedef interface IXsdLong IXsdLong;
#endif 	/* __IXsdLong_FWD_DEFINED__ */


#ifndef __INoMultirefSerializer_FWD_DEFINED__
#define __INoMultirefSerializer_FWD_DEFINED__
typedef interface INoMultirefSerializer INoMultirefSerializer;
#endif 	/* __INoMultirefSerializer_FWD_DEFINED__ */


#ifndef __CoEnvelope_FWD_DEFINED__
#define __CoEnvelope_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoEnvelope CoEnvelope;
#else
typedef struct CoEnvelope CoEnvelope;
#endif /* __cplusplus */

#endif 	/* __CoEnvelope_FWD_DEFINED__ */


#ifndef __HTTPTransport_FWD_DEFINED__
#define __HTTPTransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTTPTransport HTTPTransport;
#else
typedef struct HTTPTransport HTTPTransport;
#endif /* __cplusplus */

#endif 	/* __HTTPTransport_FWD_DEFINED__ */


#ifndef __CoSoapNode_FWD_DEFINED__
#define __CoSoapNode_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSoapNode CoSoapNode;
#else
typedef struct CoSoapNode CoSoapNode;
#endif /* __cplusplus */

#endif 	/* __CoSoapNode_FWD_DEFINED__ */


#ifndef __CoSerializerFactory_FWD_DEFINED__
#define __CoSerializerFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerFactory CoSerializerFactory;
#else
typedef struct CoSerializerFactory CoSerializerFactory;
#endif /* __cplusplus */

#endif 	/* __CoSerializerFactory_FWD_DEFINED__ */


#ifndef __CoSerializerSimple_FWD_DEFINED__
#define __CoSerializerSimple_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerSimple CoSerializerSimple;
#else
typedef struct CoSerializerSimple CoSerializerSimple;
#endif /* __cplusplus */

#endif 	/* __CoSerializerSimple_FWD_DEFINED__ */


#ifndef __CoSerializerArray_FWD_DEFINED__
#define __CoSerializerArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerArray CoSerializerArray;
#else
typedef struct CoSerializerArray CoSerializerArray;
#endif /* __cplusplus */

#endif 	/* __CoSerializerArray_FWD_DEFINED__ */


#ifndef __CoDeserializerArray_FWD_DEFINED__
#define __CoDeserializerArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDeserializerArray CoDeserializerArray;
#else
typedef struct CoDeserializerArray CoDeserializerArray;
#endif /* __cplusplus */

#endif 	/* __CoDeserializerArray_FWD_DEFINED__ */


#ifndef __CoSerializerNode_FWD_DEFINED__
#define __CoSerializerNode_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerNode CoSerializerNode;
#else
typedef struct CoSerializerNode CoSerializerNode;
#endif /* __cplusplus */

#endif 	/* __CoSerializerNode_FWD_DEFINED__ */


#ifndef __CoSerializerB64_FWD_DEFINED__
#define __CoSerializerB64_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerB64 CoSerializerB64;
#else
typedef struct CoSerializerB64 CoSerializerB64;
#endif /* __cplusplus */

#endif 	/* __CoSerializerB64_FWD_DEFINED__ */


#ifndef __CoSerializerDate_FWD_DEFINED__
#define __CoSerializerDate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerDate CoSerializerDate;
#else
typedef struct CoSerializerDate CoSerializerDate;
#endif /* __cplusplus */

#endif 	/* __CoSerializerDate_FWD_DEFINED__ */


#ifndef __CoSerializerPB_FWD_DEFINED__
#define __CoSerializerPB_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerPB CoSerializerPB;
#else
typedef struct CoSerializerPB CoSerializerPB;
#endif /* __cplusplus */

#endif 	/* __CoSerializerPB_FWD_DEFINED__ */


#ifndef __CoSerializerBoolean_FWD_DEFINED__
#define __CoSerializerBoolean_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerBoolean CoSerializerBoolean;
#else
typedef struct CoSerializerBoolean CoSerializerBoolean;
#endif /* __cplusplus */

#endif 	/* __CoSerializerBoolean_FWD_DEFINED__ */


#ifndef __RawTcpTransport_FWD_DEFINED__
#define __RawTcpTransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class RawTcpTransport RawTcpTransport;
#else
typedef struct RawTcpTransport RawTcpTransport;
#endif /* __cplusplus */

#endif 	/* __RawTcpTransport_FWD_DEFINED__ */


#ifndef __CoSerializerNull_FWD_DEFINED__
#define __CoSerializerNull_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerNull CoSerializerNull;
#else
typedef struct CoSerializerNull CoSerializerNull;
#endif /* __cplusplus */

#endif 	/* __CoSerializerNull_FWD_DEFINED__ */


#ifndef __CoSerializerHexBin_FWD_DEFINED__
#define __CoSerializerHexBin_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerHexBin CoSerializerHexBin;
#else
typedef struct CoSerializerHexBin CoSerializerHexBin;
#endif /* __cplusplus */

#endif 	/* __CoSerializerHexBin_FWD_DEFINED__ */


#ifndef __CoQName_FWD_DEFINED__
#define __CoQName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoQName CoQName;
#else
typedef struct CoQName CoQName;
#endif /* __cplusplus */

#endif 	/* __CoQName_FWD_DEFINED__ */


#ifndef __CoSerializerQName_FWD_DEFINED__
#define __CoSerializerQName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerQName CoSerializerQName;
#else
typedef struct CoSerializerQName CoSerializerQName;
#endif /* __cplusplus */

#endif 	/* __CoSerializerQName_FWD_DEFINED__ */


#ifndef __CoInterfaceFinder_FWD_DEFINED__
#define __CoInterfaceFinder_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoInterfaceFinder CoInterfaceFinder;
#else
typedef struct CoInterfaceFinder CoInterfaceFinder;
#endif /* __cplusplus */

#endif 	/* __CoInterfaceFinder_FWD_DEFINED__ */


#ifndef __CoSerializerArray12_FWD_DEFINED__
#define __CoSerializerArray12_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoSerializerArray12 CoSerializerArray12;
#else
typedef struct CoSerializerArray12 CoSerializerArray12;
#endif /* __cplusplus */

#endif 	/* __CoSerializerArray12_FWD_DEFINED__ */


#ifndef __CoDeserializerArray12_FWD_DEFINED__
#define __CoDeserializerArray12_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDeserializerArray12 CoDeserializerArray12;
#else
typedef struct CoDeserializerArray12 CoDeserializerArray12;
#endif /* __cplusplus */

#endif 	/* __CoDeserializerArray12_FWD_DEFINED__ */


#ifndef __CoEnvelope12_FWD_DEFINED__
#define __CoEnvelope12_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoEnvelope12 CoEnvelope12;
#else
typedef struct CoEnvelope12 CoEnvelope12;
#endif /* __cplusplus */

#endif 	/* __CoEnvelope12_FWD_DEFINED__ */


#ifndef __CoXsdLong_FWD_DEFINED__
#define __CoXsdLong_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoXsdLong CoXsdLong;
#else
typedef struct CoXsdLong CoXsdLong;
#endif /* __cplusplus */

#endif 	/* __CoXsdLong_FWD_DEFINED__ */


#ifndef __CoDeserializerXsdLong_FWD_DEFINED__
#define __CoDeserializerXsdLong_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDeserializerXsdLong CoDeserializerXsdLong;
#else
typedef struct CoDeserializerXsdLong CoDeserializerXsdLong;
#endif /* __cplusplus */

#endif 	/* __CoDeserializerXsdLong_FWD_DEFINED__ */


#ifndef __ISerializerOutput_FWD_DEFINED__
#define __ISerializerOutput_FWD_DEFINED__
typedef interface ISerializerOutput ISerializerOutput;
#endif 	/* __ISerializerOutput_FWD_DEFINED__ */


#ifndef __ISerializerOutput2_FWD_DEFINED__
#define __ISerializerOutput2_FWD_DEFINED__
typedef interface ISerializerOutput2 ISerializerOutput2;
#endif 	/* __ISerializerOutput2_FWD_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes_FWD_DEFINED__
#define __ISoapDeSerializerAttributes_FWD_DEFINED__
typedef interface ISoapDeSerializerAttributes ISoapDeSerializerAttributes;
#endif 	/* __ISoapDeSerializerAttributes_FWD_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes2_FWD_DEFINED__
#define __ISoapDeSerializerAttributes2_FWD_DEFINED__
typedef interface ISoapDeSerializerAttributes2 ISoapDeSerializerAttributes2;
#endif 	/* __ISoapDeSerializerAttributes2_FWD_DEFINED__ */


#ifndef __ISerializerContext_FWD_DEFINED__
#define __ISerializerContext_FWD_DEFINED__
typedef interface ISerializerContext ISerializerContext;
#endif 	/* __ISerializerContext_FWD_DEFINED__ */


#ifndef __ISerializerContext2_FWD_DEFINED__
#define __ISerializerContext2_FWD_DEFINED__
typedef interface ISerializerContext2 ISerializerContext2;
#endif 	/* __ISerializerContext2_FWD_DEFINED__ */


#ifndef __IHTTPTransportDisp_FWD_DEFINED__
#define __IHTTPTransportDisp_FWD_DEFINED__
typedef interface IHTTPTransportDisp IHTTPTransportDisp;
#endif 	/* __IHTTPTransportDisp_FWD_DEFINED__ */


#ifndef __ISOAPNodeDisp_FWD_DEFINED__
#define __ISOAPNodeDisp_FWD_DEFINED__
typedef interface ISOAPNodeDisp ISOAPNodeDisp;
#endif 	/* __ISOAPNodeDisp_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISOAPTransport_INTERFACE_DEFINED__
#define __ISOAPTransport_INTERFACE_DEFINED__

/* interface ISOAPTransport */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95B904E8-8E1A-40a3-A229-E5E8606D6D3F")
    ISOAPTransport : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Receive( 
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPTransportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPTransport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPTransport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPTransport * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISOAPTransport * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISOAPTransport * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        END_INTERFACE
    } ISOAPTransportVtbl;

    interface ISOAPTransport
    {
        CONST_VTBL struct ISOAPTransportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPTransport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPTransport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPTransport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPTransport_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define ISOAPTransport_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPTransport_Send_Proxy( 
    ISOAPTransport * This,
    /* [in] */ BSTR endpoint,
    /* [in] */ BSTR Envelope);


void __RPC_STUB ISOAPTransport_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPTransport_Receive_Proxy( 
    ISOAPTransport * This,
    /* [out][in] */ BSTR *characterEncoding,
    /* [retval][out] */ SAFEARRAY * *Envelope);


void __RPC_STUB ISOAPTransport_Receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPTransport_INTERFACE_DEFINED__ */


#ifndef __IHTTPTransport_INTERFACE_DEFINED__
#define __IHTTPTransport_INTERFACE_DEFINED__

/* interface IHTTPTransport */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IHTTPTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2F39358-2B60-4fda-B6FC-E95DCC4E9C9B")
    IHTTPTransport : public ISOAPTransport
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SOAPAction( 
            /* [retval][out] */ BSTR *soapAction) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SOAPAction( 
            /* [in] */ BSTR soapAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTTPTransportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHTTPTransport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHTTPTransport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHTTPTransport * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IHTTPTransport * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IHTTPTransport * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOAPAction )( 
            IHTTPTransport * This,
            /* [retval][out] */ BSTR *soapAction);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOAPAction )( 
            IHTTPTransport * This,
            /* [in] */ BSTR soapAction);
        
        END_INTERFACE
    } IHTTPTransportVtbl;

    interface IHTTPTransport
    {
        CONST_VTBL struct IHTTPTransportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTTPTransport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTTPTransport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTTPTransport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTTPTransport_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define IHTTPTransport_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)


#define IHTTPTransport_get_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> get_SOAPAction(This,soapAction)

#define IHTTPTransport_put_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> put_SOAPAction(This,soapAction)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransport_get_SOAPAction_Proxy( 
    IHTTPTransport * This,
    /* [retval][out] */ BSTR *soapAction);


void __RPC_STUB IHTTPTransport_get_SOAPAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransport_put_SOAPAction_Proxy( 
    IHTTPTransport * This,
    /* [in] */ BSTR soapAction);


void __RPC_STUB IHTTPTransport_put_SOAPAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTTPTransport_INTERFACE_DEFINED__ */


#ifndef __IHTTPTransportAdv_INTERFACE_DEFINED__
#define __IHTTPTransportAdv_INTERFACE_DEFINED__

/* interface IHTTPTransportAdv */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IHTTPTransportAdv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("326EBA3F-7120-4528-AF62-03EABD4E00AA")
    IHTTPTransportAdv : public IHTTPTransport
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long timeOut) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ long *timeOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProxy( 
            /* [in] */ BSTR ProxyServer,
            /* [in] */ short ProxyPort) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NoProxy( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Authentication( 
            /* [in] */ BSTR username,
            /* [in] */ BSTR password) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProxyAuthentication( 
            /* [in] */ BSTR username,
            /* [in] */ BSTR password) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCode( 
            /* [retval][out] */ short *statusCode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxRedirectDepth( 
            /* [retval][out] */ short *depth) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxRedirectDepth( 
            /* [in] */ short depth) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTTPTransportAdvVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHTTPTransportAdv * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHTTPTransportAdv * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHTTPTransportAdv * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IHTTPTransportAdv * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IHTTPTransportAdv * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOAPAction )( 
            IHTTPTransportAdv * This,
            /* [retval][out] */ BSTR *soapAction);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOAPAction )( 
            IHTTPTransportAdv * This,
            /* [in] */ BSTR soapAction);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IHTTPTransportAdv * This,
            /* [in] */ long timeOut);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IHTTPTransportAdv * This,
            /* [retval][out] */ long *timeOut);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProxy )( 
            IHTTPTransportAdv * This,
            /* [in] */ BSTR ProxyServer,
            /* [in] */ short ProxyPort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NoProxy )( 
            IHTTPTransportAdv * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Authentication )( 
            IHTTPTransportAdv * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProxyAuthentication )( 
            IHTTPTransportAdv * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCode )( 
            IHTTPTransportAdv * This,
            /* [retval][out] */ short *statusCode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxRedirectDepth )( 
            IHTTPTransportAdv * This,
            /* [retval][out] */ short *depth);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxRedirectDepth )( 
            IHTTPTransportAdv * This,
            /* [in] */ short depth);
        
        END_INTERFACE
    } IHTTPTransportAdvVtbl;

    interface IHTTPTransportAdv
    {
        CONST_VTBL struct IHTTPTransportAdvVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTTPTransportAdv_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTTPTransportAdv_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTTPTransportAdv_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTTPTransportAdv_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define IHTTPTransportAdv_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)


#define IHTTPTransportAdv_get_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> get_SOAPAction(This,soapAction)

#define IHTTPTransportAdv_put_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> put_SOAPAction(This,soapAction)


#define IHTTPTransportAdv_put_Timeout(This,timeOut)	\
    (This)->lpVtbl -> put_Timeout(This,timeOut)

#define IHTTPTransportAdv_get_Timeout(This,timeOut)	\
    (This)->lpVtbl -> get_Timeout(This,timeOut)

#define IHTTPTransportAdv_SetProxy(This,ProxyServer,ProxyPort)	\
    (This)->lpVtbl -> SetProxy(This,ProxyServer,ProxyPort)

#define IHTTPTransportAdv_NoProxy(This)	\
    (This)->lpVtbl -> NoProxy(This)

#define IHTTPTransportAdv_Authentication(This,username,password)	\
    (This)->lpVtbl -> Authentication(This,username,password)

#define IHTTPTransportAdv_ProxyAuthentication(This,username,password)	\
    (This)->lpVtbl -> ProxyAuthentication(This,username,password)

#define IHTTPTransportAdv_get_StatusCode(This,statusCode)	\
    (This)->lpVtbl -> get_StatusCode(This,statusCode)

#define IHTTPTransportAdv_get_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> get_MaxRedirectDepth(This,depth)

#define IHTTPTransportAdv_put_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> put_MaxRedirectDepth(This,depth)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_put_Timeout_Proxy( 
    IHTTPTransportAdv * This,
    /* [in] */ long timeOut);


void __RPC_STUB IHTTPTransportAdv_put_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_get_Timeout_Proxy( 
    IHTTPTransportAdv * This,
    /* [retval][out] */ long *timeOut);


void __RPC_STUB IHTTPTransportAdv_get_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_SetProxy_Proxy( 
    IHTTPTransportAdv * This,
    /* [in] */ BSTR ProxyServer,
    /* [in] */ short ProxyPort);


void __RPC_STUB IHTTPTransportAdv_SetProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_NoProxy_Proxy( 
    IHTTPTransportAdv * This);


void __RPC_STUB IHTTPTransportAdv_NoProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_Authentication_Proxy( 
    IHTTPTransportAdv * This,
    /* [in] */ BSTR username,
    /* [in] */ BSTR password);


void __RPC_STUB IHTTPTransportAdv_Authentication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_ProxyAuthentication_Proxy( 
    IHTTPTransportAdv * This,
    /* [in] */ BSTR username,
    /* [in] */ BSTR password);


void __RPC_STUB IHTTPTransportAdv_ProxyAuthentication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_get_StatusCode_Proxy( 
    IHTTPTransportAdv * This,
    /* [retval][out] */ short *statusCode);


void __RPC_STUB IHTTPTransportAdv_get_StatusCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_get_MaxRedirectDepth_Proxy( 
    IHTTPTransportAdv * This,
    /* [retval][out] */ short *depth);


void __RPC_STUB IHTTPTransportAdv_get_MaxRedirectDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv_put_MaxRedirectDepth_Proxy( 
    IHTTPTransportAdv * This,
    /* [in] */ short depth);


void __RPC_STUB IHTTPTransportAdv_put_MaxRedirectDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTTPTransportAdv_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_idl_0265 */
/* [local] */ 









extern RPC_IF_HANDLE __MIDL_itf_idl_0265_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_idl_0265_v0_0_s_ifspec;

#ifndef __ISOAPNamespaces_INTERFACE_DEFINED__
#define __ISOAPNamespaces_INTERFACE_DEFINED__

/* interface ISOAPNamespaces */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNamespaces;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B7B7EEE-1082-4b51-8519-E7185BE79FF2")
    ISOAPNamespaces : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPrefixForURI( 
            /* [in] */ BSTR NamespaceURI,
            /* [retval][out] */ BSTR *prefix) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetURIForPrefix( 
            /* [in] */ BSTR prefix,
            /* [retval][out] */ BSTR *NamespaceURI) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNamespacesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNamespaces * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNamespaces * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNamespaces * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrefixForURI )( 
            ISOAPNamespaces * This,
            /* [in] */ BSTR NamespaceURI,
            /* [retval][out] */ BSTR *prefix);
        
        HRESULT ( STDMETHODCALLTYPE *GetURIForPrefix )( 
            ISOAPNamespaces * This,
            /* [in] */ BSTR prefix,
            /* [retval][out] */ BSTR *NamespaceURI);
        
        END_INTERFACE
    } ISOAPNamespacesVtbl;

    interface ISOAPNamespaces
    {
        CONST_VTBL struct ISOAPNamespacesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNamespaces_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNamespaces_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNamespaces_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNamespaces_GetPrefixForURI(This,NamespaceURI,prefix)	\
    (This)->lpVtbl -> GetPrefixForURI(This,NamespaceURI,prefix)

#define ISOAPNamespaces_GetURIForPrefix(This,prefix,NamespaceURI)	\
    (This)->lpVtbl -> GetURIForPrefix(This,prefix,NamespaceURI)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISOAPNamespaces_GetPrefixForURI_Proxy( 
    ISOAPNamespaces * This,
    /* [in] */ BSTR NamespaceURI,
    /* [retval][out] */ BSTR *prefix);


void __RPC_STUB ISOAPNamespaces_GetPrefixForURI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISOAPNamespaces_GetURIForPrefix_Proxy( 
    ISOAPNamespaces * This,
    /* [in] */ BSTR prefix,
    /* [retval][out] */ BSTR *NamespaceURI);


void __RPC_STUB ISOAPNamespaces_GetURIForPrefix_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNamespaces_INTERFACE_DEFINED__ */


#ifndef __ISOAPEnvelope_INTERFACE_DEFINED__
#define __ISOAPEnvelope_INTERFACE_DEFINED__

/* interface ISOAPEnvelope */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPEnvelope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B2091B1-DCF9-44a7-A50B-F02971A01BF1")
    ISOAPEnvelope : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThrowFaults( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThrowFaults( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_URI( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_URI( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MethodName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MethodName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EncodingStyle( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EncodingStyle( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMethod( 
            /* [in] */ BSTR methodName,
            /* [in] */ BSTR methodNameNamespaceURI) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Parse( 
            /* [in] */ VARIANT Envelope,
            /* [defaultvalue][in] */ BSTR characterEncoding = L"") = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Serialize( 
            /* [retval][out] */ BSTR *soapMsg) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Headers( 
            /* [retval][out] */ ISOAPNodes **Nodes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ ISOAPNodes **Nodes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parameters( 
            /* [retval][out] */ ISOAPNodes **Nodes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SerializerFactory( 
            /* [retval][out] */ ISerializerFactoryConfig **sf) = 0;
        
        virtual /* [propputref] */ HRESULT STDMETHODCALLTYPE putref_SerializerFactory( 
            /* [in] */ ISerializerFactoryConfig *sf) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPEnvelopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPEnvelope * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPEnvelope * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPEnvelope * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThrowFaults )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThrowFaults )( 
            ISOAPEnvelope * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URI )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URI )( 
            ISOAPEnvelope * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MethodName )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MethodName )( 
            ISOAPEnvelope * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStyle )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodingStyle )( 
            ISOAPEnvelope * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMethod )( 
            ISOAPEnvelope * This,
            /* [in] */ BSTR methodName,
            /* [in] */ BSTR methodNameNamespaceURI);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Parse )( 
            ISOAPEnvelope * This,
            /* [in] */ VARIANT Envelope,
            /* [defaultvalue][in] */ BSTR characterEncoding);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ BSTR *soapMsg);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Headers )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parameters )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerializerFactory )( 
            ISOAPEnvelope * This,
            /* [retval][out] */ ISerializerFactoryConfig **sf);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPEnvelope * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        END_INTERFACE
    } ISOAPEnvelopeVtbl;

    interface ISOAPEnvelope
    {
        CONST_VTBL struct ISOAPEnvelopeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPEnvelope_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPEnvelope_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPEnvelope_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPEnvelope_get_ThrowFaults(This,pVal)	\
    (This)->lpVtbl -> get_ThrowFaults(This,pVal)

#define ISOAPEnvelope_put_ThrowFaults(This,newVal)	\
    (This)->lpVtbl -> put_ThrowFaults(This,newVal)

#define ISOAPEnvelope_get_URI(This,pVal)	\
    (This)->lpVtbl -> get_URI(This,pVal)

#define ISOAPEnvelope_put_URI(This,newVal)	\
    (This)->lpVtbl -> put_URI(This,newVal)

#define ISOAPEnvelope_get_MethodName(This,pVal)	\
    (This)->lpVtbl -> get_MethodName(This,pVal)

#define ISOAPEnvelope_put_MethodName(This,newVal)	\
    (This)->lpVtbl -> put_MethodName(This,newVal)

#define ISOAPEnvelope_get_EncodingStyle(This,pVal)	\
    (This)->lpVtbl -> get_EncodingStyle(This,pVal)

#define ISOAPEnvelope_put_EncodingStyle(This,newVal)	\
    (This)->lpVtbl -> put_EncodingStyle(This,newVal)

#define ISOAPEnvelope_SetMethod(This,methodName,methodNameNamespaceURI)	\
    (This)->lpVtbl -> SetMethod(This,methodName,methodNameNamespaceURI)

#define ISOAPEnvelope_Parse(This,Envelope,characterEncoding)	\
    (This)->lpVtbl -> Parse(This,Envelope,characterEncoding)

#define ISOAPEnvelope_Serialize(This,soapMsg)	\
    (This)->lpVtbl -> Serialize(This,soapMsg)

#define ISOAPEnvelope_get_Headers(This,Nodes)	\
    (This)->lpVtbl -> get_Headers(This,Nodes)

#define ISOAPEnvelope_get_Body(This,Nodes)	\
    (This)->lpVtbl -> get_Body(This,Nodes)

#define ISOAPEnvelope_get_Parameters(This,Nodes)	\
    (This)->lpVtbl -> get_Parameters(This,Nodes)

#define ISOAPEnvelope_get_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> get_SerializerFactory(This,sf)

#define ISOAPEnvelope_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_ThrowFaults_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB ISOAPEnvelope_get_ThrowFaults_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_put_ThrowFaults_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB ISOAPEnvelope_put_ThrowFaults_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_URI_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPEnvelope_get_URI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_put_URI_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPEnvelope_put_URI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_MethodName_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPEnvelope_get_MethodName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_put_MethodName_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPEnvelope_put_MethodName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_EncodingStyle_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPEnvelope_get_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_put_EncodingStyle_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPEnvelope_put_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_SetMethod_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ BSTR methodName,
    /* [in] */ BSTR methodNameNamespaceURI);


void __RPC_STUB ISOAPEnvelope_SetMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_Parse_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ VARIANT Envelope,
    /* [defaultvalue][in] */ BSTR characterEncoding);


void __RPC_STUB ISOAPEnvelope_Parse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_Serialize_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ BSTR *soapMsg);


void __RPC_STUB ISOAPEnvelope_Serialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_Headers_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ ISOAPNodes **Nodes);


void __RPC_STUB ISOAPEnvelope_get_Headers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_Body_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ ISOAPNodes **Nodes);


void __RPC_STUB ISOAPEnvelope_get_Body_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_Parameters_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ ISOAPNodes **Nodes);


void __RPC_STUB ISOAPEnvelope_get_Parameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_get_SerializerFactory_Proxy( 
    ISOAPEnvelope * This,
    /* [retval][out] */ ISerializerFactoryConfig **sf);


void __RPC_STUB ISOAPEnvelope_get_SerializerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propputref] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope_putref_SerializerFactory_Proxy( 
    ISOAPEnvelope * This,
    /* [in] */ ISerializerFactoryConfig *sf);


void __RPC_STUB ISOAPEnvelope_putref_SerializerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPEnvelope_INTERFACE_DEFINED__ */


#ifndef __ISOAPNode_INTERFACE_DEFINED__
#define __ISOAPNode_INTERFACE_DEFINED__

/* interface ISOAPNode */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D9E9EC5-16DB-48f3-A60B-50F76F45785D")
    ISOAPNode : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Namespace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Namespace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TypeNS( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TypeNS( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAs( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [propputref] */ HRESULT STDMETHODCALLTYPE putref_SerializerFactory( 
            /* [in] */ ISerializerFactoryConfig *sf) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_root( 
            /* [retval][out] */ VARIANT_BOOL *IsRoot) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ BSTR *id) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_href( 
            /* [retval][out] */ BSTR *href) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_actor( 
            /* [retval][out] */ BSTR *actorURI) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_mustUnderstand( 
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_offset( 
            /* [retval][out] */ BSTR *offset) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_position( 
            /* [retval][out] */ BSTR *postion) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_nil( 
            /* [retval][out] */ VARIANT_BOOL *IsNil) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_root( 
            /* [in] */ VARIANT_BOOL IsRoot) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_id( 
            /* [in] */ BSTR id) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_href( 
            /* [in] */ BSTR href) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_actor( 
            /* [in] */ BSTR actorURI) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_mustUnderstand( 
            /* [in] */ VARIANT_BOOL MustUnderstand) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_offset( 
            /* [in] */ BSTR offset) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_position( 
            /* [in] */ BSTR postion) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_nil( 
            /* [in] */ VARIANT_BOOL IsNil) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Nodes( 
            /* [retval][out] */ ISOAPNodes **ppNodes) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNode * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNode * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISOAPNode * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespace )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Namespace )( 
            ISOAPNode * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISOAPNode * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNS )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeNS )( 
            ISOAPNode * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISOAPNode * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISOAPNode * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAs )( 
            ISOAPNode * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPNode * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_root )( 
            ISOAPNode * This,
            /* [retval][out] */ VARIANT_BOOL *IsRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_href )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *href);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_actor )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *actorURI);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_mustUnderstand )( 
            ISOAPNode * This,
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *offset);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_position )( 
            ISOAPNode * This,
            /* [retval][out] */ BSTR *postion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nil )( 
            ISOAPNode * This,
            /* [retval][out] */ VARIANT_BOOL *IsNil);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_root )( 
            ISOAPNode * This,
            /* [in] */ VARIANT_BOOL IsRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_id )( 
            ISOAPNode * This,
            /* [in] */ BSTR id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_href )( 
            ISOAPNode * This,
            /* [in] */ BSTR href);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_actor )( 
            ISOAPNode * This,
            /* [in] */ BSTR actorURI);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_mustUnderstand )( 
            ISOAPNode * This,
            /* [in] */ VARIANT_BOOL MustUnderstand);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_offset )( 
            ISOAPNode * This,
            /* [in] */ BSTR offset);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_position )( 
            ISOAPNode * This,
            /* [in] */ BSTR postion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_nil )( 
            ISOAPNode * This,
            /* [in] */ VARIANT_BOOL IsNil);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            ISOAPNode * This,
            /* [retval][out] */ ISOAPNodes **ppNodes);
        
        END_INTERFACE
    } ISOAPNodeVtbl;

    interface ISOAPNode
    {
        CONST_VTBL struct ISOAPNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNode_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNode_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNode_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNode_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISOAPNode_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISOAPNode_get_Namespace(This,pVal)	\
    (This)->lpVtbl -> get_Namespace(This,pVal)

#define ISOAPNode_put_Namespace(This,newVal)	\
    (This)->lpVtbl -> put_Namespace(This,newVal)

#define ISOAPNode_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ISOAPNode_put_Type(This,newVal)	\
    (This)->lpVtbl -> put_Type(This,newVal)

#define ISOAPNode_get_TypeNS(This,pVal)	\
    (This)->lpVtbl -> get_TypeNS(This,pVal)

#define ISOAPNode_put_TypeNS(This,newVal)	\
    (This)->lpVtbl -> put_TypeNS(This,newVal)

#define ISOAPNode_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#define ISOAPNode_put_Value(This,newVal)	\
    (This)->lpVtbl -> put_Value(This,newVal)

#define ISOAPNode_get_ValueAs(This,Type,TypeNS,pVal)	\
    (This)->lpVtbl -> get_ValueAs(This,Type,TypeNS,pVal)

#define ISOAPNode_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)

#define ISOAPNode_get_root(This,IsRoot)	\
    (This)->lpVtbl -> get_root(This,IsRoot)

#define ISOAPNode_get_id(This,id)	\
    (This)->lpVtbl -> get_id(This,id)

#define ISOAPNode_get_href(This,href)	\
    (This)->lpVtbl -> get_href(This,href)

#define ISOAPNode_get_actor(This,actorURI)	\
    (This)->lpVtbl -> get_actor(This,actorURI)

#define ISOAPNode_get_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> get_mustUnderstand(This,MustUnderstand)

#define ISOAPNode_get_offset(This,offset)	\
    (This)->lpVtbl -> get_offset(This,offset)

#define ISOAPNode_get_position(This,postion)	\
    (This)->lpVtbl -> get_position(This,postion)

#define ISOAPNode_get_nil(This,IsNil)	\
    (This)->lpVtbl -> get_nil(This,IsNil)

#define ISOAPNode_put_root(This,IsRoot)	\
    (This)->lpVtbl -> put_root(This,IsRoot)

#define ISOAPNode_put_id(This,id)	\
    (This)->lpVtbl -> put_id(This,id)

#define ISOAPNode_put_href(This,href)	\
    (This)->lpVtbl -> put_href(This,href)

#define ISOAPNode_put_actor(This,actorURI)	\
    (This)->lpVtbl -> put_actor(This,actorURI)

#define ISOAPNode_put_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> put_mustUnderstand(This,MustUnderstand)

#define ISOAPNode_put_offset(This,offset)	\
    (This)->lpVtbl -> put_offset(This,offset)

#define ISOAPNode_put_position(This,postion)	\
    (This)->lpVtbl -> put_position(This,postion)

#define ISOAPNode_put_nil(This,IsNil)	\
    (This)->lpVtbl -> put_nil(This,IsNil)

#define ISOAPNode_get_Nodes(This,ppNodes)	\
    (This)->lpVtbl -> get_Nodes(This,ppNodes)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_Name_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNode_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_Name_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNode_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_Namespace_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNode_get_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_Namespace_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNode_put_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_Type_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNode_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_Type_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNode_put_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_TypeNS_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNode_get_TypeNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_TypeNS_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNode_put_TypeNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_Value_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISOAPNode_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_Value_Proxy( 
    ISOAPNode * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB ISOAPNode_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_ValueAs_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNS,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISOAPNode_get_ValueAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propputref] */ HRESULT STDMETHODCALLTYPE ISOAPNode_putref_SerializerFactory_Proxy( 
    ISOAPNode * This,
    /* [in] */ ISerializerFactoryConfig *sf);


void __RPC_STUB ISOAPNode_putref_SerializerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_root_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ VARIANT_BOOL *IsRoot);


void __RPC_STUB ISOAPNode_get_root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_id_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *id);


void __RPC_STUB ISOAPNode_get_id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_href_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *href);


void __RPC_STUB ISOAPNode_get_href_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_actor_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *actorURI);


void __RPC_STUB ISOAPNode_get_actor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_mustUnderstand_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ VARIANT_BOOL *MustUnderstand);


void __RPC_STUB ISOAPNode_get_mustUnderstand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_offset_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *offset);


void __RPC_STUB ISOAPNode_get_offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_position_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ BSTR *postion);


void __RPC_STUB ISOAPNode_get_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_nil_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ VARIANT_BOOL *IsNil);


void __RPC_STUB ISOAPNode_get_nil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_root_Proxy( 
    ISOAPNode * This,
    /* [in] */ VARIANT_BOOL IsRoot);


void __RPC_STUB ISOAPNode_put_root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_id_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR id);


void __RPC_STUB ISOAPNode_put_id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_href_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR href);


void __RPC_STUB ISOAPNode_put_href_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_actor_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR actorURI);


void __RPC_STUB ISOAPNode_put_actor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_mustUnderstand_Proxy( 
    ISOAPNode * This,
    /* [in] */ VARIANT_BOOL MustUnderstand);


void __RPC_STUB ISOAPNode_put_mustUnderstand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_offset_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR offset);


void __RPC_STUB ISOAPNode_put_offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_position_Proxy( 
    ISOAPNode * This,
    /* [in] */ BSTR postion);


void __RPC_STUB ISOAPNode_put_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode_put_nil_Proxy( 
    ISOAPNode * This,
    /* [in] */ VARIANT_BOOL IsNil);


void __RPC_STUB ISOAPNode_put_nil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode_get_Nodes_Proxy( 
    ISOAPNode * This,
    /* [retval][out] */ ISOAPNodes **ppNodes);


void __RPC_STUB ISOAPNode_get_Nodes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNode_INTERFACE_DEFINED__ */


#ifndef __ISOAPNodes_INTERFACE_DEFINED__
#define __ISOAPNodes_INTERFACE_DEFINED__

/* interface ISOAPNodes */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNodes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("059F284A-C198-4c6e-9E3B-2F45ACBE7F12")
    ISOAPNodes : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long idx,
            /* [retval][out] */ ISOAPNode **node) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemByName( 
            /* [in] */ BSTR Name,
            /* [defaultvalue][in] */ BSTR Namespace,
            /* [retval][out] */ ISOAPNode **node) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ ISOAPNode *newNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT Val,
            /* [defaultvalue][in] */ BSTR Namespace,
            /* [defaultvalue][in] */ BSTR Type,
            /* [defaultvalue][in] */ BSTR TypeNamespace,
            /* [retval][out] */ ISOAPNode **newNode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNodesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNodes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNodes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNodes * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISOAPNodes * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISOAPNodes * This,
            /* [in] */ long idx,
            /* [retval][out] */ ISOAPNode **node);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemByName )( 
            ISOAPNodes * This,
            /* [in] */ BSTR Name,
            /* [defaultvalue][in] */ BSTR Namespace,
            /* [retval][out] */ ISOAPNode **node);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISOAPNodes * This,
            /* [retval][out] */ long *Count);
        
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            ISOAPNodes * This,
            /* [in] */ ISOAPNode *newNode);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISOAPNodes * This);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            ISOAPNodes * This,
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT Val,
            /* [defaultvalue][in] */ BSTR Namespace,
            /* [defaultvalue][in] */ BSTR Type,
            /* [defaultvalue][in] */ BSTR TypeNamespace,
            /* [retval][out] */ ISOAPNode **newNode);
        
        END_INTERFACE
    } ISOAPNodesVtbl;

    interface ISOAPNodes
    {
        CONST_VTBL struct ISOAPNodesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNodes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNodes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNodes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNodes_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define ISOAPNodes_get_Item(This,idx,node)	\
    (This)->lpVtbl -> get_Item(This,idx,node)

#define ISOAPNodes_get_ItemByName(This,Name,Namespace,node)	\
    (This)->lpVtbl -> get_ItemByName(This,Name,Namespace,node)

#define ISOAPNodes_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define ISOAPNodes_Append(This,newNode)	\
    (This)->lpVtbl -> Append(This,newNode)

#define ISOAPNodes_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#define ISOAPNodes_Create(This,Name,Val,Namespace,Type,TypeNamespace,newNode)	\
    (This)->lpVtbl -> Create(This,Name,Val,Namespace,Type,TypeNamespace,newNode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodes_get__NewEnum_Proxy( 
    ISOAPNodes * This,
    /* [retval][out] */ IUnknown **pVal);


void __RPC_STUB ISOAPNodes_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodes_get_Item_Proxy( 
    ISOAPNodes * This,
    /* [in] */ long idx,
    /* [retval][out] */ ISOAPNode **node);


void __RPC_STUB ISOAPNodes_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodes_get_ItemByName_Proxy( 
    ISOAPNodes * This,
    /* [in] */ BSTR Name,
    /* [defaultvalue][in] */ BSTR Namespace,
    /* [retval][out] */ ISOAPNode **node);


void __RPC_STUB ISOAPNodes_get_ItemByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodes_get_Count_Proxy( 
    ISOAPNodes * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB ISOAPNodes_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISOAPNodes_Append_Proxy( 
    ISOAPNodes * This,
    /* [in] */ ISOAPNode *newNode);


void __RPC_STUB ISOAPNodes_Append_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISOAPNodes_Clear_Proxy( 
    ISOAPNodes * This);


void __RPC_STUB ISOAPNodes_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISOAPNodes_Create_Proxy( 
    ISOAPNodes * This,
    /* [in] */ BSTR Name,
    /* [in] */ VARIANT Val,
    /* [defaultvalue][in] */ BSTR Namespace,
    /* [defaultvalue][in] */ BSTR Type,
    /* [defaultvalue][in] */ BSTR TypeNamespace,
    /* [retval][out] */ ISOAPNode **newNode);


void __RPC_STUB ISOAPNodes_Create_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNodes_INTERFACE_DEFINED__ */


#ifndef __ISerializerOutput_INTERFACE_DEFINED__
#define __ISerializerOutput_INTERFACE_DEFINED__

/* interface ISerializerOutput */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12EC9252-557C-4869-9A1D-4A7AAA41562B")
    ISerializerOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartElement( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndElement( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Attribute( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QNameAttribute( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value,
            /* [in] */ BSTR valueNamespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SerializeNode( 
            /* [in] */ ISOAPNode *n) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SerializeValue( 
            /* [in] */ VARIANT *v,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR NameNS) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteText( 
            /* [in] */ BSTR text) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteTextNoEncoding( 
            /* [in] */ BSTR text) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerOutput * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartElement )( 
            ISerializerOutput * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        HRESULT ( STDMETHODCALLTYPE *EndElement )( 
            ISerializerOutput * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        HRESULT ( STDMETHODCALLTYPE *Attribute )( 
            ISerializerOutput * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *QNameAttribute )( 
            ISerializerOutput * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value,
            /* [in] */ BSTR valueNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *SerializeNode )( 
            ISerializerOutput * This,
            /* [in] */ ISOAPNode *n);
        
        HRESULT ( STDMETHODCALLTYPE *SerializeValue )( 
            ISerializerOutput * This,
            /* [in] */ VARIANT *v,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR NameNS);
        
        HRESULT ( STDMETHODCALLTYPE *WriteText )( 
            ISerializerOutput * This,
            /* [in] */ BSTR text);
        
        HRESULT ( STDMETHODCALLTYPE *WriteTextNoEncoding )( 
            ISerializerOutput * This,
            /* [in] */ BSTR text);
        
        END_INTERFACE
    } ISerializerOutputVtbl;

    interface ISerializerOutput
    {
        CONST_VTBL struct ISerializerOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerOutput_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerOutput_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerOutput_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerOutput_StartElement(This,Name,Namespace)	\
    (This)->lpVtbl -> StartElement(This,Name,Namespace)

#define ISerializerOutput_EndElement(This,Name,Namespace)	\
    (This)->lpVtbl -> EndElement(This,Name,Namespace)

#define ISerializerOutput_Attribute(This,Name,Namespace,value)	\
    (This)->lpVtbl -> Attribute(This,Name,Namespace,value)

#define ISerializerOutput_QNameAttribute(This,Name,Namespace,value,valueNamespace)	\
    (This)->lpVtbl -> QNameAttribute(This,Name,Namespace,value,valueNamespace)

#define ISerializerOutput_SerializeNode(This,n)	\
    (This)->lpVtbl -> SerializeNode(This,n)

#define ISerializerOutput_SerializeValue(This,v,Name,NameNS)	\
    (This)->lpVtbl -> SerializeValue(This,v,Name,NameNS)

#define ISerializerOutput_WriteText(This,text)	\
    (This)->lpVtbl -> WriteText(This,text)

#define ISerializerOutput_WriteTextNoEncoding(This,text)	\
    (This)->lpVtbl -> WriteTextNoEncoding(This,text)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerOutput_StartElement_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace);


void __RPC_STUB ISerializerOutput_StartElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_EndElement_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace);


void __RPC_STUB ISerializerOutput_EndElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_Attribute_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace,
    /* [in] */ BSTR value);


void __RPC_STUB ISerializerOutput_Attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_QNameAttribute_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace,
    /* [in] */ BSTR value,
    /* [in] */ BSTR valueNamespace);


void __RPC_STUB ISerializerOutput_QNameAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_SerializeNode_Proxy( 
    ISerializerOutput * This,
    /* [in] */ ISOAPNode *n);


void __RPC_STUB ISerializerOutput_SerializeNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_SerializeValue_Proxy( 
    ISerializerOutput * This,
    /* [in] */ VARIANT *v,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR NameNS);


void __RPC_STUB ISerializerOutput_SerializeValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_WriteText_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR text);


void __RPC_STUB ISerializerOutput_WriteText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerOutput_WriteTextNoEncoding_Proxy( 
    ISerializerOutput * This,
    /* [in] */ BSTR text);


void __RPC_STUB ISerializerOutput_WriteTextNoEncoding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerOutput_INTERFACE_DEFINED__ */


#ifndef __ISerializerContext_INTERFACE_DEFINED__
#define __ISerializerContext_INTERFACE_DEFINED__

/* interface ISerializerContext */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5997F73-9C61-4158-B93A-F1895D4CEEE7")
    ISerializerContext : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Namespaces( 
            /* [retval][out] */ ISOAPNamespaces **ns) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SerializerFactory( 
            /* [retval][out] */ ISerializerFactory **sf) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerContext * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerContext * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespaces )( 
            ISerializerContext * This,
            /* [retval][out] */ ISOAPNamespaces **ns);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerializerFactory )( 
            ISerializerContext * This,
            /* [retval][out] */ ISerializerFactory **sf);
        
        END_INTERFACE
    } ISerializerContextVtbl;

    interface ISerializerContext
    {
        CONST_VTBL struct ISerializerContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerContext_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerContext_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerContext_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerContext_get_Namespaces(This,ns)	\
    (This)->lpVtbl -> get_Namespaces(This,ns)

#define ISerializerContext_get_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> get_SerializerFactory(This,sf)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISerializerContext_get_Namespaces_Proxy( 
    ISerializerContext * This,
    /* [retval][out] */ ISOAPNamespaces **ns);


void __RPC_STUB ISerializerContext_get_Namespaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISerializerContext_get_SerializerFactory_Proxy( 
    ISerializerContext * This,
    /* [retval][out] */ ISerializerFactory **sf);


void __RPC_STUB ISerializerContext_get_SerializerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerContext_INTERFACE_DEFINED__ */


#ifndef __ITypesInit_INTERFACE_DEFINED__
#define __ITypesInit_INTERFACE_DEFINED__

/* interface ITypesInit */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ITypesInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04066DA1-3767-4388-BC1B-70B5C67123E1")
    ITypesInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR xmlType,
            /* [in] */ BSTR xmlTypeNamespace,
            /* [in] */ VARIANT comType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITypesInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITypesInit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITypesInit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITypesInit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ITypesInit * This,
            /* [in] */ BSTR xmlType,
            /* [in] */ BSTR xmlTypeNamespace,
            /* [in] */ VARIANT comType);
        
        END_INTERFACE
    } ITypesInitVtbl;

    interface ITypesInit
    {
        CONST_VTBL struct ITypesInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITypesInit_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITypesInit_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITypesInit_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITypesInit_Initialize(This,xmlType,xmlTypeNamespace,comType)	\
    (This)->lpVtbl -> Initialize(This,xmlType,xmlTypeNamespace,comType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITypesInit_Initialize_Proxy( 
    ITypesInit * This,
    /* [in] */ BSTR xmlType,
    /* [in] */ BSTR xmlTypeNamespace,
    /* [in] */ VARIANT comType);


void __RPC_STUB ITypesInit_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITypesInit_INTERFACE_DEFINED__ */


#ifndef __ISoapSerializer_INTERFACE_DEFINED__
#define __ISoapSerializer_INTERFACE_DEFINED__

/* interface ISoapSerializer */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISoapSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EE30C35-DBDB-44e4-852A-6F0636F7D827")
    ISoapSerializer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Serialize( 
            /* [in] */ VARIANT *val,
            /* [in] */ ISerializerContext *ctx,
            /* [in] */ ISerializerOutput *dest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapSerializer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISoapSerializer * This,
            /* [in] */ VARIANT *val,
            /* [in] */ ISerializerContext *ctx,
            /* [in] */ ISerializerOutput *dest);
        
        END_INTERFACE
    } ISoapSerializerVtbl;

    interface ISoapSerializer
    {
        CONST_VTBL struct ISoapSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapSerializer_Serialize(This,val,ctx,dest)	\
    (This)->lpVtbl -> Serialize(This,val,ctx,dest)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISoapSerializer_Serialize_Proxy( 
    ISoapSerializer * This,
    /* [in] */ VARIANT *val,
    /* [in] */ ISerializerContext *ctx,
    /* [in] */ ISerializerOutput *dest);


void __RPC_STUB ISoapSerializer_Serialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapSerializer_INTERFACE_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes_INTERFACE_DEFINED__
#define __ISoapDeSerializerAttributes_INTERFACE_DEFINED__

/* interface ISoapDeSerializerAttributes */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISoapDeSerializerAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDED1874-8B34-4026-8774-44A7DCB41624")
    ISoapDeSerializerAttributes : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ VARIANT_BOOL *Exists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Value( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ BSTR *val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapDeSerializerAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapDeSerializerAttributes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapDeSerializerAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapDeSerializerAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *Exists )( 
            ISoapDeSerializerAttributes * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ VARIANT_BOOL *Exists);
        
        HRESULT ( STDMETHODCALLTYPE *Value )( 
            ISoapDeSerializerAttributes * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ BSTR *val);
        
        END_INTERFACE
    } ISoapDeSerializerAttributesVtbl;

    interface ISoapDeSerializerAttributes
    {
        CONST_VTBL struct ISoapDeSerializerAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapDeSerializerAttributes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapDeSerializerAttributes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapDeSerializerAttributes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapDeSerializerAttributes_Exists(This,Name,Namespace,Exists)	\
    (This)->lpVtbl -> Exists(This,Name,Namespace,Exists)

#define ISoapDeSerializerAttributes_Value(This,Name,Namespace,val)	\
    (This)->lpVtbl -> Value(This,Name,Namespace,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISoapDeSerializerAttributes_Exists_Proxy( 
    ISoapDeSerializerAttributes * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace,
    /* [retval][out] */ VARIANT_BOOL *Exists);


void __RPC_STUB ISoapDeSerializerAttributes_Exists_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializerAttributes_Value_Proxy( 
    ISoapDeSerializerAttributes * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace,
    /* [retval][out] */ BSTR *val);


void __RPC_STUB ISoapDeSerializerAttributes_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapDeSerializerAttributes_INTERFACE_DEFINED__ */


#ifndef __ISoapDeSerializer_INTERFACE_DEFINED__
#define __ISoapDeSerializer_INTERFACE_DEFINED__

/* interface ISoapDeSerializer */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISoapDeSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE9D8ADF-1996-4ffd-BE39-DF9E65783AB1")
    ISoapDeSerializer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ ISOAPNode *node,
            /* [in] */ BSTR ElementName,
            /* [in] */ ISoapDeSerializerAttributes *Attributes,
            /* [in] */ ISOAPNamespaces *ns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Child( 
            /* [in] */ long id,
            /* [in] */ VARIANT_BOOL ready,
            /* [in] */ ISOAPNode *childNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChildReady( 
            /* [in] */ long id,
            /* [in] */ ISOAPNode *childNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChildRef( 
            /* [in] */ BSTR href,
            /* [in] */ ISOAPNode *hrefNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Ref( 
            /* [in] */ BSTR id,
            /* [in] */ ISOAPNode *idNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Characters( 
            /* [in] */ BSTR charData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapDeSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapDeSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapDeSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapDeSerializer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            ISoapDeSerializer * This,
            /* [in] */ ISOAPNode *node,
            /* [in] */ BSTR ElementName,
            /* [in] */ ISoapDeSerializerAttributes *Attributes,
            /* [in] */ ISOAPNamespaces *ns);
        
        HRESULT ( STDMETHODCALLTYPE *Child )( 
            ISoapDeSerializer * This,
            /* [in] */ long id,
            /* [in] */ VARIANT_BOOL ready,
            /* [in] */ ISOAPNode *childNode);
        
        HRESULT ( STDMETHODCALLTYPE *ChildReady )( 
            ISoapDeSerializer * This,
            /* [in] */ long id,
            /* [in] */ ISOAPNode *childNode);
        
        HRESULT ( STDMETHODCALLTYPE *ChildRef )( 
            ISoapDeSerializer * This,
            /* [in] */ BSTR href,
            /* [in] */ ISOAPNode *hrefNode);
        
        HRESULT ( STDMETHODCALLTYPE *Ref )( 
            ISoapDeSerializer * This,
            /* [in] */ BSTR id,
            /* [in] */ ISOAPNode *idNode);
        
        HRESULT ( STDMETHODCALLTYPE *Characters )( 
            ISoapDeSerializer * This,
            /* [in] */ BSTR charData);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            ISoapDeSerializer * This);
        
        END_INTERFACE
    } ISoapDeSerializerVtbl;

    interface ISoapDeSerializer
    {
        CONST_VTBL struct ISoapDeSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapDeSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapDeSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapDeSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapDeSerializer_Start(This,node,ElementName,Attributes,ns)	\
    (This)->lpVtbl -> Start(This,node,ElementName,Attributes,ns)

#define ISoapDeSerializer_Child(This,id,ready,childNode)	\
    (This)->lpVtbl -> Child(This,id,ready,childNode)

#define ISoapDeSerializer_ChildReady(This,id,childNode)	\
    (This)->lpVtbl -> ChildReady(This,id,childNode)

#define ISoapDeSerializer_ChildRef(This,href,hrefNode)	\
    (This)->lpVtbl -> ChildRef(This,href,hrefNode)

#define ISoapDeSerializer_Ref(This,id,idNode)	\
    (This)->lpVtbl -> Ref(This,id,idNode)

#define ISoapDeSerializer_Characters(This,charData)	\
    (This)->lpVtbl -> Characters(This,charData)

#define ISoapDeSerializer_End(This)	\
    (This)->lpVtbl -> End(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISoapDeSerializer_Start_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ ISOAPNode *node,
    /* [in] */ BSTR ElementName,
    /* [in] */ ISoapDeSerializerAttributes *Attributes,
    /* [in] */ ISOAPNamespaces *ns);


void __RPC_STUB ISoapDeSerializer_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_Child_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ long id,
    /* [in] */ VARIANT_BOOL ready,
    /* [in] */ ISOAPNode *childNode);


void __RPC_STUB ISoapDeSerializer_Child_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_ChildReady_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ long id,
    /* [in] */ ISOAPNode *childNode);


void __RPC_STUB ISoapDeSerializer_ChildReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_ChildRef_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ BSTR href,
    /* [in] */ ISOAPNode *hrefNode);


void __RPC_STUB ISoapDeSerializer_ChildRef_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_Ref_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ BSTR id,
    /* [in] */ ISOAPNode *idNode);


void __RPC_STUB ISoapDeSerializer_Ref_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_Characters_Proxy( 
    ISoapDeSerializer * This,
    /* [in] */ BSTR charData);


void __RPC_STUB ISoapDeSerializer_Characters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISoapDeSerializer_End_Proxy( 
    ISoapDeSerializer * This);


void __RPC_STUB ISoapDeSerializer_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapDeSerializer_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactory_INTERFACE_DEFINED__
#define __ISerializerFactory_INTERFACE_DEFINED__

/* interface ISerializerFactory */
/* [local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDA0F674-DF3F-496b-B314-3E8D87C260FA")
    ISerializerFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SerializerForValue( 
            /* [in] */ VARIANT *v,
            /* [retval][out] */ ISoapSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SerializerForNode( 
            /* [in] */ ISOAPNode *n,
            /* [retval][out] */ ISoapSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReturnSerializer( 
            /* [in] */ ISoapSerializer *s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeserializerForType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeserializerForElement( 
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReturnDeSerializer( 
            /* [in] */ ISoapDeSerializer *s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE XsiForPrimaryNS( 
            /* [retval][out] */ BSTR *uri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAnyType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT_BOOL *IsAnyType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreEqualComTypes( 
            /* [in] */ BSTR XmlTypeA,
            /* [in] */ BSTR XmlTypeNSA,
            /* [in] */ BSTR XmlTypeB,
            /* [in] */ BSTR XmlTypeNSB,
            /* [retval][out] */ VARIANT_BOOL *Match) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindComType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT *comType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForValue )( 
            ISerializerFactory * This,
            /* [in] */ VARIANT *v,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForNode )( 
            ISerializerFactory * This,
            /* [in] */ ISOAPNode *n,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnSerializer )( 
            ISerializerFactory * This,
            /* [in] */ ISoapSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForType )( 
            ISerializerFactory * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForElement )( 
            ISerializerFactory * This,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnDeSerializer )( 
            ISerializerFactory * This,
            /* [in] */ ISoapDeSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *XsiForPrimaryNS )( 
            ISerializerFactory * This,
            /* [retval][out] */ BSTR *uri);
        
        HRESULT ( STDMETHODCALLTYPE *IsAnyType )( 
            ISerializerFactory * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT_BOOL *IsAnyType);
        
        HRESULT ( STDMETHODCALLTYPE *AreEqualComTypes )( 
            ISerializerFactory * This,
            /* [in] */ BSTR XmlTypeA,
            /* [in] */ BSTR XmlTypeNSA,
            /* [in] */ BSTR XmlTypeB,
            /* [in] */ BSTR XmlTypeNSB,
            /* [retval][out] */ VARIANT_BOOL *Match);
        
        HRESULT ( STDMETHODCALLTYPE *FindComType )( 
            ISerializerFactory * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT *comType);
        
        END_INTERFACE
    } ISerializerFactoryVtbl;

    interface ISerializerFactory
    {
        CONST_VTBL struct ISerializerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactory_SerializerForValue(This,v,s)	\
    (This)->lpVtbl -> SerializerForValue(This,v,s)

#define ISerializerFactory_SerializerForNode(This,n,s)	\
    (This)->lpVtbl -> SerializerForNode(This,n,s)

#define ISerializerFactory_ReturnSerializer(This,s)	\
    (This)->lpVtbl -> ReturnSerializer(This,s)

#define ISerializerFactory_DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)	\
    (This)->lpVtbl -> DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)

#define ISerializerFactory_DeserializerForElement(This,elementName,elementNamespace,IsArray,s)	\
    (This)->lpVtbl -> DeserializerForElement(This,elementName,elementNamespace,IsArray,s)

#define ISerializerFactory_ReturnDeSerializer(This,s)	\
    (This)->lpVtbl -> ReturnDeSerializer(This,s)

#define ISerializerFactory_XsiForPrimaryNS(This,uri)	\
    (This)->lpVtbl -> XsiForPrimaryNS(This,uri)

#define ISerializerFactory_IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)	\
    (This)->lpVtbl -> IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)

#define ISerializerFactory_AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)	\
    (This)->lpVtbl -> AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)

#define ISerializerFactory_FindComType(This,XmlType,XmlTypeNamespace,comType)	\
    (This)->lpVtbl -> FindComType(This,XmlType,XmlTypeNamespace,comType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactory_SerializerForValue_Proxy( 
    ISerializerFactory * This,
    /* [in] */ VARIANT *v,
    /* [retval][out] */ ISoapSerializer **s);


void __RPC_STUB ISerializerFactory_SerializerForValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_SerializerForNode_Proxy( 
    ISerializerFactory * This,
    /* [in] */ ISOAPNode *n,
    /* [retval][out] */ ISoapSerializer **s);


void __RPC_STUB ISerializerFactory_SerializerForNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_ReturnSerializer_Proxy( 
    ISerializerFactory * This,
    /* [in] */ ISoapSerializer *s);


void __RPC_STUB ISerializerFactory_ReturnSerializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_DeserializerForType_Proxy( 
    ISerializerFactory * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [in] */ VARIANT_BOOL IsArray,
    /* [retval][out] */ ISoapDeSerializer **s);


void __RPC_STUB ISerializerFactory_DeserializerForType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_DeserializerForElement_Proxy( 
    ISerializerFactory * This,
    /* [in] */ BSTR elementName,
    /* [in] */ BSTR elementNamespace,
    /* [in] */ VARIANT_BOOL IsArray,
    /* [retval][out] */ ISoapDeSerializer **s);


void __RPC_STUB ISerializerFactory_DeserializerForElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_ReturnDeSerializer_Proxy( 
    ISerializerFactory * This,
    /* [in] */ ISoapDeSerializer *s);


void __RPC_STUB ISerializerFactory_ReturnDeSerializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_XsiForPrimaryNS_Proxy( 
    ISerializerFactory * This,
    /* [retval][out] */ BSTR *uri);


void __RPC_STUB ISerializerFactory_XsiForPrimaryNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_IsAnyType_Proxy( 
    ISerializerFactory * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [retval][out] */ VARIANT_BOOL *IsAnyType);


void __RPC_STUB ISerializerFactory_IsAnyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_AreEqualComTypes_Proxy( 
    ISerializerFactory * This,
    /* [in] */ BSTR XmlTypeA,
    /* [in] */ BSTR XmlTypeNSA,
    /* [in] */ BSTR XmlTypeB,
    /* [in] */ BSTR XmlTypeNSB,
    /* [retval][out] */ VARIANT_BOOL *Match);


void __RPC_STUB ISerializerFactory_AreEqualComTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactory_FindComType_Proxy( 
    ISerializerFactory * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [retval][out] */ VARIANT *comType);


void __RPC_STUB ISerializerFactory_FindComType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactory_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryConfig_INTERFACE_DEFINED__
#define __ISerializerFactoryConfig_INTERFACE_DEFINED__

/* interface ISerializerFactoryConfig */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDE93C43-9D84-4474-A307-E31A4F5393F7")
    ISerializerFactoryConfig : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ElementMapping( 
            /* [in] */ BSTR ElementName,
            /* [in] */ BSTR ElementNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Deserializer( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ VARIANT_BOOL ArrayOf,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR ProgID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Serializer( 
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ BSTR ProgID) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PrimarySchema( 
            /* [retval][out] */ BSTR *uri) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PrimarySchema( 
            /* [in] */ BSTR uri) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RootFirst( 
            /* [retval][out] */ VARIANT_BOOL *rootFirst) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RootFirst( 
            /* [in] */ VARIANT_BOOL rootFirst) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConfig( 
            /* [in] */ VARIANT config) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryConfig * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryConfig * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryConfig * This);
        
        HRESULT ( STDMETHODCALLTYPE *ElementMapping )( 
            ISerializerFactoryConfig * This,
            /* [in] */ BSTR ElementName,
            /* [in] */ BSTR ElementNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *Deserializer )( 
            ISerializerFactoryConfig * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ VARIANT_BOOL ArrayOf,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR ProgID);
        
        HRESULT ( STDMETHODCALLTYPE *Serializer )( 
            ISerializerFactoryConfig * This,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ BSTR ProgID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimarySchema )( 
            ISerializerFactoryConfig * This,
            /* [retval][out] */ BSTR *uri);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrimarySchema )( 
            ISerializerFactoryConfig * This,
            /* [in] */ BSTR uri);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFirst )( 
            ISerializerFactoryConfig * This,
            /* [retval][out] */ VARIANT_BOOL *rootFirst);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootFirst )( 
            ISerializerFactoryConfig * This,
            /* [in] */ VARIANT_BOOL rootFirst);
        
        HRESULT ( STDMETHODCALLTYPE *SetConfig )( 
            ISerializerFactoryConfig * This,
            /* [in] */ VARIANT config);
        
        END_INTERFACE
    } ISerializerFactoryConfigVtbl;

    interface ISerializerFactoryConfig
    {
        CONST_VTBL struct ISerializerFactoryConfigVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryConfig_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryConfig_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryConfig_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryConfig_ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)	\
    (This)->lpVtbl -> ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)

#define ISerializerFactoryConfig_Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)	\
    (This)->lpVtbl -> Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)

#define ISerializerFactoryConfig_Serializer(This,ComType,Type,TypeNamespace,ProgID)	\
    (This)->lpVtbl -> Serializer(This,ComType,Type,TypeNamespace,ProgID)

#define ISerializerFactoryConfig_get_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> get_PrimarySchema(This,uri)

#define ISerializerFactoryConfig_put_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> put_PrimarySchema(This,uri)

#define ISerializerFactoryConfig_get_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> get_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig_put_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> put_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig_SetConfig(This,config)	\
    (This)->lpVtbl -> SetConfig(This,config)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_ElementMapping_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ BSTR ElementName,
    /* [in] */ BSTR ElementNamespace,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNamespace);


void __RPC_STUB ISerializerFactoryConfig_ElementMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_Deserializer_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNamespace,
    /* [in] */ VARIANT_BOOL ArrayOf,
    /* [in] */ VARIANT ComType,
    /* [in] */ BSTR ProgID);


void __RPC_STUB ISerializerFactoryConfig_Deserializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_Serializer_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ VARIANT ComType,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNamespace,
    /* [in] */ BSTR ProgID);


void __RPC_STUB ISerializerFactoryConfig_Serializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_get_PrimarySchema_Proxy( 
    ISerializerFactoryConfig * This,
    /* [retval][out] */ BSTR *uri);


void __RPC_STUB ISerializerFactoryConfig_get_PrimarySchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_put_PrimarySchema_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ BSTR uri);


void __RPC_STUB ISerializerFactoryConfig_put_PrimarySchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_get_RootFirst_Proxy( 
    ISerializerFactoryConfig * This,
    /* [retval][out] */ VARIANT_BOOL *rootFirst);


void __RPC_STUB ISerializerFactoryConfig_get_RootFirst_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_put_RootFirst_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ VARIANT_BOOL rootFirst);


void __RPC_STUB ISerializerFactoryConfig_put_RootFirst_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig_SetConfig_Proxy( 
    ISerializerFactoryConfig * This,
    /* [in] */ VARIANT config);


void __RPC_STUB ISerializerFactoryConfig_SetConfig_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryConfig_INTERFACE_DEFINED__ */


#ifndef __ISwATransport_INTERFACE_DEFINED__
#define __ISwATransport_INTERFACE_DEFINED__

/* interface ISwATransport */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISwATransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55DA1181-49F5-429e-B70D-ADA9FF7CEC98")
    ISwATransport : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentType( 
            /* [retval][out] */ BSTR *contentType) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ContentType( 
            /* [in] */ BSTR contentType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT Payload) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Receive( 
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ IUnknown **responseStream) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISwATransportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwATransport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwATransport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwATransport * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentType )( 
            ISwATransport * This,
            /* [retval][out] */ BSTR *contentType);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentType )( 
            ISwATransport * This,
            /* [in] */ BSTR contentType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISwATransport * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT Payload);
        
        HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISwATransport * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ IUnknown **responseStream);
        
        END_INTERFACE
    } ISwATransportVtbl;

    interface ISwATransport
    {
        CONST_VTBL struct ISwATransportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwATransport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISwATransport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISwATransport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISwATransport_get_ContentType(This,contentType)	\
    (This)->lpVtbl -> get_ContentType(This,contentType)

#define ISwATransport_put_ContentType(This,contentType)	\
    (This)->lpVtbl -> put_ContentType(This,contentType)

#define ISwATransport_Send(This,endpoint,Payload)	\
    (This)->lpVtbl -> Send(This,endpoint,Payload)

#define ISwATransport_Receive(This,characterEncoding,responseStream)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,responseStream)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISwATransport_get_ContentType_Proxy( 
    ISwATransport * This,
    /* [retval][out] */ BSTR *contentType);


void __RPC_STUB ISwATransport_get_ContentType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISwATransport_put_ContentType_Proxy( 
    ISwATransport * This,
    /* [in] */ BSTR contentType);


void __RPC_STUB ISwATransport_put_ContentType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISwATransport_Send_Proxy( 
    ISwATransport * This,
    /* [in] */ BSTR endpoint,
    /* [in] */ VARIANT Payload);


void __RPC_STUB ISwATransport_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISwATransport_Receive_Proxy( 
    ISwATransport * This,
    /* [out][in] */ BSTR *characterEncoding,
    /* [retval][out] */ IUnknown **responseStream);


void __RPC_STUB ISwATransport_Receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISwATransport_INTERFACE_DEFINED__ */


#ifndef __ISOAPNode2_INTERFACE_DEFINED__
#define __ISOAPNode2_INTERFACE_DEFINED__

/* interface ISOAPNode2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNode2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("278B4636-7600-494f-B9F9-FD3C3062CA84")
    ISOAPNode2 : public ISOAPNode
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncodingStyle( 
            /* [retval][out] */ BSTR *encStyle) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EncodingStyle( 
            /* [in] */ BSTR encStyle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNode2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNode2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNode2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNode2 * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespace )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Namespace )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNS )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeNS )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISOAPNode2 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISOAPNode2 * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAs )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPNode2 * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_root )( 
            ISOAPNode2 * This,
            /* [retval][out] */ VARIANT_BOOL *IsRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_href )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *href);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_actor )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *actorURI);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_mustUnderstand )( 
            ISOAPNode2 * This,
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *offset);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_position )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *postion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nil )( 
            ISOAPNode2 * This,
            /* [retval][out] */ VARIANT_BOOL *IsNil);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_root )( 
            ISOAPNode2 * This,
            /* [in] */ VARIANT_BOOL IsRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_id )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_href )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR href);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_actor )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR actorURI);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_mustUnderstand )( 
            ISOAPNode2 * This,
            /* [in] */ VARIANT_BOOL MustUnderstand);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_offset )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR offset);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_position )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR postion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_nil )( 
            ISOAPNode2 * This,
            /* [in] */ VARIANT_BOOL IsNil);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            ISOAPNode2 * This,
            /* [retval][out] */ ISOAPNodes **ppNodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStyle )( 
            ISOAPNode2 * This,
            /* [retval][out] */ BSTR *encStyle);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodingStyle )( 
            ISOAPNode2 * This,
            /* [in] */ BSTR encStyle);
        
        END_INTERFACE
    } ISOAPNode2Vtbl;

    interface ISOAPNode2
    {
        CONST_VTBL struct ISOAPNode2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNode2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNode2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNode2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNode2_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISOAPNode2_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISOAPNode2_get_Namespace(This,pVal)	\
    (This)->lpVtbl -> get_Namespace(This,pVal)

#define ISOAPNode2_put_Namespace(This,newVal)	\
    (This)->lpVtbl -> put_Namespace(This,newVal)

#define ISOAPNode2_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ISOAPNode2_put_Type(This,newVal)	\
    (This)->lpVtbl -> put_Type(This,newVal)

#define ISOAPNode2_get_TypeNS(This,pVal)	\
    (This)->lpVtbl -> get_TypeNS(This,pVal)

#define ISOAPNode2_put_TypeNS(This,newVal)	\
    (This)->lpVtbl -> put_TypeNS(This,newVal)

#define ISOAPNode2_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#define ISOAPNode2_put_Value(This,newVal)	\
    (This)->lpVtbl -> put_Value(This,newVal)

#define ISOAPNode2_get_ValueAs(This,Type,TypeNS,pVal)	\
    (This)->lpVtbl -> get_ValueAs(This,Type,TypeNS,pVal)

#define ISOAPNode2_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)

#define ISOAPNode2_get_root(This,IsRoot)	\
    (This)->lpVtbl -> get_root(This,IsRoot)

#define ISOAPNode2_get_id(This,id)	\
    (This)->lpVtbl -> get_id(This,id)

#define ISOAPNode2_get_href(This,href)	\
    (This)->lpVtbl -> get_href(This,href)

#define ISOAPNode2_get_actor(This,actorURI)	\
    (This)->lpVtbl -> get_actor(This,actorURI)

#define ISOAPNode2_get_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> get_mustUnderstand(This,MustUnderstand)

#define ISOAPNode2_get_offset(This,offset)	\
    (This)->lpVtbl -> get_offset(This,offset)

#define ISOAPNode2_get_position(This,postion)	\
    (This)->lpVtbl -> get_position(This,postion)

#define ISOAPNode2_get_nil(This,IsNil)	\
    (This)->lpVtbl -> get_nil(This,IsNil)

#define ISOAPNode2_put_root(This,IsRoot)	\
    (This)->lpVtbl -> put_root(This,IsRoot)

#define ISOAPNode2_put_id(This,id)	\
    (This)->lpVtbl -> put_id(This,id)

#define ISOAPNode2_put_href(This,href)	\
    (This)->lpVtbl -> put_href(This,href)

#define ISOAPNode2_put_actor(This,actorURI)	\
    (This)->lpVtbl -> put_actor(This,actorURI)

#define ISOAPNode2_put_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> put_mustUnderstand(This,MustUnderstand)

#define ISOAPNode2_put_offset(This,offset)	\
    (This)->lpVtbl -> put_offset(This,offset)

#define ISOAPNode2_put_position(This,postion)	\
    (This)->lpVtbl -> put_position(This,postion)

#define ISOAPNode2_put_nil(This,IsNil)	\
    (This)->lpVtbl -> put_nil(This,IsNil)

#define ISOAPNode2_get_Nodes(This,ppNodes)	\
    (This)->lpVtbl -> get_Nodes(This,ppNodes)


#define ISOAPNode2_get_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> get_EncodingStyle(This,encStyle)

#define ISOAPNode2_put_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> put_EncodingStyle(This,encStyle)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode2_get_EncodingStyle_Proxy( 
    ISOAPNode2 * This,
    /* [retval][out] */ BSTR *encStyle);


void __RPC_STUB ISOAPNode2_get_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode2_put_EncodingStyle_Proxy( 
    ISOAPNode2 * This,
    /* [in] */ BSTR encStyle);


void __RPC_STUB ISOAPNode2_put_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNode2_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryPool_INTERFACE_DEFINED__
#define __ISerializerFactoryPool_INTERFACE_DEFINED__

/* interface ISerializerFactoryPool */
/* [local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryPool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00F1C051-C42C-4ebc-A0D6-FE26980BC6B0")
    ISerializerFactoryPool : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryPoolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryPool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryPool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryPool * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISerializerFactoryPool * This);
        
        END_INTERFACE
    } ISerializerFactoryPoolVtbl;

    interface ISerializerFactoryPool
    {
        CONST_VTBL struct ISerializerFactoryPoolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryPool_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryPool_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryPool_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryPool_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryPool_Reset_Proxy( 
    ISerializerFactoryPool * This);


void __RPC_STUB ISerializerFactoryPool_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryPool_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryConfig2_INTERFACE_DEFINED__
#define __ISerializerFactoryConfig2_INTERFACE_DEFINED__

/* interface ISerializerFactoryConfig2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryConfig2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D82EB643-14C9-48f4-A13B-995B6F8CB06D")
    ISerializerFactoryConfig2 : public ISerializerFactoryConfig
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LocalTypeMapping( 
            /* [in] */ BSTR ParentXmlType,
            /* [in] */ BSTR ParentXmlTypeNS,
            /* [in] */ BSTR ChildName,
            /* [in] */ BSTR ChildNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryConfig2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryConfig2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryConfig2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ElementMapping )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ BSTR ElementName,
            /* [in] */ BSTR ElementNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *Deserializer )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ VARIANT_BOOL ArrayOf,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR ProgID);
        
        HRESULT ( STDMETHODCALLTYPE *Serializer )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ BSTR ProgID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimarySchema )( 
            ISerializerFactoryConfig2 * This,
            /* [retval][out] */ BSTR *uri);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrimarySchema )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ BSTR uri);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFirst )( 
            ISerializerFactoryConfig2 * This,
            /* [retval][out] */ VARIANT_BOOL *rootFirst);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootFirst )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ VARIANT_BOOL rootFirst);
        
        HRESULT ( STDMETHODCALLTYPE *SetConfig )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ VARIANT config);
        
        HRESULT ( STDMETHODCALLTYPE *LocalTypeMapping )( 
            ISerializerFactoryConfig2 * This,
            /* [in] */ BSTR ParentXmlType,
            /* [in] */ BSTR ParentXmlTypeNS,
            /* [in] */ BSTR ChildName,
            /* [in] */ BSTR ChildNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace);
        
        END_INTERFACE
    } ISerializerFactoryConfig2Vtbl;

    interface ISerializerFactoryConfig2
    {
        CONST_VTBL struct ISerializerFactoryConfig2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryConfig2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryConfig2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryConfig2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryConfig2_ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)	\
    (This)->lpVtbl -> ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)

#define ISerializerFactoryConfig2_Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)	\
    (This)->lpVtbl -> Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)

#define ISerializerFactoryConfig2_Serializer(This,ComType,Type,TypeNamespace,ProgID)	\
    (This)->lpVtbl -> Serializer(This,ComType,Type,TypeNamespace,ProgID)

#define ISerializerFactoryConfig2_get_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> get_PrimarySchema(This,uri)

#define ISerializerFactoryConfig2_put_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> put_PrimarySchema(This,uri)

#define ISerializerFactoryConfig2_get_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> get_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig2_put_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> put_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig2_SetConfig(This,config)	\
    (This)->lpVtbl -> SetConfig(This,config)


#define ISerializerFactoryConfig2_LocalTypeMapping(This,ParentXmlType,ParentXmlTypeNS,ChildName,ChildNamespace,Type,TypeNamespace)	\
    (This)->lpVtbl -> LocalTypeMapping(This,ParentXmlType,ParentXmlTypeNS,ChildName,ChildNamespace,Type,TypeNamespace)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig2_LocalTypeMapping_Proxy( 
    ISerializerFactoryConfig2 * This,
    /* [in] */ BSTR ParentXmlType,
    /* [in] */ BSTR ParentXmlTypeNS,
    /* [in] */ BSTR ChildName,
    /* [in] */ BSTR ChildNamespace,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNamespace);


void __RPC_STUB ISerializerFactoryConfig2_LocalTypeMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryConfig2_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactory2_INTERFACE_DEFINED__
#define __ISerializerFactory2_INTERFACE_DEFINED__

/* interface ISerializerFactory2 */
/* [local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactory2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52021ABB-8796-4394-8BF7-91B837A9D79D")
    ISerializerFactory2 : public ISerializerFactory
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeserializerForChild( 
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [out][in] */ BSTR *XmlType,
            /* [out][in] */ BSTR *XmlTypeNS,
            /* [retval][out] */ ISoapDeSerializer **s) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactory2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactory2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactory2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactory2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForValue )( 
            ISerializerFactory2 * This,
            /* [in] */ VARIANT *v,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForNode )( 
            ISerializerFactory2 * This,
            /* [in] */ ISOAPNode *n,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnSerializer )( 
            ISerializerFactory2 * This,
            /* [in] */ ISoapSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForType )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForElement )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnDeSerializer )( 
            ISerializerFactory2 * This,
            /* [in] */ ISoapDeSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *XsiForPrimaryNS )( 
            ISerializerFactory2 * This,
            /* [retval][out] */ BSTR *uri);
        
        HRESULT ( STDMETHODCALLTYPE *IsAnyType )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT_BOOL *IsAnyType);
        
        HRESULT ( STDMETHODCALLTYPE *AreEqualComTypes )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR XmlTypeA,
            /* [in] */ BSTR XmlTypeNSA,
            /* [in] */ BSTR XmlTypeB,
            /* [in] */ BSTR XmlTypeNSB,
            /* [retval][out] */ VARIANT_BOOL *Match);
        
        HRESULT ( STDMETHODCALLTYPE *FindComType )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT *comType);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForChild )( 
            ISerializerFactory2 * This,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [out][in] */ BSTR *XmlType,
            /* [out][in] */ BSTR *XmlTypeNS,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        END_INTERFACE
    } ISerializerFactory2Vtbl;

    interface ISerializerFactory2
    {
        CONST_VTBL struct ISerializerFactory2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactory2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactory2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactory2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactory2_SerializerForValue(This,v,s)	\
    (This)->lpVtbl -> SerializerForValue(This,v,s)

#define ISerializerFactory2_SerializerForNode(This,n,s)	\
    (This)->lpVtbl -> SerializerForNode(This,n,s)

#define ISerializerFactory2_ReturnSerializer(This,s)	\
    (This)->lpVtbl -> ReturnSerializer(This,s)

#define ISerializerFactory2_DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)	\
    (This)->lpVtbl -> DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)

#define ISerializerFactory2_DeserializerForElement(This,elementName,elementNamespace,IsArray,s)	\
    (This)->lpVtbl -> DeserializerForElement(This,elementName,elementNamespace,IsArray,s)

#define ISerializerFactory2_ReturnDeSerializer(This,s)	\
    (This)->lpVtbl -> ReturnDeSerializer(This,s)

#define ISerializerFactory2_XsiForPrimaryNS(This,uri)	\
    (This)->lpVtbl -> XsiForPrimaryNS(This,uri)

#define ISerializerFactory2_IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)	\
    (This)->lpVtbl -> IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)

#define ISerializerFactory2_AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)	\
    (This)->lpVtbl -> AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)

#define ISerializerFactory2_FindComType(This,XmlType,XmlTypeNamespace,comType)	\
    (This)->lpVtbl -> FindComType(This,XmlType,XmlTypeNamespace,comType)


#define ISerializerFactory2_DeserializerForChild(This,ParentType,ParentTypeNS,elementName,elementNamespace,IsArray,XmlType,XmlTypeNS,s)	\
    (This)->lpVtbl -> DeserializerForChild(This,ParentType,ParentTypeNS,elementName,elementNamespace,IsArray,XmlType,XmlTypeNS,s)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactory2_DeserializerForChild_Proxy( 
    ISerializerFactory2 * This,
    /* [in] */ BSTR ParentType,
    /* [in] */ BSTR ParentTypeNS,
    /* [in] */ BSTR elementName,
    /* [in] */ BSTR elementNamespace,
    /* [in] */ VARIANT_BOOL IsArray,
    /* [out][in] */ BSTR *XmlType,
    /* [out][in] */ BSTR *XmlTypeNS,
    /* [retval][out] */ ISoapDeSerializer **s);


void __RPC_STUB ISerializerFactory2_DeserializerForChild_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactory2_INTERFACE_DEFINED__ */


#ifndef __ISOAPTransportTimeout_INTERFACE_DEFINED__
#define __ISOAPTransportTimeout_INTERFACE_DEFINED__

/* interface ISOAPTransportTimeout */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPTransportTimeout;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("038D5938-2E2E-4f88-9476-8FFB04AE7501")
    ISOAPTransportTimeout : public ISOAPTransport
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long timeOut) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ long *timeOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPTransportTimeoutVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPTransportTimeout * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPTransportTimeout * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPTransportTimeout * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISOAPTransportTimeout * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISOAPTransportTimeout * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            ISOAPTransportTimeout * This,
            /* [in] */ long timeOut);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            ISOAPTransportTimeout * This,
            /* [retval][out] */ long *timeOut);
        
        END_INTERFACE
    } ISOAPTransportTimeoutVtbl;

    interface ISOAPTransportTimeout
    {
        CONST_VTBL struct ISOAPTransportTimeoutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPTransportTimeout_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPTransportTimeout_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPTransportTimeout_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPTransportTimeout_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define ISOAPTransportTimeout_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)


#define ISOAPTransportTimeout_put_Timeout(This,timeOut)	\
    (This)->lpVtbl -> put_Timeout(This,timeOut)

#define ISOAPTransportTimeout_get_Timeout(This,timeOut)	\
    (This)->lpVtbl -> get_Timeout(This,timeOut)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPTransportTimeout_put_Timeout_Proxy( 
    ISOAPTransportTimeout * This,
    /* [in] */ long timeOut);


void __RPC_STUB ISOAPTransportTimeout_put_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPTransportTimeout_get_Timeout_Proxy( 
    ISOAPTransportTimeout * This,
    /* [retval][out] */ long *timeOut);


void __RPC_STUB ISOAPTransportTimeout_get_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPTransportTimeout_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryPool2_INTERFACE_DEFINED__
#define __ISerializerFactoryPool2_INTERFACE_DEFINED__

/* interface ISerializerFactoryPool2 */
/* [local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryPool2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F09C7B38-7DC3-4a3e-B6BC-EF09FE98B1CF")
    ISerializerFactoryPool2 : public ISerializerFactoryPool
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Fetch( 
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryPool2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryPool2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryPool2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryPool2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISerializerFactoryPool2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Fetch )( 
            ISerializerFactoryPool2 * This,
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } ISerializerFactoryPool2Vtbl;

    interface ISerializerFactoryPool2
    {
        CONST_VTBL struct ISerializerFactoryPool2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryPool2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryPool2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryPool2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryPool2_Reset(This)	\
    (This)->lpVtbl -> Reset(This)


#define ISerializerFactoryPool2_Fetch(This,clsid,ppUnk)	\
    (This)->lpVtbl -> Fetch(This,clsid,ppUnk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryPool2_Fetch_Proxy( 
    ISerializerFactoryPool2 * This,
    /* [in] */ REFCLSID clsid,
    /* [retval][out] */ IUnknown **ppUnk);


void __RPC_STUB ISerializerFactoryPool2_Fetch_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryPool2_INTERFACE_DEFINED__ */


#ifndef __IXmlQName_INTERFACE_DEFINED__
#define __IXmlQName_INTERFACE_DEFINED__

/* interface IXmlQName */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IXmlQName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0F644A2-9A8B-4317-A353-6EF9C42F5840")
    IXmlQName : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Namespace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Namespace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXmlQNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXmlQName * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXmlQName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXmlQName * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IXmlQName * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IXmlQName * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespace )( 
            IXmlQName * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Namespace )( 
            IXmlQName * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            IXmlQName * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        END_INTERFACE
    } IXmlQNameVtbl;

    interface IXmlQName
    {
        CONST_VTBL struct IXmlQNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXmlQName_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXmlQName_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXmlQName_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXmlQName_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IXmlQName_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IXmlQName_get_Namespace(This,pVal)	\
    (This)->lpVtbl -> get_Namespace(This,pVal)

#define IXmlQName_put_Namespace(This,newVal)	\
    (This)->lpVtbl -> put_Namespace(This,newVal)

#define IXmlQName_Set(This,Name,Namespace)	\
    (This)->lpVtbl -> Set(This,Name,Namespace)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IXmlQName_get_Name_Proxy( 
    IXmlQName * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IXmlQName_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IXmlQName_put_Name_Proxy( 
    IXmlQName * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IXmlQName_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IXmlQName_get_Namespace_Proxy( 
    IXmlQName * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IXmlQName_get_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IXmlQName_put_Namespace_Proxy( 
    IXmlQName * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IXmlQName_put_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IXmlQName_Set_Proxy( 
    IXmlQName * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace);


void __RPC_STUB IXmlQName_Set_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXmlQName_INTERFACE_DEFINED__ */


#ifndef __ISOAPNode3_INTERFACE_DEFINED__
#define __ISOAPNode3_INTERFACE_DEFINED__

/* interface ISOAPNode3 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNode3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CCFC68CD-DCD8-4369-A0AB-2FCC805E3BB0")
    ISOAPNode3 : public ISOAPNode2
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_explicitRoot( 
            /* [retval][out] */ VARIANT_BOOL *explicitRoot) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_explicitRoot( 
            /* [in] */ VARIANT_BOOL explicitRoot) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNode3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNode3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNode3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNode3 * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespace )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Namespace )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNS )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeNS )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISOAPNode3 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISOAPNode3 * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAs )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPNode3 * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_root )( 
            ISOAPNode3 * This,
            /* [retval][out] */ VARIANT_BOOL *IsRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_href )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *href);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_actor )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *actorURI);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_mustUnderstand )( 
            ISOAPNode3 * This,
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *offset);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_position )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *postion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nil )( 
            ISOAPNode3 * This,
            /* [retval][out] */ VARIANT_BOOL *IsNil);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_root )( 
            ISOAPNode3 * This,
            /* [in] */ VARIANT_BOOL IsRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_id )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_href )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR href);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_actor )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR actorURI);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_mustUnderstand )( 
            ISOAPNode3 * This,
            /* [in] */ VARIANT_BOOL MustUnderstand);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_offset )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR offset);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_position )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR postion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_nil )( 
            ISOAPNode3 * This,
            /* [in] */ VARIANT_BOOL IsNil);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            ISOAPNode3 * This,
            /* [retval][out] */ ISOAPNodes **ppNodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStyle )( 
            ISOAPNode3 * This,
            /* [retval][out] */ BSTR *encStyle);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodingStyle )( 
            ISOAPNode3 * This,
            /* [in] */ BSTR encStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_explicitRoot )( 
            ISOAPNode3 * This,
            /* [retval][out] */ VARIANT_BOOL *explicitRoot);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_explicitRoot )( 
            ISOAPNode3 * This,
            /* [in] */ VARIANT_BOOL explicitRoot);
        
        END_INTERFACE
    } ISOAPNode3Vtbl;

    interface ISOAPNode3
    {
        CONST_VTBL struct ISOAPNode3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNode3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNode3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNode3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNode3_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISOAPNode3_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISOAPNode3_get_Namespace(This,pVal)	\
    (This)->lpVtbl -> get_Namespace(This,pVal)

#define ISOAPNode3_put_Namespace(This,newVal)	\
    (This)->lpVtbl -> put_Namespace(This,newVal)

#define ISOAPNode3_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ISOAPNode3_put_Type(This,newVal)	\
    (This)->lpVtbl -> put_Type(This,newVal)

#define ISOAPNode3_get_TypeNS(This,pVal)	\
    (This)->lpVtbl -> get_TypeNS(This,pVal)

#define ISOAPNode3_put_TypeNS(This,newVal)	\
    (This)->lpVtbl -> put_TypeNS(This,newVal)

#define ISOAPNode3_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#define ISOAPNode3_put_Value(This,newVal)	\
    (This)->lpVtbl -> put_Value(This,newVal)

#define ISOAPNode3_get_ValueAs(This,Type,TypeNS,pVal)	\
    (This)->lpVtbl -> get_ValueAs(This,Type,TypeNS,pVal)

#define ISOAPNode3_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)

#define ISOAPNode3_get_root(This,IsRoot)	\
    (This)->lpVtbl -> get_root(This,IsRoot)

#define ISOAPNode3_get_id(This,id)	\
    (This)->lpVtbl -> get_id(This,id)

#define ISOAPNode3_get_href(This,href)	\
    (This)->lpVtbl -> get_href(This,href)

#define ISOAPNode3_get_actor(This,actorURI)	\
    (This)->lpVtbl -> get_actor(This,actorURI)

#define ISOAPNode3_get_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> get_mustUnderstand(This,MustUnderstand)

#define ISOAPNode3_get_offset(This,offset)	\
    (This)->lpVtbl -> get_offset(This,offset)

#define ISOAPNode3_get_position(This,postion)	\
    (This)->lpVtbl -> get_position(This,postion)

#define ISOAPNode3_get_nil(This,IsNil)	\
    (This)->lpVtbl -> get_nil(This,IsNil)

#define ISOAPNode3_put_root(This,IsRoot)	\
    (This)->lpVtbl -> put_root(This,IsRoot)

#define ISOAPNode3_put_id(This,id)	\
    (This)->lpVtbl -> put_id(This,id)

#define ISOAPNode3_put_href(This,href)	\
    (This)->lpVtbl -> put_href(This,href)

#define ISOAPNode3_put_actor(This,actorURI)	\
    (This)->lpVtbl -> put_actor(This,actorURI)

#define ISOAPNode3_put_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> put_mustUnderstand(This,MustUnderstand)

#define ISOAPNode3_put_offset(This,offset)	\
    (This)->lpVtbl -> put_offset(This,offset)

#define ISOAPNode3_put_position(This,postion)	\
    (This)->lpVtbl -> put_position(This,postion)

#define ISOAPNode3_put_nil(This,IsNil)	\
    (This)->lpVtbl -> put_nil(This,IsNil)

#define ISOAPNode3_get_Nodes(This,ppNodes)	\
    (This)->lpVtbl -> get_Nodes(This,ppNodes)


#define ISOAPNode3_get_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> get_EncodingStyle(This,encStyle)

#define ISOAPNode3_put_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> put_EncodingStyle(This,encStyle)


#define ISOAPNode3_get_explicitRoot(This,explicitRoot)	\
    (This)->lpVtbl -> get_explicitRoot(This,explicitRoot)

#define ISOAPNode3_put_explicitRoot(This,explicitRoot)	\
    (This)->lpVtbl -> put_explicitRoot(This,explicitRoot)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode3_get_explicitRoot_Proxy( 
    ISOAPNode3 * This,
    /* [retval][out] */ VARIANT_BOOL *explicitRoot);


void __RPC_STUB ISOAPNode3_get_explicitRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode3_put_explicitRoot_Proxy( 
    ISOAPNode3 * This,
    /* [in] */ VARIANT_BOOL explicitRoot);


void __RPC_STUB ISOAPNode3_put_explicitRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNode3_INTERFACE_DEFINED__ */


#ifndef __IInterfaceFinder_INTERFACE_DEFINED__
#define __IInterfaceFinder_INTERFACE_DEFINED__

/* interface IInterfaceFinder */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IInterfaceFinder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1999232F-D5BA-428B-82C2-A2D6DE9B6778")
    IInterfaceFinder : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefaultIID( 
            /* [in] */ BSTR theClass,
            /* [retval][out] */ BSTR *iid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInterfaceFinderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInterfaceFinder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInterfaceFinder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInterfaceFinder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefaultIID )( 
            IInterfaceFinder * This,
            /* [in] */ BSTR theClass,
            /* [retval][out] */ BSTR *iid);
        
        END_INTERFACE
    } IInterfaceFinderVtbl;

    interface IInterfaceFinder
    {
        CONST_VTBL struct IInterfaceFinderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInterfaceFinder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInterfaceFinder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInterfaceFinder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInterfaceFinder_DefaultIID(This,theClass,iid)	\
    (This)->lpVtbl -> DefaultIID(This,theClass,iid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IInterfaceFinder_DefaultIID_Proxy( 
    IInterfaceFinder * This,
    /* [in] */ BSTR theClass,
    /* [retval][out] */ BSTR *iid);


void __RPC_STUB IInterfaceFinder_DefaultIID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInterfaceFinder_INTERFACE_DEFINED__ */


#ifndef __ISimpleSoapSerializer_INTERFACE_DEFINED__
#define __ISimpleSoapSerializer_INTERFACE_DEFINED__

/* interface ISimpleSoapSerializer */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISimpleSoapSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B62D729-6CEC-49b7-9BDD-844DCE42E842")
    ISimpleSoapSerializer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Serialize( 
            /* [in] */ VARIANT *val,
            /* [in] */ ISerializerContext *ctx,
            /* [in] */ BSTR *dest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISimpleSoapSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleSoapSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleSoapSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleSoapSerializer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISimpleSoapSerializer * This,
            /* [in] */ VARIANT *val,
            /* [in] */ ISerializerContext *ctx,
            /* [in] */ BSTR *dest);
        
        END_INTERFACE
    } ISimpleSoapSerializerVtbl;

    interface ISimpleSoapSerializer
    {
        CONST_VTBL struct ISimpleSoapSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleSoapSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISimpleSoapSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISimpleSoapSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISimpleSoapSerializer_Serialize(This,val,ctx,dest)	\
    (This)->lpVtbl -> Serialize(This,val,ctx,dest)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISimpleSoapSerializer_Serialize_Proxy( 
    ISimpleSoapSerializer * This,
    /* [in] */ VARIANT *val,
    /* [in] */ ISerializerContext *ctx,
    /* [in] */ BSTR *dest);


void __RPC_STUB ISimpleSoapSerializer_Serialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISimpleSoapSerializer_INTERFACE_DEFINED__ */


#ifndef __ISimpleSoapDeSerializer_INTERFACE_DEFINED__
#define __ISimpleSoapDeSerializer_INTERFACE_DEFINED__

/* interface ISimpleSoapDeSerializer */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISimpleSoapDeSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9799A1A-F2F7-4dd6-AAA2-C0CA597B6412")
    ISimpleSoapDeSerializer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Deserialize( 
            /* [in] */ BSTR characters,
            /* [in] */ ISOAPNamespaces *ns,
            /* [in] */ VARIANT *dest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISimpleSoapDeSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleSoapDeSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleSoapDeSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleSoapDeSerializer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Deserialize )( 
            ISimpleSoapDeSerializer * This,
            /* [in] */ BSTR characters,
            /* [in] */ ISOAPNamespaces *ns,
            /* [in] */ VARIANT *dest);
        
        END_INTERFACE
    } ISimpleSoapDeSerializerVtbl;

    interface ISimpleSoapDeSerializer
    {
        CONST_VTBL struct ISimpleSoapDeSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleSoapDeSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISimpleSoapDeSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISimpleSoapDeSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISimpleSoapDeSerializer_Deserialize(This,characters,ns,dest)	\
    (This)->lpVtbl -> Deserialize(This,characters,ns,dest)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISimpleSoapDeSerializer_Deserialize_Proxy( 
    ISimpleSoapDeSerializer * This,
    /* [in] */ BSTR characters,
    /* [in] */ ISOAPNamespaces *ns,
    /* [in] */ VARIANT *dest);


void __RPC_STUB ISimpleSoapDeSerializer_Deserialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISimpleSoapDeSerializer_INTERFACE_DEFINED__ */


#ifndef __ISerializerOutput2_INTERFACE_DEFINED__
#define __ISerializerOutput2_INTERFACE_DEFINED__

/* interface ISerializerOutput2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerOutput2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DBA86E6-08D1-4510-989A-76A0596E5488")
    ISerializerOutput2 : public ISerializerOutput
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SerializeAttribute( 
            /* [in] */ VARIANT *value,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerOutput2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerOutput2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerOutput2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerOutput2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartElement )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        HRESULT ( STDMETHODCALLTYPE *EndElement )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        HRESULT ( STDMETHODCALLTYPE *Attribute )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *QNameAttribute )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR value,
            /* [in] */ BSTR valueNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *SerializeNode )( 
            ISerializerOutput2 * This,
            /* [in] */ ISOAPNode *n);
        
        HRESULT ( STDMETHODCALLTYPE *SerializeValue )( 
            ISerializerOutput2 * This,
            /* [in] */ VARIANT *v,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR NameNS);
        
        HRESULT ( STDMETHODCALLTYPE *WriteText )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR text);
        
        HRESULT ( STDMETHODCALLTYPE *WriteTextNoEncoding )( 
            ISerializerOutput2 * This,
            /* [in] */ BSTR text);
        
        HRESULT ( STDMETHODCALLTYPE *SerializeAttribute )( 
            ISerializerOutput2 * This,
            /* [in] */ VARIANT *value,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace);
        
        END_INTERFACE
    } ISerializerOutput2Vtbl;

    interface ISerializerOutput2
    {
        CONST_VTBL struct ISerializerOutput2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerOutput2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerOutput2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerOutput2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerOutput2_StartElement(This,Name,Namespace)	\
    (This)->lpVtbl -> StartElement(This,Name,Namespace)

#define ISerializerOutput2_EndElement(This,Name,Namespace)	\
    (This)->lpVtbl -> EndElement(This,Name,Namespace)

#define ISerializerOutput2_Attribute(This,Name,Namespace,value)	\
    (This)->lpVtbl -> Attribute(This,Name,Namespace,value)

#define ISerializerOutput2_QNameAttribute(This,Name,Namespace,value,valueNamespace)	\
    (This)->lpVtbl -> QNameAttribute(This,Name,Namespace,value,valueNamespace)

#define ISerializerOutput2_SerializeNode(This,n)	\
    (This)->lpVtbl -> SerializeNode(This,n)

#define ISerializerOutput2_SerializeValue(This,v,Name,NameNS)	\
    (This)->lpVtbl -> SerializeValue(This,v,Name,NameNS)

#define ISerializerOutput2_WriteText(This,text)	\
    (This)->lpVtbl -> WriteText(This,text)

#define ISerializerOutput2_WriteTextNoEncoding(This,text)	\
    (This)->lpVtbl -> WriteTextNoEncoding(This,text)


#define ISerializerOutput2_SerializeAttribute(This,value,Name,Namespace)	\
    (This)->lpVtbl -> SerializeAttribute(This,value,Name,Namespace)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerOutput2_SerializeAttribute_Proxy( 
    ISerializerOutput2 * This,
    /* [in] */ VARIANT *value,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace);


void __RPC_STUB ISerializerOutput2_SerializeAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerOutput2_INTERFACE_DEFINED__ */


#ifndef __ISoapDeSerializerAttributes2_INTERFACE_DEFINED__
#define __ISoapDeSerializerAttributes2_INTERFACE_DEFINED__

/* interface ISoapDeSerializerAttributes2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISoapDeSerializerAttributes2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F26011E-67AC-4bc4-8187-431FD8E61B27")
    ISoapDeSerializerAttributes2 : public ISoapDeSerializerAttributes
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ValueAs( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR TypeNamespace,
            /* [retval][out] */ VARIANT *value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapDeSerializerAttributes2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapDeSerializerAttributes2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapDeSerializerAttributes2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapDeSerializerAttributes2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Exists )( 
            ISoapDeSerializerAttributes2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ VARIANT_BOOL *Exists);
        
        HRESULT ( STDMETHODCALLTYPE *Value )( 
            ISoapDeSerializerAttributes2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [retval][out] */ BSTR *val);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ValueAs )( 
            ISoapDeSerializerAttributes2 * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Namespace,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR TypeNamespace,
            /* [retval][out] */ VARIANT *value);
        
        END_INTERFACE
    } ISoapDeSerializerAttributes2Vtbl;

    interface ISoapDeSerializerAttributes2
    {
        CONST_VTBL struct ISoapDeSerializerAttributes2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapDeSerializerAttributes2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapDeSerializerAttributes2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapDeSerializerAttributes2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISoapDeSerializerAttributes2_Exists(This,Name,Namespace,Exists)	\
    (This)->lpVtbl -> Exists(This,Name,Namespace,Exists)

#define ISoapDeSerializerAttributes2_Value(This,Name,Namespace,val)	\
    (This)->lpVtbl -> Value(This,Name,Namespace,val)


#define ISoapDeSerializerAttributes2_ValueAs(This,Name,Namespace,XmlType,TypeNamespace,value)	\
    (This)->lpVtbl -> ValueAs(This,Name,Namespace,XmlType,TypeNamespace,value)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISoapDeSerializerAttributes2_ValueAs_Proxy( 
    ISoapDeSerializerAttributes2 * This,
    /* [in] */ BSTR Name,
    /* [in] */ BSTR Namespace,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR TypeNamespace,
    /* [retval][out] */ VARIANT *value);


void __RPC_STUB ISoapDeSerializerAttributes2_ValueAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISoapDeSerializerAttributes2_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryEx_INTERFACE_DEFINED__
#define __ISerializerFactoryEx_INTERFACE_DEFINED__

/* interface ISerializerFactoryEx */
/* [local][unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B32E88A3-9C49-4a35-87EA-9D81A3C0F1E1")
    ISerializerFactoryEx : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SerializerForValue( 
            /* [in] */ VARIANT *v,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR name,
            /* [in] */ BSTR Namespace,
            /* [out] */ BSTR *type,
            /* [out] */ BSTR *typeNamespace,
            /* [retval][out] */ ISoapSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SerializerForNode( 
            /* [in] */ ISOAPNode *n,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [out] */ BSTR *type,
            /* [out] */ BSTR *typeNamespace,
            /* [retval][out] */ ISoapSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReturnSerializer( 
            /* [in] */ ISoapSerializer *s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeserializerForType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeserializerForElement( 
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [out] */ BSTR *XmlType,
            /* [out] */ BSTR *XmlTypeNS,
            /* [retval][out] */ ISoapDeSerializer **s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReturnDeSerializer( 
            /* [in] */ ISoapDeSerializer *s) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindType( 
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [out] */ BSTR *XmlType,
            /* [out] */ BSTR *XmlTypeNS) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE XsiForPrimaryNS( 
            /* [retval][out] */ BSTR *uri) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAnyType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT_BOOL *IsAnyType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreEqualComTypes( 
            /* [in] */ BSTR XmlTypeA,
            /* [in] */ BSTR XmlTypeNSA,
            /* [in] */ BSTR XmlTypeB,
            /* [in] */ BSTR XmlTypeNSB,
            /* [retval][out] */ VARIANT_BOOL *Match) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindComType( 
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT *comType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForValue )( 
            ISerializerFactoryEx * This,
            /* [in] */ VARIANT *v,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR name,
            /* [in] */ BSTR Namespace,
            /* [out] */ BSTR *type,
            /* [out] */ BSTR *typeNamespace,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *SerializerForNode )( 
            ISerializerFactoryEx * This,
            /* [in] */ ISOAPNode *n,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [out] */ BSTR *type,
            /* [out] */ BSTR *typeNamespace,
            /* [retval][out] */ ISoapSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnSerializer )( 
            ISerializerFactoryEx * This,
            /* [in] */ ISoapSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForType )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *DeserializerForElement )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [in] */ VARIANT_BOOL IsArray,
            /* [out] */ BSTR *XmlType,
            /* [out] */ BSTR *XmlTypeNS,
            /* [retval][out] */ ISoapDeSerializer **s);
        
        HRESULT ( STDMETHODCALLTYPE *ReturnDeSerializer )( 
            ISerializerFactoryEx * This,
            /* [in] */ ISoapDeSerializer *s);
        
        HRESULT ( STDMETHODCALLTYPE *FindType )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR ParentType,
            /* [in] */ BSTR ParentTypeNS,
            /* [in] */ BSTR elementName,
            /* [in] */ BSTR elementNamespace,
            /* [out] */ BSTR *XmlType,
            /* [out] */ BSTR *XmlTypeNS);
        
        HRESULT ( STDMETHODCALLTYPE *XsiForPrimaryNS )( 
            ISerializerFactoryEx * This,
            /* [retval][out] */ BSTR *uri);
        
        HRESULT ( STDMETHODCALLTYPE *IsAnyType )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT_BOOL *IsAnyType);
        
        HRESULT ( STDMETHODCALLTYPE *AreEqualComTypes )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR XmlTypeA,
            /* [in] */ BSTR XmlTypeNSA,
            /* [in] */ BSTR XmlTypeB,
            /* [in] */ BSTR XmlTypeNSB,
            /* [retval][out] */ VARIANT_BOOL *Match);
        
        HRESULT ( STDMETHODCALLTYPE *FindComType )( 
            ISerializerFactoryEx * This,
            /* [in] */ BSTR XmlType,
            /* [in] */ BSTR XmlTypeNamespace,
            /* [retval][out] */ VARIANT *comType);
        
        END_INTERFACE
    } ISerializerFactoryExVtbl;

    interface ISerializerFactoryEx
    {
        CONST_VTBL struct ISerializerFactoryExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryEx_SerializerForValue(This,v,ParentType,ParentTypeNS,name,Namespace,type,typeNamespace,s)	\
    (This)->lpVtbl -> SerializerForValue(This,v,ParentType,ParentTypeNS,name,Namespace,type,typeNamespace,s)

#define ISerializerFactoryEx_SerializerForNode(This,n,ParentType,ParentTypeNS,type,typeNamespace,s)	\
    (This)->lpVtbl -> SerializerForNode(This,n,ParentType,ParentTypeNS,type,typeNamespace,s)

#define ISerializerFactoryEx_ReturnSerializer(This,s)	\
    (This)->lpVtbl -> ReturnSerializer(This,s)

#define ISerializerFactoryEx_DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)	\
    (This)->lpVtbl -> DeserializerForType(This,XmlType,XmlTypeNamespace,IsArray,s)

#define ISerializerFactoryEx_DeserializerForElement(This,ParentType,ParentTypeNS,elementName,elementNamespace,IsArray,XmlType,XmlTypeNS,s)	\
    (This)->lpVtbl -> DeserializerForElement(This,ParentType,ParentTypeNS,elementName,elementNamespace,IsArray,XmlType,XmlTypeNS,s)

#define ISerializerFactoryEx_ReturnDeSerializer(This,s)	\
    (This)->lpVtbl -> ReturnDeSerializer(This,s)

#define ISerializerFactoryEx_FindType(This,ParentType,ParentTypeNS,elementName,elementNamespace,XmlType,XmlTypeNS)	\
    (This)->lpVtbl -> FindType(This,ParentType,ParentTypeNS,elementName,elementNamespace,XmlType,XmlTypeNS)

#define ISerializerFactoryEx_XsiForPrimaryNS(This,uri)	\
    (This)->lpVtbl -> XsiForPrimaryNS(This,uri)

#define ISerializerFactoryEx_IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)	\
    (This)->lpVtbl -> IsAnyType(This,XmlType,XmlTypeNamespace,IsAnyType)

#define ISerializerFactoryEx_AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)	\
    (This)->lpVtbl -> AreEqualComTypes(This,XmlTypeA,XmlTypeNSA,XmlTypeB,XmlTypeNSB,Match)

#define ISerializerFactoryEx_FindComType(This,XmlType,XmlTypeNamespace,comType)	\
    (This)->lpVtbl -> FindComType(This,XmlType,XmlTypeNamespace,comType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_SerializerForValue_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ VARIANT *v,
    /* [in] */ BSTR ParentType,
    /* [in] */ BSTR ParentTypeNS,
    /* [in] */ BSTR name,
    /* [in] */ BSTR Namespace,
    /* [out] */ BSTR *type,
    /* [out] */ BSTR *typeNamespace,
    /* [retval][out] */ ISoapSerializer **s);


void __RPC_STUB ISerializerFactoryEx_SerializerForValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_SerializerForNode_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ ISOAPNode *n,
    /* [in] */ BSTR ParentType,
    /* [in] */ BSTR ParentTypeNS,
    /* [out] */ BSTR *type,
    /* [out] */ BSTR *typeNamespace,
    /* [retval][out] */ ISoapSerializer **s);


void __RPC_STUB ISerializerFactoryEx_SerializerForNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_ReturnSerializer_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ ISoapSerializer *s);


void __RPC_STUB ISerializerFactoryEx_ReturnSerializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_DeserializerForType_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [in] */ VARIANT_BOOL IsArray,
    /* [retval][out] */ ISoapDeSerializer **s);


void __RPC_STUB ISerializerFactoryEx_DeserializerForType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_DeserializerForElement_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR ParentType,
    /* [in] */ BSTR ParentTypeNS,
    /* [in] */ BSTR elementName,
    /* [in] */ BSTR elementNamespace,
    /* [in] */ VARIANT_BOOL IsArray,
    /* [out] */ BSTR *XmlType,
    /* [out] */ BSTR *XmlTypeNS,
    /* [retval][out] */ ISoapDeSerializer **s);


void __RPC_STUB ISerializerFactoryEx_DeserializerForElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_ReturnDeSerializer_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ ISoapDeSerializer *s);


void __RPC_STUB ISerializerFactoryEx_ReturnDeSerializer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_FindType_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR ParentType,
    /* [in] */ BSTR ParentTypeNS,
    /* [in] */ BSTR elementName,
    /* [in] */ BSTR elementNamespace,
    /* [out] */ BSTR *XmlType,
    /* [out] */ BSTR *XmlTypeNS);


void __RPC_STUB ISerializerFactoryEx_FindType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_XsiForPrimaryNS_Proxy( 
    ISerializerFactoryEx * This,
    /* [retval][out] */ BSTR *uri);


void __RPC_STUB ISerializerFactoryEx_XsiForPrimaryNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_IsAnyType_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [retval][out] */ VARIANT_BOOL *IsAnyType);


void __RPC_STUB ISerializerFactoryEx_IsAnyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_AreEqualComTypes_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR XmlTypeA,
    /* [in] */ BSTR XmlTypeNSA,
    /* [in] */ BSTR XmlTypeB,
    /* [in] */ BSTR XmlTypeNSB,
    /* [retval][out] */ VARIANT_BOOL *Match);


void __RPC_STUB ISerializerFactoryEx_AreEqualComTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISerializerFactoryEx_FindComType_Proxy( 
    ISerializerFactoryEx * This,
    /* [in] */ BSTR XmlType,
    /* [in] */ BSTR XmlTypeNamespace,
    /* [retval][out] */ VARIANT *comType);


void __RPC_STUB ISerializerFactoryEx_FindComType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryEx_INTERFACE_DEFINED__ */


#ifndef __IStreamReader_INTERFACE_DEFINED__
#define __IStreamReader_INTERFACE_DEFINED__

/* interface IStreamReader */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IStreamReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("114BD3E3-983B-4509-8DD7-42DC36F4D262")
    IStreamReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Read( 
            void *pv,
            ULONG cb,
            ULONG *pcbRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamReader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IStreamReader * This,
            void *pv,
            ULONG cb,
            ULONG *pcbRead);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IStreamReader * This);
        
        END_INTERFACE
    } IStreamReaderVtbl;

    interface IStreamReader
    {
        CONST_VTBL struct IStreamReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamReader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStreamReader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStreamReader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStreamReader_Read(This,pv,cb,pcbRead)	\
    (This)->lpVtbl -> Read(This,pv,cb,pcbRead)

#define IStreamReader_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IStreamReader_Read_Proxy( 
    IStreamReader * This,
    void *pv,
    ULONG cb,
    ULONG *pcbRead);


void __RPC_STUB IStreamReader_Read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IStreamReader_Reset_Proxy( 
    IStreamReader * This);


void __RPC_STUB IStreamReader_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStreamReader_INTERFACE_DEFINED__ */


#ifndef __IHTTPTransportAdv2_INTERFACE_DEFINED__
#define __IHTTPTransportAdv2_INTERFACE_DEFINED__

/* interface IHTTPTransportAdv2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IHTTPTransportAdv2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D74864A2-6351-445c-ACD0-2DE2508C8E8C")
    IHTTPTransportAdv2 : public IHTTPTransportAdv
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Option( 
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Option( 
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTTPTransportAdv2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHTTPTransportAdv2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHTTPTransportAdv2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ BSTR Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IHTTPTransportAdv2 * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOAPAction )( 
            IHTTPTransportAdv2 * This,
            /* [retval][out] */ BSTR *soapAction);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOAPAction )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR soapAction);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ long timeOut);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IHTTPTransportAdv2 * This,
            /* [retval][out] */ long *timeOut);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProxy )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR ProxyServer,
            /* [in] */ short ProxyPort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NoProxy )( 
            IHTTPTransportAdv2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Authentication )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProxyAuthentication )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCode )( 
            IHTTPTransportAdv2 * This,
            /* [retval][out] */ short *statusCode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxRedirectDepth )( 
            IHTTPTransportAdv2 * This,
            /* [retval][out] */ short *depth);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxRedirectDepth )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ short depth);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Option )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Option )( 
            IHTTPTransportAdv2 * This,
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT val);
        
        END_INTERFACE
    } IHTTPTransportAdv2Vtbl;

    interface IHTTPTransportAdv2
    {
        CONST_VTBL struct IHTTPTransportAdv2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTTPTransportAdv2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTTPTransportAdv2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTTPTransportAdv2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTTPTransportAdv2_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define IHTTPTransportAdv2_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)


#define IHTTPTransportAdv2_get_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> get_SOAPAction(This,soapAction)

#define IHTTPTransportAdv2_put_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> put_SOAPAction(This,soapAction)


#define IHTTPTransportAdv2_put_Timeout(This,timeOut)	\
    (This)->lpVtbl -> put_Timeout(This,timeOut)

#define IHTTPTransportAdv2_get_Timeout(This,timeOut)	\
    (This)->lpVtbl -> get_Timeout(This,timeOut)

#define IHTTPTransportAdv2_SetProxy(This,ProxyServer,ProxyPort)	\
    (This)->lpVtbl -> SetProxy(This,ProxyServer,ProxyPort)

#define IHTTPTransportAdv2_NoProxy(This)	\
    (This)->lpVtbl -> NoProxy(This)

#define IHTTPTransportAdv2_Authentication(This,username,password)	\
    (This)->lpVtbl -> Authentication(This,username,password)

#define IHTTPTransportAdv2_ProxyAuthentication(This,username,password)	\
    (This)->lpVtbl -> ProxyAuthentication(This,username,password)

#define IHTTPTransportAdv2_get_StatusCode(This,statusCode)	\
    (This)->lpVtbl -> get_StatusCode(This,statusCode)

#define IHTTPTransportAdv2_get_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> get_MaxRedirectDepth(This,depth)

#define IHTTPTransportAdv2_put_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> put_MaxRedirectDepth(This,depth)


#define IHTTPTransportAdv2_get_Option(This,optionName,pVal)	\
    (This)->lpVtbl -> get_Option(This,optionName,pVal)

#define IHTTPTransportAdv2_put_Option(This,optionName,val)	\
    (This)->lpVtbl -> put_Option(This,optionName,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv2_get_Option_Proxy( 
    IHTTPTransportAdv2 * This,
    /* [in] */ BSTR optionName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IHTTPTransportAdv2_get_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportAdv2_put_Option_Proxy( 
    IHTTPTransportAdv2 * This,
    /* [in] */ BSTR optionName,
    /* [in] */ VARIANT val);


void __RPC_STUB IHTTPTransportAdv2_put_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTTPTransportAdv2_INTERFACE_DEFINED__ */


#ifndef __ISoapDeSerializerDefaultHandler_INTERFACE_DEFINED__
#define __ISoapDeSerializerDefaultHandler_INTERFACE_DEFINED__

/* interface ISoapDeSerializerDefaultHandler */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISoapDeSerializerDefaultHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A27B2876-2E26-449e-A5B8-1D086A710787")
    ISoapDeSerializerDefaultHandler : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISoapDeSerializerDefaultHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapDeSerializerDefaultHandler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapDeSerializerDefaultHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapDeSerializerDefaultHandler * This);
        
        END_INTERFACE
    } ISoapDeSerializerDefaultHandlerVtbl;

    interface ISoapDeSerializerDefaultHandler
    {
        CONST_VTBL struct ISoapDeSerializerDefaultHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapDeSerializerDefaultHandler_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISoapDeSerializerDefaultHandler_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISoapDeSerializerDefaultHandler_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapDeSerializerDefaultHandler_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryConfig3_INTERFACE_DEFINED__
#define __ISerializerFactoryConfig3_INTERFACE_DEFINED__

/* interface ISerializerFactoryConfig3 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryConfig3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC263B9C-4C97-4539-8D9D-50EC5C7FAA17")
    ISerializerFactoryConfig3 : public ISerializerFactoryConfig2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE understoodHeader( 
            /* [in] */ BSTR NamespaceURI,
            /* [in] */ BSTR localName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryConfig3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryConfig3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryConfig3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ElementMapping )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ BSTR ElementName,
            /* [in] */ BSTR ElementNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *Deserializer )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ VARIANT_BOOL ArrayOf,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR ProgID);
        
        HRESULT ( STDMETHODCALLTYPE *Serializer )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ VARIANT ComType,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace,
            /* [in] */ BSTR ProgID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimarySchema )( 
            ISerializerFactoryConfig3 * This,
            /* [retval][out] */ BSTR *uri);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrimarySchema )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ BSTR uri);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFirst )( 
            ISerializerFactoryConfig3 * This,
            /* [retval][out] */ VARIANT_BOOL *rootFirst);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootFirst )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ VARIANT_BOOL rootFirst);
        
        HRESULT ( STDMETHODCALLTYPE *SetConfig )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ VARIANT config);
        
        HRESULT ( STDMETHODCALLTYPE *LocalTypeMapping )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ BSTR ParentXmlType,
            /* [in] */ BSTR ParentXmlTypeNS,
            /* [in] */ BSTR ChildName,
            /* [in] */ BSTR ChildNamespace,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *understoodHeader )( 
            ISerializerFactoryConfig3 * This,
            /* [in] */ BSTR NamespaceURI,
            /* [in] */ BSTR localName);
        
        END_INTERFACE
    } ISerializerFactoryConfig3Vtbl;

    interface ISerializerFactoryConfig3
    {
        CONST_VTBL struct ISerializerFactoryConfig3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryConfig3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryConfig3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryConfig3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryConfig3_ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)	\
    (This)->lpVtbl -> ElementMapping(This,ElementName,ElementNamespace,Type,TypeNamespace)

#define ISerializerFactoryConfig3_Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)	\
    (This)->lpVtbl -> Deserializer(This,Type,TypeNamespace,ArrayOf,ComType,ProgID)

#define ISerializerFactoryConfig3_Serializer(This,ComType,Type,TypeNamespace,ProgID)	\
    (This)->lpVtbl -> Serializer(This,ComType,Type,TypeNamespace,ProgID)

#define ISerializerFactoryConfig3_get_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> get_PrimarySchema(This,uri)

#define ISerializerFactoryConfig3_put_PrimarySchema(This,uri)	\
    (This)->lpVtbl -> put_PrimarySchema(This,uri)

#define ISerializerFactoryConfig3_get_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> get_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig3_put_RootFirst(This,rootFirst)	\
    (This)->lpVtbl -> put_RootFirst(This,rootFirst)

#define ISerializerFactoryConfig3_SetConfig(This,config)	\
    (This)->lpVtbl -> SetConfig(This,config)


#define ISerializerFactoryConfig3_LocalTypeMapping(This,ParentXmlType,ParentXmlTypeNS,ChildName,ChildNamespace,Type,TypeNamespace)	\
    (This)->lpVtbl -> LocalTypeMapping(This,ParentXmlType,ParentXmlTypeNS,ChildName,ChildNamespace,Type,TypeNamespace)


#define ISerializerFactoryConfig3_understoodHeader(This,NamespaceURI,localName)	\
    (This)->lpVtbl -> understoodHeader(This,NamespaceURI,localName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryConfig3_understoodHeader_Proxy( 
    ISerializerFactoryConfig3 * This,
    /* [in] */ BSTR NamespaceURI,
    /* [in] */ BSTR localName);


void __RPC_STUB ISerializerFactoryConfig3_understoodHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryConfig3_INTERFACE_DEFINED__ */


#ifndef __ISerializerFactoryHeaders_INTERFACE_DEFINED__
#define __ISerializerFactoryHeaders_INTERFACE_DEFINED__

/* interface ISerializerFactoryHeaders */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerFactoryHeaders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E57AC401-CC12-45e0-B5AC-085EBE1D2C54")
    ISerializerFactoryHeaders : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE isUnderstood( 
            /* [in] */ BSTR NamespaceURI,
            /* [in] */ BSTR localName,
            /* [retval][out] */ VARIANT_BOOL *understood) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerFactoryHeadersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerFactoryHeaders * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerFactoryHeaders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerFactoryHeaders * This);
        
        HRESULT ( STDMETHODCALLTYPE *isUnderstood )( 
            ISerializerFactoryHeaders * This,
            /* [in] */ BSTR NamespaceURI,
            /* [in] */ BSTR localName,
            /* [retval][out] */ VARIANT_BOOL *understood);
        
        END_INTERFACE
    } ISerializerFactoryHeadersVtbl;

    interface ISerializerFactoryHeaders
    {
        CONST_VTBL struct ISerializerFactoryHeadersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerFactoryHeaders_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerFactoryHeaders_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerFactoryHeaders_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerFactoryHeaders_isUnderstood(This,NamespaceURI,localName,understood)	\
    (This)->lpVtbl -> isUnderstood(This,NamespaceURI,localName,understood)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISerializerFactoryHeaders_isUnderstood_Proxy( 
    ISerializerFactoryHeaders * This,
    /* [in] */ BSTR NamespaceURI,
    /* [in] */ BSTR localName,
    /* [retval][out] */ VARIANT_BOOL *understood);


void __RPC_STUB ISerializerFactoryHeaders_isUnderstood_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerFactoryHeaders_INTERFACE_DEFINED__ */


#ifndef __ISOAPNode12_INTERFACE_DEFINED__
#define __ISOAPNode12_INTERFACE_DEFINED__

/* interface ISOAPNode12 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNode12;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C0183C2-8598-4cdf-923F-40A5576F39C2")
    ISOAPNode12 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_role( 
            /* [retval][out] */ BSTR *role) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_role( 
            /* [in] */ BSTR newRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_relay( 
            /* [retval][out] */ VARIANT_BOOL *relay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_relay( 
            /* [in] */ VARIANT_BOOL relay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ref( 
            /* [retval][out] */ BSTR *ref) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ref( 
            /* [in] */ BSTR ref) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNode12Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNode12 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNode12 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNode12 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_role )( 
            ISOAPNode12 * This,
            /* [retval][out] */ BSTR *role);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_role )( 
            ISOAPNode12 * This,
            /* [in] */ BSTR newRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_relay )( 
            ISOAPNode12 * This,
            /* [retval][out] */ VARIANT_BOOL *relay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_relay )( 
            ISOAPNode12 * This,
            /* [in] */ VARIANT_BOOL relay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ref )( 
            ISOAPNode12 * This,
            /* [retval][out] */ BSTR *ref);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ref )( 
            ISOAPNode12 * This,
            /* [in] */ BSTR ref);
        
        END_INTERFACE
    } ISOAPNode12Vtbl;

    interface ISOAPNode12
    {
        CONST_VTBL struct ISOAPNode12Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNode12_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNode12_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNode12_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNode12_get_role(This,role)	\
    (This)->lpVtbl -> get_role(This,role)

#define ISOAPNode12_put_role(This,newRole)	\
    (This)->lpVtbl -> put_role(This,newRole)

#define ISOAPNode12_get_relay(This,relay)	\
    (This)->lpVtbl -> get_relay(This,relay)

#define ISOAPNode12_put_relay(This,relay)	\
    (This)->lpVtbl -> put_relay(This,relay)

#define ISOAPNode12_get_ref(This,ref)	\
    (This)->lpVtbl -> get_ref(This,ref)

#define ISOAPNode12_put_ref(This,ref)	\
    (This)->lpVtbl -> put_ref(This,ref)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_get_role_Proxy( 
    ISOAPNode12 * This,
    /* [retval][out] */ BSTR *role);


void __RPC_STUB ISOAPNode12_get_role_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_put_role_Proxy( 
    ISOAPNode12 * This,
    /* [in] */ BSTR newRole);


void __RPC_STUB ISOAPNode12_put_role_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_get_relay_Proxy( 
    ISOAPNode12 * This,
    /* [retval][out] */ VARIANT_BOOL *relay);


void __RPC_STUB ISOAPNode12_get_relay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_put_relay_Proxy( 
    ISOAPNode12 * This,
    /* [in] */ VARIANT_BOOL relay);


void __RPC_STUB ISOAPNode12_put_relay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_get_ref_Proxy( 
    ISOAPNode12 * This,
    /* [retval][out] */ BSTR *ref);


void __RPC_STUB ISOAPNode12_get_ref_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNode12_put_ref_Proxy( 
    ISOAPNode12 * This,
    /* [in] */ BSTR ref);


void __RPC_STUB ISOAPNode12_put_ref_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNode12_INTERFACE_DEFINED__ */


#ifndef __ISOAPNodeDisp_INTERFACE_DEFINED__
#define __ISOAPNodeDisp_INTERFACE_DEFINED__

/* interface ISOAPNodeDisp */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPNodeDisp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6118D9E-9F46-400e-A09B-7D9F01C6A593")
    ISOAPNodeDisp : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Namespace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Namespace( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TypeNS( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TypeNS( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAs( 
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [propputref] */ HRESULT STDMETHODCALLTYPE putref_SerializerFactory( 
            /* [in] */ ISerializerFactoryConfig *sf) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_root( 
            /* [retval][out] */ VARIANT_BOOL *IsRoot) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_id( 
            /* [retval][out] */ BSTR *id) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_href( 
            /* [retval][out] */ BSTR *href) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_actor( 
            /* [retval][out] */ BSTR *actorURI) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_mustUnderstand( 
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_offset( 
            /* [retval][out] */ BSTR *offset) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_position( 
            /* [retval][out] */ BSTR *postion) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_nil( 
            /* [retval][out] */ VARIANT_BOOL *IsNil) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_root( 
            /* [in] */ VARIANT_BOOL IsRoot) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_id( 
            /* [in] */ BSTR id) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_href( 
            /* [in] */ BSTR href) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_actor( 
            /* [in] */ BSTR actorURI) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_mustUnderstand( 
            /* [in] */ VARIANT_BOOL MustUnderstand) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_offset( 
            /* [in] */ BSTR offset) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_position( 
            /* [in] */ BSTR postion) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_nil( 
            /* [in] */ VARIANT_BOOL IsNil) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Nodes( 
            /* [retval][out] */ ISOAPNodes **ppNodes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EncodingStyle( 
            /* [retval][out] */ BSTR *encStyle) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EncodingStyle( 
            /* [in] */ BSTR encStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_explicitRoot( 
            /* [retval][out] */ VARIANT_BOOL *explicitRoot) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_explicitRoot( 
            /* [in] */ VARIANT_BOOL explicitRoot) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_role( 
            /* [retval][out] */ BSTR *role) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_role( 
            /* [in] */ BSTR newRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_relay( 
            /* [retval][out] */ VARIANT_BOOL *relay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_relay( 
            /* [in] */ VARIANT_BOOL relay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ref( 
            /* [retval][out] */ BSTR *ref) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ref( 
            /* [in] */ BSTR ref) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPNodeDispVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPNodeDisp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPNodeDisp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPNodeDisp * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespace )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Namespace )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNS )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TypeNS )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAs )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR Type,
            /* [in] */ BSTR TypeNS,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPNodeDisp * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_root )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT_BOOL *IsRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_id )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_href )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *href);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_actor )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *actorURI);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_mustUnderstand )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT_BOOL *MustUnderstand);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *offset);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_position )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *postion);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nil )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT_BOOL *IsNil);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_root )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT_BOOL IsRoot);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_id )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_href )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR href);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_actor )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR actorURI);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_mustUnderstand )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT_BOOL MustUnderstand);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_offset )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR offset);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_position )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR postion);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_nil )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT_BOOL IsNil);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ ISOAPNodes **ppNodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStyle )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *encStyle);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodingStyle )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR encStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_explicitRoot )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT_BOOL *explicitRoot);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_explicitRoot )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT_BOOL explicitRoot);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_role )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *role);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_role )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR newRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_relay )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ VARIANT_BOOL *relay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_relay )( 
            ISOAPNodeDisp * This,
            /* [in] */ VARIANT_BOOL relay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ref )( 
            ISOAPNodeDisp * This,
            /* [retval][out] */ BSTR *ref);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ref )( 
            ISOAPNodeDisp * This,
            /* [in] */ BSTR ref);
        
        END_INTERFACE
    } ISOAPNodeDispVtbl;

    interface ISOAPNodeDisp
    {
        CONST_VTBL struct ISOAPNodeDispVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPNodeDisp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPNodeDisp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPNodeDisp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPNodeDisp_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISOAPNodeDisp_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISOAPNodeDisp_get_Namespace(This,pVal)	\
    (This)->lpVtbl -> get_Namespace(This,pVal)

#define ISOAPNodeDisp_put_Namespace(This,newVal)	\
    (This)->lpVtbl -> put_Namespace(This,newVal)

#define ISOAPNodeDisp_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ISOAPNodeDisp_put_Type(This,newVal)	\
    (This)->lpVtbl -> put_Type(This,newVal)

#define ISOAPNodeDisp_get_TypeNS(This,pVal)	\
    (This)->lpVtbl -> get_TypeNS(This,pVal)

#define ISOAPNodeDisp_put_TypeNS(This,newVal)	\
    (This)->lpVtbl -> put_TypeNS(This,newVal)

#define ISOAPNodeDisp_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#define ISOAPNodeDisp_put_Value(This,newVal)	\
    (This)->lpVtbl -> put_Value(This,newVal)

#define ISOAPNodeDisp_get_ValueAs(This,Type,TypeNS,pVal)	\
    (This)->lpVtbl -> get_ValueAs(This,Type,TypeNS,pVal)

#define ISOAPNodeDisp_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)

#define ISOAPNodeDisp_get_root(This,IsRoot)	\
    (This)->lpVtbl -> get_root(This,IsRoot)

#define ISOAPNodeDisp_get_id(This,id)	\
    (This)->lpVtbl -> get_id(This,id)

#define ISOAPNodeDisp_get_href(This,href)	\
    (This)->lpVtbl -> get_href(This,href)

#define ISOAPNodeDisp_get_actor(This,actorURI)	\
    (This)->lpVtbl -> get_actor(This,actorURI)

#define ISOAPNodeDisp_get_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> get_mustUnderstand(This,MustUnderstand)

#define ISOAPNodeDisp_get_offset(This,offset)	\
    (This)->lpVtbl -> get_offset(This,offset)

#define ISOAPNodeDisp_get_position(This,postion)	\
    (This)->lpVtbl -> get_position(This,postion)

#define ISOAPNodeDisp_get_nil(This,IsNil)	\
    (This)->lpVtbl -> get_nil(This,IsNil)

#define ISOAPNodeDisp_put_root(This,IsRoot)	\
    (This)->lpVtbl -> put_root(This,IsRoot)

#define ISOAPNodeDisp_put_id(This,id)	\
    (This)->lpVtbl -> put_id(This,id)

#define ISOAPNodeDisp_put_href(This,href)	\
    (This)->lpVtbl -> put_href(This,href)

#define ISOAPNodeDisp_put_actor(This,actorURI)	\
    (This)->lpVtbl -> put_actor(This,actorURI)

#define ISOAPNodeDisp_put_mustUnderstand(This,MustUnderstand)	\
    (This)->lpVtbl -> put_mustUnderstand(This,MustUnderstand)

#define ISOAPNodeDisp_put_offset(This,offset)	\
    (This)->lpVtbl -> put_offset(This,offset)

#define ISOAPNodeDisp_put_position(This,postion)	\
    (This)->lpVtbl -> put_position(This,postion)

#define ISOAPNodeDisp_put_nil(This,IsNil)	\
    (This)->lpVtbl -> put_nil(This,IsNil)

#define ISOAPNodeDisp_get_Nodes(This,ppNodes)	\
    (This)->lpVtbl -> get_Nodes(This,ppNodes)

#define ISOAPNodeDisp_get_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> get_EncodingStyle(This,encStyle)

#define ISOAPNodeDisp_put_EncodingStyle(This,encStyle)	\
    (This)->lpVtbl -> put_EncodingStyle(This,encStyle)

#define ISOAPNodeDisp_get_explicitRoot(This,explicitRoot)	\
    (This)->lpVtbl -> get_explicitRoot(This,explicitRoot)

#define ISOAPNodeDisp_put_explicitRoot(This,explicitRoot)	\
    (This)->lpVtbl -> put_explicitRoot(This,explicitRoot)

#define ISOAPNodeDisp_get_role(This,role)	\
    (This)->lpVtbl -> get_role(This,role)

#define ISOAPNodeDisp_put_role(This,newRole)	\
    (This)->lpVtbl -> put_role(This,newRole)

#define ISOAPNodeDisp_get_relay(This,relay)	\
    (This)->lpVtbl -> get_relay(This,relay)

#define ISOAPNodeDisp_put_relay(This,relay)	\
    (This)->lpVtbl -> put_relay(This,relay)

#define ISOAPNodeDisp_get_ref(This,ref)	\
    (This)->lpVtbl -> get_ref(This,ref)

#define ISOAPNodeDisp_put_ref(This,ref)	\
    (This)->lpVtbl -> put_ref(This,ref)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_Name_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNodeDisp_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_Name_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNodeDisp_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_Namespace_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNodeDisp_get_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_Namespace_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNodeDisp_put_Namespace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_Type_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNodeDisp_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_Type_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNodeDisp_put_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_TypeNS_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISOAPNodeDisp_get_TypeNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_TypeNS_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISOAPNodeDisp_put_TypeNS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_Value_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISOAPNodeDisp_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_Value_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB ISOAPNodeDisp_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_ValueAs_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR Type,
    /* [in] */ BSTR TypeNS,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISOAPNodeDisp_get_ValueAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propputref] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_putref_SerializerFactory_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ ISerializerFactoryConfig *sf);


void __RPC_STUB ISOAPNodeDisp_putref_SerializerFactory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_root_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT_BOOL *IsRoot);


void __RPC_STUB ISOAPNodeDisp_get_root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_id_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *id);


void __RPC_STUB ISOAPNodeDisp_get_id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_href_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *href);


void __RPC_STUB ISOAPNodeDisp_get_href_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_actor_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *actorURI);


void __RPC_STUB ISOAPNodeDisp_get_actor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_mustUnderstand_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT_BOOL *MustUnderstand);


void __RPC_STUB ISOAPNodeDisp_get_mustUnderstand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_offset_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *offset);


void __RPC_STUB ISOAPNodeDisp_get_offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_position_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *postion);


void __RPC_STUB ISOAPNodeDisp_get_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_nil_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT_BOOL *IsNil);


void __RPC_STUB ISOAPNodeDisp_get_nil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_root_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT_BOOL IsRoot);


void __RPC_STUB ISOAPNodeDisp_put_root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_id_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR id);


void __RPC_STUB ISOAPNodeDisp_put_id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_href_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR href);


void __RPC_STUB ISOAPNodeDisp_put_href_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_actor_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR actorURI);


void __RPC_STUB ISOAPNodeDisp_put_actor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_mustUnderstand_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT_BOOL MustUnderstand);


void __RPC_STUB ISOAPNodeDisp_put_mustUnderstand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_offset_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR offset);


void __RPC_STUB ISOAPNodeDisp_put_offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_position_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR postion);


void __RPC_STUB ISOAPNodeDisp_put_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_nil_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT_BOOL IsNil);


void __RPC_STUB ISOAPNodeDisp_put_nil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_Nodes_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ ISOAPNodes **ppNodes);


void __RPC_STUB ISOAPNodeDisp_get_Nodes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_EncodingStyle_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *encStyle);


void __RPC_STUB ISOAPNodeDisp_get_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_EncodingStyle_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR encStyle);


void __RPC_STUB ISOAPNodeDisp_put_EncodingStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_explicitRoot_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT_BOOL *explicitRoot);


void __RPC_STUB ISOAPNodeDisp_get_explicitRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_explicitRoot_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT_BOOL explicitRoot);


void __RPC_STUB ISOAPNodeDisp_put_explicitRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_role_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *role);


void __RPC_STUB ISOAPNodeDisp_get_role_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_role_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR newRole);


void __RPC_STUB ISOAPNodeDisp_put_role_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_relay_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ VARIANT_BOOL *relay);


void __RPC_STUB ISOAPNodeDisp_get_relay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_relay_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ VARIANT_BOOL relay);


void __RPC_STUB ISOAPNodeDisp_put_relay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_get_ref_Proxy( 
    ISOAPNodeDisp * This,
    /* [retval][out] */ BSTR *ref);


void __RPC_STUB ISOAPNodeDisp_get_ref_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPNodeDisp_put_ref_Proxy( 
    ISOAPNodeDisp * This,
    /* [in] */ BSTR ref);


void __RPC_STUB ISOAPNodeDisp_put_ref_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPNodeDisp_INTERFACE_DEFINED__ */


#ifndef __ISOAPEnvelope2_INTERFACE_DEFINED__
#define __ISOAPEnvelope2_INTERFACE_DEFINED__

/* interface ISOAPEnvelope2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPEnvelope2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6DBEBD71-F91F-4924-AB0E-DB37DD38DA76")
    ISOAPEnvelope2 : public ISOAPEnvelope
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnvelopeVersion( 
            /* [retval][out] */ BSTR *envelopeVersionUri) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EnvelopeVersion( 
            /* [in] */ BSTR envelopeVersionUri) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPEnvelope2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPEnvelope2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPEnvelope2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPEnvelope2 * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThrowFaults )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThrowFaults )( 
            ISOAPEnvelope2 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URI )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URI )( 
            ISOAPEnvelope2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MethodName )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MethodName )( 
            ISOAPEnvelope2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStyle )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodingStyle )( 
            ISOAPEnvelope2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMethod )( 
            ISOAPEnvelope2 * This,
            /* [in] */ BSTR methodName,
            /* [in] */ BSTR methodNameNamespaceURI);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Parse )( 
            ISOAPEnvelope2 * This,
            /* [in] */ VARIANT Envelope,
            /* [defaultvalue][in] */ BSTR characterEncoding);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Serialize )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ BSTR *soapMsg);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Headers )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parameters )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ ISOAPNodes **Nodes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerializerFactory )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ ISerializerFactoryConfig **sf);
        
        /* [propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_SerializerFactory )( 
            ISOAPEnvelope2 * This,
            /* [in] */ ISerializerFactoryConfig *sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnvelopeVersion )( 
            ISOAPEnvelope2 * This,
            /* [retval][out] */ BSTR *envelopeVersionUri);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnvelopeVersion )( 
            ISOAPEnvelope2 * This,
            /* [in] */ BSTR envelopeVersionUri);
        
        END_INTERFACE
    } ISOAPEnvelope2Vtbl;

    interface ISOAPEnvelope2
    {
        CONST_VTBL struct ISOAPEnvelope2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPEnvelope2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPEnvelope2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPEnvelope2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPEnvelope2_get_ThrowFaults(This,pVal)	\
    (This)->lpVtbl -> get_ThrowFaults(This,pVal)

#define ISOAPEnvelope2_put_ThrowFaults(This,newVal)	\
    (This)->lpVtbl -> put_ThrowFaults(This,newVal)

#define ISOAPEnvelope2_get_URI(This,pVal)	\
    (This)->lpVtbl -> get_URI(This,pVal)

#define ISOAPEnvelope2_put_URI(This,newVal)	\
    (This)->lpVtbl -> put_URI(This,newVal)

#define ISOAPEnvelope2_get_MethodName(This,pVal)	\
    (This)->lpVtbl -> get_MethodName(This,pVal)

#define ISOAPEnvelope2_put_MethodName(This,newVal)	\
    (This)->lpVtbl -> put_MethodName(This,newVal)

#define ISOAPEnvelope2_get_EncodingStyle(This,pVal)	\
    (This)->lpVtbl -> get_EncodingStyle(This,pVal)

#define ISOAPEnvelope2_put_EncodingStyle(This,newVal)	\
    (This)->lpVtbl -> put_EncodingStyle(This,newVal)

#define ISOAPEnvelope2_SetMethod(This,methodName,methodNameNamespaceURI)	\
    (This)->lpVtbl -> SetMethod(This,methodName,methodNameNamespaceURI)

#define ISOAPEnvelope2_Parse(This,Envelope,characterEncoding)	\
    (This)->lpVtbl -> Parse(This,Envelope,characterEncoding)

#define ISOAPEnvelope2_Serialize(This,soapMsg)	\
    (This)->lpVtbl -> Serialize(This,soapMsg)

#define ISOAPEnvelope2_get_Headers(This,Nodes)	\
    (This)->lpVtbl -> get_Headers(This,Nodes)

#define ISOAPEnvelope2_get_Body(This,Nodes)	\
    (This)->lpVtbl -> get_Body(This,Nodes)

#define ISOAPEnvelope2_get_Parameters(This,Nodes)	\
    (This)->lpVtbl -> get_Parameters(This,Nodes)

#define ISOAPEnvelope2_get_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> get_SerializerFactory(This,sf)

#define ISOAPEnvelope2_putref_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> putref_SerializerFactory(This,sf)


#define ISOAPEnvelope2_get_EnvelopeVersion(This,envelopeVersionUri)	\
    (This)->lpVtbl -> get_EnvelopeVersion(This,envelopeVersionUri)

#define ISOAPEnvelope2_put_EnvelopeVersion(This,envelopeVersionUri)	\
    (This)->lpVtbl -> put_EnvelopeVersion(This,envelopeVersionUri)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope2_get_EnvelopeVersion_Proxy( 
    ISOAPEnvelope2 * This,
    /* [retval][out] */ BSTR *envelopeVersionUri);


void __RPC_STUB ISOAPEnvelope2_get_EnvelopeVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE ISOAPEnvelope2_put_EnvelopeVersion_Proxy( 
    ISOAPEnvelope2 * This,
    /* [in] */ BSTR envelopeVersionUri);


void __RPC_STUB ISOAPEnvelope2_put_EnvelopeVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPEnvelope2_INTERFACE_DEFINED__ */


#ifndef __ISerializerContext2_INTERFACE_DEFINED__
#define __ISerializerContext2_INTERFACE_DEFINED__

/* interface ISerializerContext2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISerializerContext2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A8E7E4D-59B3-4f55-B587-1EA048AA9C65")
    ISerializerContext2 : public ISerializerContext
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnvelopeVersion( 
            /* [retval][out] */ BSTR *envelopeVersionUri) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerializerContext2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerializerContext2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerializerContext2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerializerContext2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Namespaces )( 
            ISerializerContext2 * This,
            /* [retval][out] */ ISOAPNamespaces **ns);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerializerFactory )( 
            ISerializerContext2 * This,
            /* [retval][out] */ ISerializerFactory **sf);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnvelopeVersion )( 
            ISerializerContext2 * This,
            /* [retval][out] */ BSTR *envelopeVersionUri);
        
        END_INTERFACE
    } ISerializerContext2Vtbl;

    interface ISerializerContext2
    {
        CONST_VTBL struct ISerializerContext2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerializerContext2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerializerContext2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerializerContext2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerializerContext2_get_Namespaces(This,ns)	\
    (This)->lpVtbl -> get_Namespaces(This,ns)

#define ISerializerContext2_get_SerializerFactory(This,sf)	\
    (This)->lpVtbl -> get_SerializerFactory(This,sf)


#define ISerializerContext2_get_EnvelopeVersion(This,envelopeVersionUri)	\
    (This)->lpVtbl -> get_EnvelopeVersion(This,envelopeVersionUri)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISerializerContext2_get_EnvelopeVersion_Proxy( 
    ISerializerContext2 * This,
    /* [retval][out] */ BSTR *envelopeVersionUri);


void __RPC_STUB ISerializerContext2_get_EnvelopeVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerializerContext2_INTERFACE_DEFINED__ */


#ifndef __IClassFactoryVersion_INTERFACE_DEFINED__
#define __IClassFactoryVersion_INTERFACE_DEFINED__

/* interface IClassFactoryVersion */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IClassFactoryVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AD41BB8-76A9-4ee0-9463-5BF578BA78DC")
    IClassFactoryVersion : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE setVersion( 
            const wchar_t *envURI) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IClassFactoryVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IClassFactoryVersion * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IClassFactoryVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IClassFactoryVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *setVersion )( 
            IClassFactoryVersion * This,
            const wchar_t *envURI);
        
        END_INTERFACE
    } IClassFactoryVersionVtbl;

    interface IClassFactoryVersion
    {
        CONST_VTBL struct IClassFactoryVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClassFactoryVersion_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IClassFactoryVersion_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IClassFactoryVersion_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IClassFactoryVersion_setVersion(This,envURI)	\
    (This)->lpVtbl -> setVersion(This,envURI)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IClassFactoryVersion_setVersion_Proxy( 
    IClassFactoryVersion * This,
    const wchar_t *envURI);


void __RPC_STUB IClassFactoryVersion_setVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IClassFactoryVersion_INTERFACE_DEFINED__ */


#ifndef __ISOAPTransport2_INTERFACE_DEFINED__
#define __ISOAPTransport2_INTERFACE_DEFINED__

/* interface ISOAPTransport2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISOAPTransport2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DDD12DF-404B-45dd-B982-251A30D29079")
    ISOAPTransport2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT env) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Receive( 
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ IUnknown **responseStream) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPTransport2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPTransport2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPTransport2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPTransport2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISOAPTransport2 * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT env);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISOAPTransport2 * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ IUnknown **responseStream);
        
        END_INTERFACE
    } ISOAPTransport2Vtbl;

    interface ISOAPTransport2
    {
        CONST_VTBL struct ISOAPTransport2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPTransport2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISOAPTransport2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISOAPTransport2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISOAPTransport2_Send(This,endpoint,env)	\
    (This)->lpVtbl -> Send(This,endpoint,env)

#define ISOAPTransport2_Receive(This,characterEncoding,responseStream)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,responseStream)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPTransport2_Send_Proxy( 
    ISOAPTransport2 * This,
    /* [in] */ BSTR endpoint,
    /* [in] */ VARIANT env);


void __RPC_STUB ISOAPTransport2_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISOAPTransport2_Receive_Proxy( 
    ISOAPTransport2 * This,
    /* [out][in] */ BSTR *characterEncoding,
    /* [retval][out] */ IUnknown **responseStream);


void __RPC_STUB ISOAPTransport2_Receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISOAPTransport2_INTERFACE_DEFINED__ */


#ifndef __IHTTPTransportDisp_INTERFACE_DEFINED__
#define __IHTTPTransportDisp_INTERFACE_DEFINED__

/* interface IHTTPTransportDisp */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IHTTPTransportDisp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F63C057A-DB72-4a35-B5C3-2FCFCEA5BB8B")
    IHTTPTransportDisp : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT Envelope) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Receive( 
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SOAPAction( 
            /* [retval][out] */ BSTR *soapAction) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SOAPAction( 
            /* [in] */ BSTR soapAction) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long timeOut) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ long *timeOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProxy( 
            /* [in] */ BSTR ProxyServer,
            /* [in] */ short ProxyPort) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NoProxy( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Authentication( 
            /* [in] */ BSTR username,
            /* [in] */ BSTR password) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProxyAuthentication( 
            /* [in] */ BSTR username,
            /* [in] */ BSTR password) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCode( 
            /* [retval][out] */ short *statusCode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxRedirectDepth( 
            /* [retval][out] */ short *depth) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxRedirectDepth( 
            /* [in] */ short depth) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Option( 
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Option( 
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTTPTransportDispVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHTTPTransportDisp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHTTPTransportDisp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHTTPTransportDisp * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR endpoint,
            /* [in] */ VARIANT Envelope);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IHTTPTransportDisp * This,
            /* [out][in] */ BSTR *characterEncoding,
            /* [retval][out] */ SAFEARRAY * *Envelope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SOAPAction )( 
            IHTTPTransportDisp * This,
            /* [retval][out] */ BSTR *soapAction);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SOAPAction )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR soapAction);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IHTTPTransportDisp * This,
            /* [in] */ long timeOut);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IHTTPTransportDisp * This,
            /* [retval][out] */ long *timeOut);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProxy )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR ProxyServer,
            /* [in] */ short ProxyPort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NoProxy )( 
            IHTTPTransportDisp * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Authentication )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProxyAuthentication )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCode )( 
            IHTTPTransportDisp * This,
            /* [retval][out] */ short *statusCode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxRedirectDepth )( 
            IHTTPTransportDisp * This,
            /* [retval][out] */ short *depth);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxRedirectDepth )( 
            IHTTPTransportDisp * This,
            /* [in] */ short depth);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Option )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Option )( 
            IHTTPTransportDisp * This,
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT val);
        
        END_INTERFACE
    } IHTTPTransportDispVtbl;

    interface IHTTPTransportDisp
    {
        CONST_VTBL struct IHTTPTransportDispVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTTPTransportDisp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTTPTransportDisp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTTPTransportDisp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTTPTransportDisp_Send(This,endpoint,Envelope)	\
    (This)->lpVtbl -> Send(This,endpoint,Envelope)

#define IHTTPTransportDisp_Receive(This,characterEncoding,Envelope)	\
    (This)->lpVtbl -> Receive(This,characterEncoding,Envelope)

#define IHTTPTransportDisp_get_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> get_SOAPAction(This,soapAction)

#define IHTTPTransportDisp_put_SOAPAction(This,soapAction)	\
    (This)->lpVtbl -> put_SOAPAction(This,soapAction)

#define IHTTPTransportDisp_put_Timeout(This,timeOut)	\
    (This)->lpVtbl -> put_Timeout(This,timeOut)

#define IHTTPTransportDisp_get_Timeout(This,timeOut)	\
    (This)->lpVtbl -> get_Timeout(This,timeOut)

#define IHTTPTransportDisp_SetProxy(This,ProxyServer,ProxyPort)	\
    (This)->lpVtbl -> SetProxy(This,ProxyServer,ProxyPort)

#define IHTTPTransportDisp_NoProxy(This)	\
    (This)->lpVtbl -> NoProxy(This)

#define IHTTPTransportDisp_Authentication(This,username,password)	\
    (This)->lpVtbl -> Authentication(This,username,password)

#define IHTTPTransportDisp_ProxyAuthentication(This,username,password)	\
    (This)->lpVtbl -> ProxyAuthentication(This,username,password)

#define IHTTPTransportDisp_get_StatusCode(This,statusCode)	\
    (This)->lpVtbl -> get_StatusCode(This,statusCode)

#define IHTTPTransportDisp_get_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> get_MaxRedirectDepth(This,depth)

#define IHTTPTransportDisp_put_MaxRedirectDepth(This,depth)	\
    (This)->lpVtbl -> put_MaxRedirectDepth(This,depth)

#define IHTTPTransportDisp_get_Option(This,optionName,pVal)	\
    (This)->lpVtbl -> get_Option(This,optionName,pVal)

#define IHTTPTransportDisp_put_Option(This,optionName,val)	\
    (This)->lpVtbl -> put_Option(This,optionName,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_Send_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR endpoint,
    /* [in] */ VARIANT Envelope);


void __RPC_STUB IHTTPTransportDisp_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_Receive_Proxy( 
    IHTTPTransportDisp * This,
    /* [out][in] */ BSTR *characterEncoding,
    /* [retval][out] */ SAFEARRAY * *Envelope);


void __RPC_STUB IHTTPTransportDisp_Receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_get_SOAPAction_Proxy( 
    IHTTPTransportDisp * This,
    /* [retval][out] */ BSTR *soapAction);


void __RPC_STUB IHTTPTransportDisp_get_SOAPAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_put_SOAPAction_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR soapAction);


void __RPC_STUB IHTTPTransportDisp_put_SOAPAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_put_Timeout_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ long timeOut);


void __RPC_STUB IHTTPTransportDisp_put_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_get_Timeout_Proxy( 
    IHTTPTransportDisp * This,
    /* [retval][out] */ long *timeOut);


void __RPC_STUB IHTTPTransportDisp_get_Timeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_SetProxy_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR ProxyServer,
    /* [in] */ short ProxyPort);


void __RPC_STUB IHTTPTransportDisp_SetProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_NoProxy_Proxy( 
    IHTTPTransportDisp * This);


void __RPC_STUB IHTTPTransportDisp_NoProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_Authentication_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR username,
    /* [in] */ BSTR password);


void __RPC_STUB IHTTPTransportDisp_Authentication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_ProxyAuthentication_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR username,
    /* [in] */ BSTR password);


void __RPC_STUB IHTTPTransportDisp_ProxyAuthentication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_get_StatusCode_Proxy( 
    IHTTPTransportDisp * This,
    /* [retval][out] */ short *statusCode);


void __RPC_STUB IHTTPTransportDisp_get_StatusCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_get_MaxRedirectDepth_Proxy( 
    IHTTPTransportDisp * This,
    /* [retval][out] */ short *depth);


void __RPC_STUB IHTTPTransportDisp_get_MaxRedirectDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_put_MaxRedirectDepth_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ short depth);


void __RPC_STUB IHTTPTransportDisp_put_MaxRedirectDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_get_Option_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR optionName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB IHTTPTransportDisp_get_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IHTTPTransportDisp_put_Option_Proxy( 
    IHTTPTransportDisp * This,
    /* [in] */ BSTR optionName,
    /* [in] */ VARIANT val);


void __RPC_STUB IHTTPTransportDisp_put_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTTPTransportDisp_INTERFACE_DEFINED__ */


#ifndef __IXsdLong_INTERFACE_DEFINED__
#define __IXsdLong_INTERFACE_DEFINED__

/* interface IXsdLong */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IXsdLong;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81E713C6-BC0B-4853-82BA-27D341CA358A")
    IXsdLong : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HiDWord( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HiDWord( 
            /* [in] */ long val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LoDWord( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LoDWord( 
            /* [in] */ long val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ ISerializerFactoryConfig *cfgFactory) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXsdLongVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXsdLong * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXsdLong * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXsdLong * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IXsdLong * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IXsdLong * This,
            /* [in] */ BSTR val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HiDWord )( 
            IXsdLong * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HiDWord )( 
            IXsdLong * This,
            /* [in] */ long val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoDWord )( 
            IXsdLong * This,
            /* [retval][out] */ long *pVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoDWord )( 
            IXsdLong * This,
            /* [in] */ long val);
        
        HRESULT ( STDMETHODCALLTYPE *Register )( 
            IXsdLong * This,
            /* [in] */ ISerializerFactoryConfig *cfgFactory);
        
        END_INTERFACE
    } IXsdLongVtbl;

    interface IXsdLong
    {
        CONST_VTBL struct IXsdLongVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXsdLong_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXsdLong_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXsdLong_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXsdLong_get_String(This,pVal)	\
    (This)->lpVtbl -> get_String(This,pVal)

#define IXsdLong_put_String(This,val)	\
    (This)->lpVtbl -> put_String(This,val)

#define IXsdLong_get_HiDWord(This,pVal)	\
    (This)->lpVtbl -> get_HiDWord(This,pVal)

#define IXsdLong_put_HiDWord(This,val)	\
    (This)->lpVtbl -> put_HiDWord(This,val)

#define IXsdLong_get_LoDWord(This,pVal)	\
    (This)->lpVtbl -> get_LoDWord(This,pVal)

#define IXsdLong_put_LoDWord(This,val)	\
    (This)->lpVtbl -> put_LoDWord(This,val)

#define IXsdLong_Register(This,cfgFactory)	\
    (This)->lpVtbl -> Register(This,cfgFactory)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE IXsdLong_get_String_Proxy( 
    IXsdLong * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IXsdLong_get_String_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IXsdLong_put_String_Proxy( 
    IXsdLong * This,
    /* [in] */ BSTR val);


void __RPC_STUB IXsdLong_put_String_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IXsdLong_get_HiDWord_Proxy( 
    IXsdLong * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IXsdLong_get_HiDWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IXsdLong_put_HiDWord_Proxy( 
    IXsdLong * This,
    /* [in] */ long val);


void __RPC_STUB IXsdLong_put_HiDWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IXsdLong_get_LoDWord_Proxy( 
    IXsdLong * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IXsdLong_get_LoDWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IXsdLong_put_LoDWord_Proxy( 
    IXsdLong * This,
    /* [in] */ long val);


void __RPC_STUB IXsdLong_put_LoDWord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXsdLong_Register_Proxy( 
    IXsdLong * This,
    /* [in] */ ISerializerFactoryConfig *cfgFactory);


void __RPC_STUB IXsdLong_Register_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXsdLong_INTERFACE_DEFINED__ */


#ifndef __INoMultirefSerializer_INTERFACE_DEFINED__
#define __INoMultirefSerializer_INTERFACE_DEFINED__

/* interface INoMultirefSerializer */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_INoMultirefSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("679E93E6-4DCE-44d2-8413-523737980E4E")
    INoMultirefSerializer : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct INoMultirefSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INoMultirefSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INoMultirefSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INoMultirefSerializer * This);
        
        END_INTERFACE
    } INoMultirefSerializerVtbl;

    interface INoMultirefSerializer
    {
        CONST_VTBL struct INoMultirefSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INoMultirefSerializer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INoMultirefSerializer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INoMultirefSerializer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INoMultirefSerializer_INTERFACE_DEFINED__ */



#ifndef __PocketSOAP_LIBRARY_DEFINED__
#define __PocketSOAP_LIBRARY_DEFINED__

/* library PocketSOAP */
/* [helpstring][version][uuid] */ 

typedef 
enum sfConfigOptions
    {	sfcNormal_11	= 0,
	sfcScripting_11	= 1,
	sfcNormal_12	= 2,
	sfcScripting_12	= 3
    } 	sfConfigOptions;

typedef /* [v1_enum][public] */ 
enum pocketSOAPErrors
    {	E_SOAPFAULT	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4201),
	E_NOFAULTCODE	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4202),
	E_NOFAULTSTRING	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4203),
	E_DONT_UNDERSTAND	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4204),
	E_INVALID_ARRAY_POS	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4210),
	E_ARRAY_COORD_FORMAT	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4211),
	E_NO_DESERIALIZER	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4220),
	E_NO_SERIALIZER	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4230),
	E_ATTR_SIMPLE_ONLY	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4231),
	E_DESER_NO_SIMPLE	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4232),
	E_PARSE_ERROR	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4240),
	E_UNKNOWN_PRIMARYSCHEMA	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4250),
	E_INVALID_LEX_REP	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4260)
    } 	;

typedef /* [v1_enum][public] */ 
enum pocketSOAPHttpErrors
    {	E_SSL_FAILURE	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4301),
	E_DEFLATE_FAILURE	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4302),
	E_INFLATE_FAILURE	= ( HRESULT  )(( unsigned long  )1 << 31 | ( unsigned long  )4 << 16 | ( unsigned long  )0x4303)
    } 	;







EXTERN_C const IID LIBID_PocketSOAP;

EXTERN_C const CLSID CLSID_CoEnvelope;

#ifdef __cplusplus

class DECLSPEC_UUID("E2E0FB24-E58F-458f-84E0-6E09D2D51511")
CoEnvelope;
#endif

EXTERN_C const CLSID CLSID_HTTPTransport;

#ifdef __cplusplus

class DECLSPEC_UUID("D76BA06F-ABF3-4c1f-BDC9-1848D4E3CF2B")
HTTPTransport;
#endif

EXTERN_C const CLSID CLSID_CoSoapNode;

#ifdef __cplusplus

class DECLSPEC_UUID("FDC424A3-5917-4DC9-9437-445E057C653B")
CoSoapNode;
#endif

EXTERN_C const CLSID CLSID_CoSerializerFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("31D91001-A499-4B2D-81C3-01D6C1D807CC")
CoSerializerFactory;
#endif

EXTERN_C const CLSID CLSID_CoSerializerSimple;

#ifdef __cplusplus

class DECLSPEC_UUID("B592E789-D9D1-4df7-82E8-8CE1B7C2EB1D")
CoSerializerSimple;
#endif

EXTERN_C const CLSID CLSID_CoSerializerArray;

#ifdef __cplusplus

class DECLSPEC_UUID("B222F5CC-03BF-48b9-8DDE-ABD3CD2F3746")
CoSerializerArray;
#endif

EXTERN_C const CLSID CLSID_CoDeserializerArray;

#ifdef __cplusplus

class DECLSPEC_UUID("73232559-F147-4227-8AB3-A9829F8EFA4B")
CoDeserializerArray;
#endif

EXTERN_C const CLSID CLSID_CoSerializerNode;

#ifdef __cplusplus

class DECLSPEC_UUID("B37A49AA-5E39-46DE-8821-0457B8E04915")
CoSerializerNode;
#endif

EXTERN_C const CLSID CLSID_CoSerializerB64;

#ifdef __cplusplus

class DECLSPEC_UUID("C72F722F-3507-498a-BD07-1859E4F34F44")
CoSerializerB64;
#endif

EXTERN_C const CLSID CLSID_CoSerializerDate;

#ifdef __cplusplus

class DECLSPEC_UUID("E30300FB-873B-4B3F-90B0-3124E105534F")
CoSerializerDate;
#endif

EXTERN_C const CLSID CLSID_CoSerializerPB;

#ifdef __cplusplus

class DECLSPEC_UUID("8D6E70D8-88B1-4946-BD1F-1B40E08400A9")
CoSerializerPB;
#endif

EXTERN_C const CLSID CLSID_CoSerializerBoolean;

#ifdef __cplusplus

class DECLSPEC_UUID("03A14C6C-E848-4f53-9C5B-6C18E4E4054E")
CoSerializerBoolean;
#endif

EXTERN_C const CLSID CLSID_RawTcpTransport;

#ifdef __cplusplus

class DECLSPEC_UUID("2612DD54-2419-4b72-97A7-998671467174")
RawTcpTransport;
#endif

EXTERN_C const CLSID CLSID_CoSerializerNull;

#ifdef __cplusplus

class DECLSPEC_UUID("7DEA5180-9CC9-4415-A7FD-B2B28934EA34")
CoSerializerNull;
#endif

EXTERN_C const CLSID CLSID_CoSerializerHexBin;

#ifdef __cplusplus

class DECLSPEC_UUID("18FB571B-A3EA-49EF-AB56-755A1D946E75")
CoSerializerHexBin;
#endif

EXTERN_C const CLSID CLSID_CoQName;

#ifdef __cplusplus

class DECLSPEC_UUID("5A2BDD61-1F23-4D26-9755-53483E53E01B")
CoQName;
#endif

EXTERN_C const CLSID CLSID_CoSerializerQName;

#ifdef __cplusplus

class DECLSPEC_UUID("AADA0D4D-C243-46fa-919E-1467C268EB63")
CoSerializerQName;
#endif

EXTERN_C const CLSID CLSID_CoInterfaceFinder;

#ifdef __cplusplus

class DECLSPEC_UUID("150616B2-DF3C-4683-8DE2-D6A414EC5AF2")
CoInterfaceFinder;
#endif

EXTERN_C const CLSID CLSID_CoSerializerArray12;

#ifdef __cplusplus

class DECLSPEC_UUID("E47F015A-A65F-4d72-A047-AABED585817C")
CoSerializerArray12;
#endif

EXTERN_C const CLSID CLSID_CoDeserializerArray12;

#ifdef __cplusplus

class DECLSPEC_UUID("0F888E86-086B-4402-9B79-EBB8FA9EA46F")
CoDeserializerArray12;
#endif

EXTERN_C const CLSID CLSID_CoEnvelope12;

#ifdef __cplusplus

class DECLSPEC_UUID("F8AF8269-905E-4dbe-B28C-B30DA00432BE")
CoEnvelope12;
#endif

EXTERN_C const CLSID CLSID_CoXsdLong;

#ifdef __cplusplus

class DECLSPEC_UUID("12E55486-6263-45DB-BD95-79646E37BB9E")
CoXsdLong;
#endif

EXTERN_C const CLSID CLSID_CoDeserializerXsdLong;

#ifdef __cplusplus

class DECLSPEC_UUID("CD6E6523-3143-4f86-9168-B4D1C7A27DA9")
CoDeserializerXsdLong;
#endif
#endif /* __PocketSOAP_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


