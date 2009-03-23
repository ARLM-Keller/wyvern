#pragma once
namespace Test
{
class E: public D
{
	void vfun(char * str)
	{
		cout<<"In E::vfun()"<<str<<endl;
	}
public:
	E()
	{
		vfun("Hello World!");
	}
	virtual ~E()
	{
		cout<<"E::~E() is called"<<endl;
	}
};
};