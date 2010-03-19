// Demo.cpp : Defines the entry point for the console application.
//
// evh_native.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <atlconv.h>
using namespace std;
//#include "Util.h"
//[event_source(native)]	
struct __declspec(uuid("43d7ce4a-fbcf-454b-89de-1378b1a9d1d3")) CSource
{
public:
	void __event MyEvent(int nValue);
	static void __event SEvent(int nValue);
	__declspec(property (get=get_ip, put=put_ip)) int IP;
	int get_ip()
	{
		return m_p;
	}
	void put_ip(int value)
	{
		m_p=value;
	}
protected:
	int m_p;
};

//[event_receiver(native)]
class CReceiver
{
public:

	int r;

   /*__declspec(dllexport) */void Handler1(int nValue) {
	   cout<<__FUNCTION__": was called with value "<<nValue<<endl;
   }

   void Handler2(int nValue) {
	   cout<<__FUNCTION__": was called with value "<<nValue<<endl;
   }

   void Handler3(int nValue)
   {
	   cout<<__FUNCTION__": was called with value "<<nValue<<endl;
   }

   void hook(CSource* pSource) {
      __hook(&CSource::MyEvent, pSource, &CReceiver::Handler1, this);
      __hook(&CSource::MyEvent, pSource, &CReceiver::Handler2);
	  __hook(&CSource::MyEvent, pSource, &CReceiver::Handler3);
   }

   void unhook(CSource* pSource) {
      //__unhook(&CSource::MyEvent, pSource, &CReceiver::Handler1);
      __unhook(&CSource::MyEvent, pSource, &CReceiver::Handler2);
	  //__unhook(&CSource::MyEvent, pSource, &CReceiver::Handler3);
   }	
};

/*__declspec(dllexport)*/ class  CTarget
{
public:

	short target;

	void Handler1(int nValue){ target = 1234;
	cout<<__FUNCTION__": was called with value "<<target<<endl;
	}

	void Handler2(int nValue){ target = 4567;
	cout<<__FUNCTION__": was called with value "<<target<<endl;
	}
   static void SHandler(int nValue){
	   cout<<__FUNCTION__": was called with value "<<nValue<<endl;
	}
};

class Demo
{
public:
	static const float f;
	const int  i;
	Demo():i(123)
	{
		a=127,b=128,c=3;
		Out();
	}

	/*__declspec(dllexport)*/ virtual void Out()
	{
		cout<<"The bitpattern member in Demo class: a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;
	}
	int a:8,b:8,c:16;
};

typedef void POut();
const float Demo::f = 123.4567f;
const float *pf = &Demo::f;
const int Demo::* pi = &Demo::i;
POut Demo::* pOut = &Demo::Out;

//extern const int i;

void Fun()
{
	
#define Macro 127
	//Local Type
	class fc
	{
	public:
		int i;
		short s;
		char c;
		//Functor operator
		void operator ()(int i, short s, char c)
		{
			i=i;
			s=s;
			c=c;
		}
	};
	fc z;
	z(3,4,5);
#undef Macro
}

HANDLE hEvt;

void ThdFun(void* params)
{
	cout<<"In thread: "<<GetCurrentThreadId()<<endl;
	cout<<(char*)params<<endl;
	WaitForSingleObject(hEvt,INFINITE);
	cout<<"\nThread complete:"<<GetCurrentThreadId()<<endl;
}

int mystrlen(const char * str)
{
	return *str==0?0:1+mystrlen(++str);
}

int main(int argc, char** argv, char** envp) {

   DWORD time;
   cout<<"Demo begin..."<<endl;
   time = GetTickCount();
   CSource source;
   source.IP=123456789;
   CReceiver receiver;
   CTarget *p= (CTarget*)&receiver;
   source.MyEvent(147); //__noop
   receiver.hook(&source);
   __raise source.MyEvent(123);
   __hook(&CSource::MyEvent, &source, &CTarget::Handler1, p);//1234
   receiver.unhook(&source);
   __hook(&CSource::MyEvent, &source, &CTarget::Handler2, &source);//4567
   __raise source.MyEvent(456);
   __hook(&CSource::SEvent, 0, &CTarget::SHandler, p);
   __raise CSource::SEvent(789);
   __unhook(&CSource::SEvent, 0, &CTarget::SHandler, p);
   CSource::SEvent(369); //__noop
   //while(*envp) cout<<*envp++<<endl;
#if 1

   cout<<"Size of static const member pointer is:"<< sizeof(pf)<<"\nSize of const member pointer is:"<<sizeof(pi)<<"\nSize of member function pointer is:"<<sizeof(pOut)<<endl;
#endif

	DWORD dwThreadID;
	hEvt=CreateEvent(0,false,false,"Thread Event");
	HANDLE hThread;
	if(!(hThread=CreateThread(0, NULL, LPTHREAD_START_ROUTINE (ThdFun), __FUNCTION__, NULL, &dwThreadID)))
		cerr<<"Create thread failed..."<<endl;
	cout<<"Create thread successfully: "<<dwThreadID<<endl;
	SetEvent(hEvt);
	WaitForSingleObject(hThread,INFINITE);
	
	CloseHandle(hEvt);
	CloseHandle(hThread);

	cout<<typeid(ThdFun).name()<<endl;
	LPOLESTR idstr;
	StringFromCLSID(__uuidof(CSource), &idstr);
	USES_CONVERSION;
	cout<<OLE2CA(idstr)<<endl;
	vector<int> ai(10);
	srand(GetTickCount());
	generate(ai.begin(), ai.end(), rand);
	cout<<"Unordered array items..."<<endl;
	for_each(ai.begin(),ai.end(),[&](int i){cout<<i<<' ';});
	sort(ai.begin(), ai.end());
	cout<<"\nOrdered array items..."<<endl;
	for_each(ai.begin(),ai.end(),[=](int i){cout<<i<<' ';});
	cin.get();
	
#ifdef Demo
   UINT count=1; UINT size=UINT(-1); cout<<2<<'\t';
   for(UINT i=3; i<size; i+=2)
   {
	   if (isprime(i)) 
	   { 
		   count++; cout<<i<<'\t'; 
		   if (count%10==0) {cout<<endl;}
		}
	 
	   if (count==1000) break;
   }

	char* Num[10]={0,0,"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	char N1, N2, N3;
	cout<<"Please input two numbers with range of [2..9]:"<<endl;
	cin>>N1>>N2>>N3;
	while(N1<'2'||N1>'9'||N2<'2'||N2>'9'||N3<'2'||N3>'9') 
	{
		cout<<"Invalid input number... "<<endl;
		cin>>N1>>N2>>N3;
	}
	cout<<Num[N1-'0']<<'\t'<<Num[N2-'0']<<'\t'<<Num[N3-'0']<<endl<<endl;
	short s1=strlen(Num[N1-'0']), s2=strlen(Num[N2-'0']), s3=strlen(Num[N3-'0']);
	for(short i=0; i<s1; i++)
	{
		for(short j=0; j<s2; j++)
		{
			for(short k=0; k<s3; k++)
				cout<<Num[N1-'0'][i]<<Num[N2-'0'][j]<<Num[N3-'0'][k]<<'\t';
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;


	char N[3];
	while(1)
	{
		bool ok=false;
		cin>>N[0]>>N[1]>>N[2];
		for(int i=0; i<3; i++)
		{
			if(N[i]<'0'||N[i]>'9') {ok=false; break;}
			ok=true;
		}
		if(ok) break;
		else continue;
	}

	char* S[3];
	for (short i=0; i<3; i++)
	{ 
		S[i]=RemoveAt(N, i);
		S[i][2]=0;
	}

	const char* ptr=MinStr(S[0], S[1], S[2]);
	for(short i=0; i<3; i++)
		if(ptr==S[i])
			cout<<"The deleted number for the miniest number is:"<<i+1<<"---"<<S[i]<<endl;
	for(int i=0; i<3; i++)
	{
		delete S[i];
	}

#else
#if 0
   union
   {
	   struct
	   {
		   int i;
		   char * p;
	   };

	   struct
	   {
		   short s;
		   float f;
	   };
   }U;
	BitPattern bp;
	bp.a=127; bp.b=7; bp.c=3;
	cout<<sizeof(bp)<<*(short *)&bp<<endl;
	Demo o;
	SYSTEM_INFO si;
	GetSystemInfo(&si);
	cout<<*((USHORT*)&si+2)<<endl;
	//cerr<<__DATE__<< __TIME__<< __FILE__<< __LINE__<<endl;
	char * str = "Hello, World!";
	short _based(str) *pstr = (short _based(str)*)3;
	str+=1;
	cout<<(char*)pstr<<endl;
	//i=127000; p="jfeojoifj";
	//cout<<i<<'\t'<<p<<'\t'<<s<<'\t'<<f<<endl;
	//cout<<i<<'\t'<<p<<'\t'<<s<<'\t'<<f<<endl;
	//string file;
	//cout<<"Please input a file name:";
	//cin>>file;
	//cout<<GetFileHash(file.c_str())<<endl;
	//cout<<MAKEINTRESOURCE(1002)<<endl;
#endif
#endif
}

