#pragma once
namespace Test
{
class D
{
	char c;
public:
	char ca[7];
	D()
	{
		vfun("Hello World!");
	}
	virtual void vfun(char * str)
	{
		cout<<"In D::vfun()"<<str<<endl;
	}
	virtual ~D()
	{
		cout<<"D::~D() is called"<<endl;
	}
};
};