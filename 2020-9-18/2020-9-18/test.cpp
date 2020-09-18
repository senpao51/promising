#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class A
{};
class B
{
public:
	B()
	{}
	~B()
	{}
};
class C
{
public:
	C()
	{}
	virtual ~C()
	{}
};
int main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;

}
//class Singleton
//{
//public:
//	static Singleton* get()
//	{
//		cout << "2" << endl;
//		if (!sg)
//		{
//			sg = new Singleton();
//		}
//		return sg;
//	}
//private:
//	Singleton()
//	{
//		cout << "1" << endl;
//	}
//	static Singleton* sg;
//};
//Singleton* Singleton::sg = 0;
//int main()
//{
//	Singleton* sg = Singleton::get();
//	return 0;
//}