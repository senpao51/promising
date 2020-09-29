#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <string>
using namespace std;
class Base
{
private:
	string baseName = "base";
public:
	Base()
	{
		callName();
	}
public:
	void callName()
	{
		cout << baseName << endl;
	}
	static class Sub : public Base
	{
	private:
		string baseName = "sub";
	public:
		void callName()
		{
			cout << baseName << endl;
		}
	};
};

int main()
{
	Base b = new Sub();
}
//lass A
//include <iostream>
//
//ublic:
//	int a;
//rivate:
//	int b;
//ublic:
//	void show()
//	{
//		printf("%p\n",&b);
//	}
//;
//nt main()
//
//	A s;
//	printf("%p\n",&s.a);
//	s.show();
//
//	return 0;
//
