#include <iostream>
 
int *foo(int *array)
{
   int *start = array;
   while ( *array )
   {
	  std::cout << *array++ << ' ';
   }
   std::cout << std::endl;
   return start;
}
 
int *bar(int *array)
{
   int *start = array;
   while ( *array )
   {
	  *array++ += 1;
   }
   return start;
}
 
int main()
{
   int myarray[] = {1,2,3,4,5,0};
   foo(bar(foo(bar(foo(myarray)))));
   return 0;
}
