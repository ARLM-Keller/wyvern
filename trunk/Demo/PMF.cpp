// kind_of_class.cpp
// This file is to demo about different kinds of pointer to members
#include <stdio.h>
#include <string.h>
#include <windows.h>
//"one-size-fits-all" characteristic of Delegate is the main reason for its existence
class dummy_base1 { };
class dummy_base2 { };

class dummy_s : dummy_base1 { };
// Reach to here, the compiler will recognize dummy_s is a 
// kind of "single inheritance".
typedef void (dummy_s::*pointer_to_dummy_s)(void);
size_t size_of_single = sizeof(pointer_to_dummy_s);

class dummy_m : dummy_base1, dummy_base2 { public:
int demo(void);
static dummy_m obj;
int m_i;
int s_i;
};
// Reach to here, the compiler will recognize dummy_m is a 
// kind of "multiple inheritance".
typedef void (dummy_m::*pointer_to_dummy_m)(void);
size_t size_of_multi = sizeof(pointer_to_dummy_m);

class dummy_v : virtual dummy_base1 { };
// Reach to here, the compiler will recognize dummy_v is a 
// kind of "virtual inheritance".
typedef void (dummy_v::*pointer_to_dummy_v)(void);
size_t size_of_virtual = sizeof(pointer_to_dummy_v);

class dummy_u;
// forward reference, unknown at this time
typedef void (dummy_u::*pointer_to_dummy_u)(void);
size_t size_of_unknown = sizeof(pointer_to_dummy_u);

//CKnownClass Declaration
class CKnownClass
{
	void method_type_1(int);
	char* method_type_2(int, char*);
	void* method_type_3(int, char*, void*) const;
};
// __thiscall, non-const, 1 argument
typedef void (CKnownClass::*method_type_1)(int );

// __cdecl, non-const, 2 argument, return char*
char* (__cdecl CKnownClass::* method_type_2)(int, char*);

// __fastcall, const, 3 argument, return void*
void* (__fastcall CKnownClass::* method_type_3)(int, char*, void*) const;

void main()
{
    printf("%d\n%d\n%d\n%d\n", size_of_single, size_of_multi, size_of_virtual, size_of_unknown);
    printf("%d\n%d\n%d\n", sizeof(method_type_1),sizeof(method_type_2),sizeof(method_type_3));
	int n=12345;
	printf("N: %d\t %X\t %x",n,n,MAKEINTRESOURCE(n));
	char* p="Hello World!";
	char* pt=strdup(p);
	if(pt[strlen(pt)-1]=='!')
		pt[strlen(pt)-1]='.';
	printf("%s\t%s", p, pt);
}