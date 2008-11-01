#include <iostream>
#include <Windows.h>
#include <string>

#include "..\\..\\Console\\INI.h"


void main()
{
	CIniReader cir("e:\\demo.ini");
	cir.setKey("DemoINIValue", "DemoKey", "DemoSection");

	using namespace std;
	if(cir.sectionExists("DemoSection"))
	{
		cout<<"write demo ini file successfully!"<<endl;
	}

	cout<<"Do you want to edit the file you generated just now? [Yes, No]"<<endl;
	char * str;
	cin>>str;

	if(_tolower(str)=="y" || _tolower(str)=="yes")
	{
		ShellExecuteA(NULL, "open", "E:\\demo.ini", NULL, NULL, SW_SHOWNORMAL);
	}

}