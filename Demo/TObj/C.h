#pragma once
namespace Obj
{
class C: public B
{

public:
	C()
	{
		c=3;
		cout<<"C is called"<<endl;
	}
	void fun()
	{
		cout<<"C::fun is called"<<endl;
	}
	virtual C* vfun()
	{
		cout<<"C::vfun is called"<<endl;
		return new C;
	}
	static void sfun()
	{
		cout<<"C::sfun is called"<<endl;
	}
	virtual ~C()
	{
		cout<<"~C is called"<<endl;
	}
	char c;
};
};