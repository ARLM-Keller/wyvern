

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISOAPTransport,0x95B904E8,0x8E1A,0x40a3,0xA2,0x29,0xE5,0xE8,0x60,0x6D,0x6D,0x3F);


MIDL_DEFINE_GUID(IID, IID_IHTTPTransport,0xC2F39358,0x2B60,0x4fda,0xB6,0xFC,0xE9,0x5D,0xCC,0x4E,0x9C,0x9B);


MIDL_DEFINE_GUID(IID, IID_IHTTPTransportAdv,0x326EBA3F,0x7120,0x4528,0xAF,0x62,0x03,0xEA,0xBD,0x4E,0x00,0xAA);


MIDL_DEFINE_GUID(IID, IID_ISOAPNamespaces,0x2B7B7EEE,0x1082,0x4b51,0x85,0x19,0xE7,0x18,0x5B,0xE7,0x9F,0xF2);


MIDL_DEFINE_GUID(IID, IID_ISOAPEnvelope,0x8B2091B1,0xDCF9,0x44a7,0xA5,0x0B,0xF0,0x29,0x71,0xA0,0x1B,0xF1);


MIDL_DEFINE_GUID(IID, IID_ISOAPNode,0x3D9E9EC5,0x16DB,0x48f3,0xA6,0x0B,0x50,0xF7,0x6F,0x45,0x78,0x5D);


MIDL_DEFINE_GUID(IID, IID_ISOAPNodes,0x059F284A,0xC198,0x4c6e,0x9E,0x3B,0x2F,0x45,0xAC,0xBE,0x7F,0x12);


MIDL_DEFINE_GUID(IID, IID_ISerializerOutput,0x12EC9252,0x557C,0x4869,0x9A,0x1D,0x4A,0x7A,0xAA,0x41,0x56,0x2B);


MIDL_DEFINE_GUID(IID, IID_ISerializerContext,0xC5997F73,0x9C61,0x4158,0xB9,0x3A,0xF1,0x89,0x5D,0x4C,0xEE,0xE7);


MIDL_DEFINE_GUID(IID, IID_ITypesInit,0x04066DA1,0x3767,0x4388,0xBC,0x1B,0x70,0xB5,0xC6,0x71,0x23,0xE1);


MIDL_DEFINE_GUID(IID, IID_ISoapSerializer,0x6EE30C35,0xDBDB,0x44e4,0x85,0x2A,0x6F,0x06,0x36,0xF7,0xD8,0x27);


MIDL_DEFINE_GUID(IID, IID_ISoapDeSerializerAttributes,0xCDED1874,0x8B34,0x4026,0x87,0x74,0x44,0xA7,0xDC,0xB4,0x16,0x24);


MIDL_DEFINE_GUID(IID, IID_ISoapDeSerializer,0xEE9D8ADF,0x1996,0x4ffd,0xBE,0x39,0xDF,0x9E,0x65,0x78,0x3A,0xB1);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactory,0xFDA0F674,0xDF3F,0x496b,0xB3,0x14,0x3E,0x8D,0x87,0xC2,0x60,0xFA);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryConfig,0xDDE93C43,0x9D84,0x4474,0xA3,0x07,0xE3,0x1A,0x4F,0x53,0x93,0xF7);


MIDL_DEFINE_GUID(IID, IID_ISwATransport,0x55DA1181,0x49F5,0x429e,0xB7,0x0D,0xAD,0xA9,0xFF,0x7C,0xEC,0x98);


MIDL_DEFINE_GUID(IID, IID_ISOAPNode2,0x278B4636,0x7600,0x494f,0xB9,0xF9,0xFD,0x3C,0x30,0x62,0xCA,0x84);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryPool,0x00F1C051,0xC42C,0x4ebc,0xA0,0xD6,0xFE,0x26,0x98,0x0B,0xC6,0xB0);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryConfig2,0xD82EB643,0x14C9,0x48f4,0xA1,0x3B,0x99,0x5B,0x6F,0x8C,0xB0,0x6D);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactory2,0x52021ABB,0x8796,0x4394,0x8B,0xF7,0x91,0xB8,0x37,0xA9,0xD7,0x9D);


MIDL_DEFINE_GUID(IID, IID_ISOAPTransportTimeout,0x038D5938,0x2E2E,0x4f88,0x94,0x76,0x8F,0xFB,0x04,0xAE,0x75,0x01);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryPool2,0xF09C7B38,0x7DC3,0x4a3e,0xB6,0xBC,0xEF,0x09,0xFE,0x98,0xB1,0xCF);


MIDL_DEFINE_GUID(IID, IID_IXmlQName,0xA0F644A2,0x9A8B,0x4317,0xA3,0x53,0x6E,0xF9,0xC4,0x2F,0x58,0x40);


MIDL_DEFINE_GUID(IID, IID_ISOAPNode3,0xCCFC68CD,0xDCD8,0x4369,0xA0,0xAB,0x2F,0xCC,0x80,0x5E,0x3B,0xB0);


MIDL_DEFINE_GUID(IID, IID_IInterfaceFinder,0x1999232F,0xD5BA,0x428B,0x82,0xC2,0xA2,0xD6,0xDE,0x9B,0x67,0x78);


MIDL_DEFINE_GUID(IID, IID_ISimpleSoapSerializer,0x5B62D729,0x6CEC,0x49b7,0x9B,0xDD,0x84,0x4D,0xCE,0x42,0xE8,0x42);


MIDL_DEFINE_GUID(IID, IID_ISimpleSoapDeSerializer,0xF9799A1A,0xF2F7,0x4dd6,0xAA,0xA2,0xC0,0xCA,0x59,0x7B,0x64,0x12);


MIDL_DEFINE_GUID(IID, IID_ISerializerOutput2,0x8DBA86E6,0x08D1,0x4510,0x98,0x9A,0x76,0xA0,0x59,0x6E,0x54,0x88);


MIDL_DEFINE_GUID(IID, IID_ISoapDeSerializerAttributes2,0x2F26011E,0x67AC,0x4bc4,0x81,0x87,0x43,0x1F,0xD8,0xE6,0x1B,0x27);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryEx,0xB32E88A3,0x9C49,0x4a35,0x87,0xEA,0x9D,0x81,0xA3,0xC0,0xF1,0xE1);


MIDL_DEFINE_GUID(IID, IID_IStreamReader,0x114BD3E3,0x983B,0x4509,0x8D,0xD7,0x42,0xDC,0x36,0xF4,0xD2,0x62);


MIDL_DEFINE_GUID(IID, IID_IHTTPTransportAdv2,0xD74864A2,0x6351,0x445c,0xAC,0xD0,0x2D,0xE2,0x50,0x8C,0x8E,0x8C);


MIDL_DEFINE_GUID(IID, IID_ISoapDeSerializerDefaultHandler,0xA27B2876,0x2E26,0x449e,0xA5,0xB8,0x1D,0x08,0x6A,0x71,0x07,0x87);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryConfig3,0xCC263B9C,0x4C97,0x4539,0x8D,0x9D,0x50,0xEC,0x5C,0x7F,0xAA,0x17);


MIDL_DEFINE_GUID(IID, IID_ISerializerFactoryHeaders,0xE57AC401,0xCC12,0x45e0,0xB5,0xAC,0x08,0x5E,0xBE,0x1D,0x2C,0x54);


MIDL_DEFINE_GUID(IID, IID_ISOAPNode12,0x7C0183C2,0x8598,0x4cdf,0x92,0x3F,0x40,0xA5,0x57,0x6F,0x39,0xC2);


MIDL_DEFINE_GUID(IID, IID_ISOAPNodeDisp,0xC6118D9E,0x9F46,0x400e,0xA0,0x9B,0x7D,0x9F,0x01,0xC6,0xA5,0x93);


MIDL_DEFINE_GUID(IID, IID_ISOAPEnvelope2,0x6DBEBD71,0xF91F,0x4924,0xAB,0x0E,0xDB,0x37,0xDD,0x38,0xDA,0x76);


MIDL_DEFINE_GUID(IID, IID_ISerializerContext2,0x9A8E7E4D,0x59B3,0x4f55,0xB5,0x87,0x1E,0xA0,0x48,0xAA,0x9C,0x65);


MIDL_DEFINE_GUID(IID, IID_IClassFactoryVersion,0x9AD41BB8,0x76A9,0x4ee0,0x94,0x63,0x5B,0xF5,0x78,0xBA,0x78,0xDC);


MIDL_DEFINE_GUID(IID, IID_ISOAPTransport2,0x9DDD12DF,0x404B,0x45dd,0xB9,0x82,0x25,0x1A,0x30,0xD2,0x90,0x79);


MIDL_DEFINE_GUID(IID, IID_IHTTPTransportDisp,0xF63C057A,0xDB72,0x4a35,0xB5,0xC3,0x2F,0xCF,0xCE,0xA5,0xBB,0x8B);


MIDL_DEFINE_GUID(IID, IID_IXsdLong,0x81E713C6,0xBC0B,0x4853,0x82,0xBA,0x27,0xD3,0x41,0xCA,0x35,0x8A);


MIDL_DEFINE_GUID(IID, IID_INoMultirefSerializer,0x679E93E6,0x4DCE,0x44d2,0x84,0x13,0x52,0x37,0x37,0x98,0x0E,0x4E);


MIDL_DEFINE_GUID(IID, LIBID_PocketSOAP,0x1259E267,0x74E3,0x4d78,0xB0,0x8E,0xDB,0x9F,0x9F,0x78,0x5E,0x04);


MIDL_DEFINE_GUID(CLSID, CLSID_CoEnvelope,0xE2E0FB24,0xE58F,0x458f,0x84,0xE0,0x6E,0x09,0xD2,0xD5,0x15,0x11);


MIDL_DEFINE_GUID(CLSID, CLSID_HTTPTransport,0xD76BA06F,0xABF3,0x4c1f,0xBD,0xC9,0x18,0x48,0xD4,0xE3,0xCF,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSoapNode,0xFDC424A3,0x5917,0x4DC9,0x94,0x37,0x44,0x5E,0x05,0x7C,0x65,0x3B);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerFactory,0x31D91001,0xA499,0x4B2D,0x81,0xC3,0x01,0xD6,0xC1,0xD8,0x07,0xCC);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerSimple,0xB592E789,0xD9D1,0x4df7,0x82,0xE8,0x8C,0xE1,0xB7,0xC2,0xEB,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerArray,0xB222F5CC,0x03BF,0x48b9,0x8D,0xDE,0xAB,0xD3,0xCD,0x2F,0x37,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CoDeserializerArray,0x73232559,0xF147,0x4227,0x8A,0xB3,0xA9,0x82,0x9F,0x8E,0xFA,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerNode,0xB37A49AA,0x5E39,0x46DE,0x88,0x21,0x04,0x57,0xB8,0xE0,0x49,0x15);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerB64,0xC72F722F,0x3507,0x498a,0xBD,0x07,0x18,0x59,0xE4,0xF3,0x4F,0x44);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerDate,0xE30300FB,0x873B,0x4B3F,0x90,0xB0,0x31,0x24,0xE1,0x05,0x53,0x4F);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerPB,0x8D6E70D8,0x88B1,0x4946,0xBD,0x1F,0x1B,0x40,0xE0,0x84,0x00,0xA9);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerBoolean,0x03A14C6C,0xE848,0x4f53,0x9C,0x5B,0x6C,0x18,0xE4,0xE4,0x05,0x4E);


MIDL_DEFINE_GUID(CLSID, CLSID_RawTcpTransport,0x2612DD54,0x2419,0x4b72,0x97,0xA7,0x99,0x86,0x71,0x46,0x71,0x74);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerNull,0x7DEA5180,0x9CC9,0x4415,0xA7,0xFD,0xB2,0xB2,0x89,0x34,0xEA,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerHexBin,0x18FB571B,0xA3EA,0x49EF,0xAB,0x56,0x75,0x5A,0x1D,0x94,0x6E,0x75);


MIDL_DEFINE_GUID(CLSID, CLSID_CoQName,0x5A2BDD61,0x1F23,0x4D26,0x97,0x55,0x53,0x48,0x3E,0x53,0xE0,0x1B);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerQName,0xAADA0D4D,0xC243,0x46fa,0x91,0x9E,0x14,0x67,0xC2,0x68,0xEB,0x63);


MIDL_DEFINE_GUID(CLSID, CLSID_CoInterfaceFinder,0x150616B2,0xDF3C,0x4683,0x8D,0xE2,0xD6,0xA4,0x14,0xEC,0x5A,0xF2);


MIDL_DEFINE_GUID(CLSID, CLSID_CoSerializerArray12,0xE47F015A,0xA65F,0x4d72,0xA0,0x47,0xAA,0xBE,0xD5,0x85,0x81,0x7C);


MIDL_DEFINE_GUID(CLSID, CLSID_CoDeserializerArray12,0x0F888E86,0x086B,0x4402,0x9B,0x79,0xEB,0xB8,0xFA,0x9E,0xA4,0x6F);


MIDL_DEFINE_GUID(CLSID, CLSID_CoEnvelope12,0xF8AF8269,0x905E,0x4dbe,0xB2,0x8C,0xB3,0x0D,0xA0,0x04,0x32,0xBE);


MIDL_DEFINE_GUID(CLSID, CLSID_CoXsdLong,0x12E55486,0x6263,0x45DB,0xBD,0x95,0x79,0x64,0x6E,0x37,0xBB,0x9E);


MIDL_DEFINE_GUID(CLSID, CLSID_CoDeserializerXsdLong,0xCD6E6523,0x3143,0x4f86,0x91,0x68,0xB4,0xD1,0xC7,0xA2,0x7D,0xA9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



