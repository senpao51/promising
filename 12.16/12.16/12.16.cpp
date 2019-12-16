#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vld.h>
using namespace std;


class Str
{
public:
	Str(const char*str = "hello")
	{
		this->str = new char[strlen(str)+1];
		strcpy(this->str,str);
	}
	Str(const Str&s)
	{
		str = new char[6];
		strcpy(str, s.str);
	}
	Str&operator=(const Str&s)
	{
		if (this != &s)
		{
			delete[]str;
			str = nullptr;
			str = new char[6];
			strcpy(str,s.str);
		}
		return *this;
	}
	~Str()
	{
		delete []str;
		str = nullptr;
	}
private:
	char *str;
};
int main()
{
	Str s1("bit");
	Str s2 = s1;
	return 0;
}
