#include <iostream>
#include <typeinfo.h>
#include <windows.h>
#include <fstream>

using namespace std;
#define TObj
#ifdef TObj
	#include "Obj.h"
#endif

#define offsetofclass(base, derived) (DWORD(static_cast<base*>((derived*)7))-7)

template< typename T, size_t N >
T (&CheckArray( T(&)[N] ))[N];

class  Base
{
public:
	virtual void Fun(){
		cout<<"Base::Fun() called."<<endl;
	}
};

class  Derived: public Base
{
public:
	Derived(){
	Fun();
	}

protected:
	void Fun(){
		cout<<"Derived::Fun() called."<<endl;
	}
};
void main()
{
#ifdef TObj
	using namespace Obj;
	A * pA; B * pB; C * pC;
	C obj;
	pA=pB=pC=&obj;

	cout<<"Type of pointer pA:"<<typeid(pA).name()<<endl;
	cout<<"Type of pointer pB:"<<typeid(pB).name()<<endl;
	cout<<"Type of pointer pC:"<<typeid(pC).name()<<endl;
	SYSTEMTIME begin={0}, end={0};
	GetLocalTime(&begin);
	SYSTEM_INFO si;
	GetSystemInfo(&si);

	cout<<"The application module:"<<GetModuleHandle(0)<<"\n\t(P:"<<GetCurrentProcessId()<<" "
		<<"T:"<<GetCurrentThreadId()<<")starts at "
		<<begin.wHour<<':'<<begin.wMinute<<':'<<begin.wSecond<<':'<<begin.wMilliseconds<<endl;

	pA->fun();	delete pA->vfun();
	pB->fun();	delete pB->vfun();
	pC->fun();   delete pC->vfun();
	
	cout<<endl<<"/*** Obj's method! ***/"<<endl<<endl;
	delete pB->A::vfun();
	delete pC->B::vfun();
	delete obj.C::vfun();
	cout<<endl<<"********************************"<<endl<<endl;
	B(obj).fun(); delete A(obj).vfun();
	obj.fun();
	delete obj.vfun();
	obj.sfun();
	cout<<endl<<"*********************************"<<endl<<endl;
	cout<<obj.literal<<endl;

	static_cast<B*>(pA)->fun();
	dynamic_cast<A*>(pC)->fun();
	delete dynamic_cast<C*>(pB)->vfun();

	pB=static_cast<B*>(new A);	pC=reinterpret_cast<C*>(new B);
	pB->fun();	delete pB->vfun(); 
	pC->fun();	delete pC->vfun();	pC->sfun();

	cout<<pB->a<<'`'<<pB->b<<'`'<<pC->b<<'`'<<pC->c<<'`'<<endl;

	cout<<"Type of object *pA:"<<typeid(*pA).name()<<endl;
	cout<<"Type of pointer pB:"<<typeid(pB).name()<<endl;
	cout<<"Type of value of pointer pC:"<<typeid(*pC).name()<<endl;
	
	using namespace Test;
	cout<<"Size of Type D:E is:"<<sizeof(D)<<':'<<sizeof(E)<<endl;
	
	delete pB;
	delete pC;
	GetLocalTime(&end);
	
	WORD sec, msec;
	msec=(end.wMilliseconds>=begin.wMilliseconds?
		end.wMilliseconds:
	(end.wSecond--,end.wMilliseconds+1000))-begin.wMilliseconds; 

	sec=((end.wSecond>=begin.wSecond)?
		end.wSecond:
	(end.wMinute--,end.wSecond+60))-begin.wSecond; 

	cout<<"Starts at "
		<<begin.wHour<<':'<<begin.wMinute<<':'<<begin.wSecond<<'.'<<begin.wMilliseconds<<endl;
	cout<<"Ends at " 
		<<end.wHour<<':'<<end.wMinute<<':'<<end.wSecond<<'.'<<end.wMilliseconds<<endl;
	cout<<"The run time is=="<<sec<<'.'<<msec<<"s"<<endl;

#pragma warning(disable:4311)
	cout<<offsetofclass(a,z)<<"\n "<<offsetofclass(b,z)<<"\n  "<<offsetofclass(c,z)<<endl;
	class Z:public C, public E, public BitField {};
	cout<<offsetofclass(C,Z)<<"\n "<<offsetofclass(E,Z)<<"\n  "<<offsetofclass(BitField,Z)<<endl;
#pragma warning(default:4311)

#else
	Derived d;	
#endif
}
