

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* at Wed Oct 10 23:09:17 2007
 */
/* Compiler settings for vc90.idl:
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

#ifndef __vc90_h__
#define __vc90_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEvents_FWD_DEFINED__
#define __IEvents_FWD_DEFINED__
typedef interface IEvents IEvents;
#endif 	/* __IEvents_FWD_DEFINED__ */


#ifndef __IEventSource_FWD_DEFINED__
#define __IEventSource_FWD_DEFINED__
typedef interface IEventSource IEventSource;
#endif 	/* __IEventSource_FWD_DEFINED__ */


#ifndef ____Impl_IEvents_FWD_DEFINED__
#define ____Impl_IEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class __Impl_IEvents __Impl_IEvents;
#else
typedef struct __Impl_IEvents __Impl_IEvents;
#endif /* __cplusplus */

#endif 	/* ____Impl_IEvents_FWD_DEFINED__ */


#ifndef __CComSource_FWD_DEFINED__
#define __CComSource_FWD_DEFINED__

#ifdef __cplusplus
typedef class CComSource CComSource;
#else
typedef struct CComSource CComSource;
#endif /* __cplusplus */

#endif 	/* __CComSource_FWD_DEFINED__ */


/* header files for imported files */
#include "docobj.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IEvents_INTERFACE_DEFINED__
#define __IEvents_INTERFACE_DEFINED__

/* interface IEvents */
/* [object][uuid][dual] */ 


EXTERN_C const IID IID_IEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000000-0000-0000-0000-000000000001")
    IEvents : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MyEvent( 
            /* [in] */ int value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MyEvent )( 
            IEvents * This,
            /* [in] */ int value);
        
        END_INTERFACE
    } IEventsVtbl;

    interface IEvents
    {
        CONST_VTBL struct IEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEvents_MyEvent(This,value)	\
    ( (This)->lpVtbl -> MyEvent(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEvents_INTERFACE_DEFINED__ */


#ifndef __IEventSource_INTERFACE_DEFINED__
#define __IEventSource_INTERFACE_DEFINED__

/* interface IEventSource */
/* [object][uuid][dual] */ 


EXTERN_C const IID IID_IEventSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000000-0000-0000-0000-000000000002")
    IEventSource : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FireEvent( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEventSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventSource * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventSource * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventSource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventSource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventSource * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FireEvent )( 
            IEventSource * This);
        
        END_INTERFACE
    } IEventSourceVtbl;

    interface IEventSource
    {
        CONST_VTBL struct IEventSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventSource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventSource_FireEvent(This)	\
    ( (This)->lpVtbl -> FireEvent(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventSource_INTERFACE_DEFINED__ */



#ifndef __EventReceiver_LIBRARY_DEFINED__
#define __EventReceiver_LIBRARY_DEFINED__

/* library EventReceiver */
/* [uuid][version] */ 


EXTERN_C const IID LIBID_EventReceiver;

EXTERN_C const CLSID CLSID___Impl_IEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("5F05EAEA-6B73-3EB0-9E54-97ADC8C97028")
__Impl_IEvents;
#endif

EXTERN_C const CLSID CLSID_CComSource;

#ifdef __cplusplus

class DECLSPEC_UUID("530DF3AD-6936-3214-A83B-27B63C7997C4")
CComSource;
#endif
#endif /* __EventReceiver_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


