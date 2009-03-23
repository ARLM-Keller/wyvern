// evh_client.cpp
// compile with: /link /OPT:NOREF
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
#include <stdio.h>
#include "evh_server.h"

[ module(name="EventReceiver") ];

[ event_receiver(com) ]
class CComReceiver {
public:
   HRESULT MyHandler1(int nValue) {
      printf("MyHandler1 was called with value %d.\n", nValue);
      return S_OK;
   }

   HRESULT MyHandler2(int nValue) {
      printf("MyHandler2 was called with value %d.\n", nValue);
      return S_OK;
   }

   void HookEvent(IEventSource* pSource) {
      __hook(&IEvents::MyEvent, pSource, &CComReceiver::MyHandler1);
      __hook(&IEvents::MyEvent, pSource, &CComReceiver::MyHandler2);
   }

   void UnhookEvent(IEventSource* pSource) {
      __unhook(&IEvents::MyEvent, pSource, &CComReceiver::MyHandler1);
      __unhook(&IEvents::MyEvent, pSource, &CComReceiver::MyHandler2);
   }
};

int main() {
   // Create COM object
   CoInitialize(NULL);
   IEventSource* pSource = 0;
   HRESULT hr = CoCreateInstance(__uuidof(CComSource), NULL, CLSCTX_ALL, 
      __uuidof(IEventSource), (void **) &pSource);
   if (FAILED(hr)) {
      return -1;
   }

   // Create receiver and fire event
   CComReceiver receiver;
   receiver.HookEvent(pSource);
   pSource->FireEvent();
   receiver.UnhookEvent(pSource);

   CoUninitialize();
   return 0;
}