#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	fstream file;
	string line;
	file.open("d:\\strtok.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,line);
			char * mem=_strdup(line.c_str());
			while(*mem!=0) *mem++=toupper(*mem);
			line.assign(mem-line.size());
			cout<<line<<endl;
			file.seekp((int)file.tellp()-(int)line.size());
			file<<line;
		}
		file.close();
	}
	else
	{
		cout<<"Can't open the specified file!";
	}
}
