#include <iostream>
using namespace std;
#define TEXT(s) (#s)
class Base
{
public:
    virtual void foo()=0;
};

void Base::foo()
{
    cout << "common code supplied by base class\n";
}

class DerivedA : public Base
{
public:
    virtual void foo()
    {
        Base::foo();
        cout << "code supplied by DerivedA class\n";
    }
};

class DerivedB : public Base
{
public:
    virtual void foo()
    {
        Base::foo();
        cout << "code supplied by DerivedB class\n";
    }
};


int main(int argc, char *argv[])
{
    DerivedA a;
    DerivedB b;
    //Base base;
    //base.foo();
    a.Base::foo();
    a.foo();
    b.foo();
	cout<<TEXT(a)<<endl;
    return 0;
}
