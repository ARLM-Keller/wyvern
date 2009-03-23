#pragma once
namespace Obj
{
class A
{
public:
	A()
	{
		a=1;
		cout<<"A is called"<<endl;
	}
	void fun()
	{
		cout<<"A::fun is called"<<endl;
	}
	virtual A* vfun()
	{
		cout<<"A::vfun is called"<<endl;
		return new A;
	}
	static const char* literal;
	//static const int it;
	virtual ~A()
	{
		cout<<"~A is called"<<endl;
	}
	int a;
};
const char* A::literal="Hello wonderful C++ world!";
};

