#include <iostream>
using namespace std;

#define sizeofarray(x) (sizeof(x)/sizeof(x[0]))

template <typename T>
void do_it_impl(const T * const x)
{
	cout<<"const T* const x"<<endl;
}

template <typename T, int K>
void do_it_impl(T (&x)[K])
{
	cout<<"T (&x)[k] called"<<endl;
}

template <typename T>
void do_it(T& x)
{
 do_it_impl<double, sizeofarray(x)>(x);
}

int main()
{
 double a[30];
 do_it(a);
}
