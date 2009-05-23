	#include<iostream>
	#include<string>
	#include<sstream>
	using namespace std;

	string itos(int i)	// convert int to string
	{
		stringstream s;
		s << i;
		return s.str();
	}

	int main()
	{
		int i = 127;
		string ss = itos(i);
		const char* p = ss.c_str();

		cout << ss << " " << p << "\n";
	}