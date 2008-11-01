#include <iostream>
#include <string>

using namespace std;

char* Trim(const char* str)
{
	char * front, *end;
	front=_strdup(str); end=front+strlen(str)-1;
	while(*front==' '|| *end==' ')
	{
		if(*front==' ') front++;
		if(*end==' ') end--;
	}
	*++end='\0';
	return front;
}

char * Encode(const char* str)
{
	 char * t=_strdup(str);
	while(*t)
	{
		*t=~*t, t++;
	}
	return t-(int)strlen(str);
}

void Rangeof(unsigned short bw, bool sign)
{

	cout<<"The range of "<<(sign?"signed ":"unsigned ")<<bw
		<<" bitwidth number is from:"<<
		(sign ? -(~0&(1<<(bw-1))) : 0)<<" to "<<(sign ? ~0&(1<<(bw-1))-1 : (~0&(1<<(bw-1))<<1)-1)<<endl;
}

class T
{
public:
		char c;
		int i;
		char p[];

};

void main()
{
	Rangeof(8,true);
	Rangeof(16,false);
	Rangeof(32,true);
	cout<<(unsigned int)(~0)<<'\t'<<(unsigned long long)(~0)<<endl;
	T t={'!', 123, "Hello World!"};
	cout<<t.p<<sizeof(t)<<endl;
}