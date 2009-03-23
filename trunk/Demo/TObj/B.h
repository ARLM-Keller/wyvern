#pragma once
namespace Obj
{
class B: public A
{

public:
	B()
	{
		b=2;
		cout<<"B is called"<<endl;
	}
	void fun()
	{
		cout<<"B::fun is called"<<endl;
	}
	virtual B* vfun()
	{
		cout<<"B::vfun is called"<<endl;
		return new B;
	}
	virtual ~B()
	{
		cout<<"~B is called"<<endl;
	}
	unsigned b;
};
};