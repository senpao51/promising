#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class A
{
public:
	virtual void fun()
	{
		cout << "A::fun()" << endl;
	}
	virtual void show() = 0
	{
		cout << "A::show()" << endl;
	}
};
class B : public A
{
public:
	void show()
	{
		cout << "B::show()" << endl;
	}
};
int main()
{
	B b;
	b.fun();
	return 0;
}