#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void Test(int a)
{
	cout << "Test" << endl;
}
int main()
{
	Test(5);
	cout << Test << endl;
	typedef void(*fp)(int);
	fp fpi;
	fpi = Test;
	cout << fpi << endl;
}




//class CA 
//{ 
//public: 
//	CA()
//	{
//		cout << "CA" << endl;
//	}
//    void f() 
//    { 
//        cout << "CA f()" << endl; 
//    } 
//    virtual void ff() 
//    { 
//        cout << "CA ff()" << endl; 
//        f(); 
//    } 
//}; 
//
//class CB : public CA 
//{ 
//public : 
//	CB()
//	{
//		cout << "CB" << endl;
//	}
//    virtual void f() 
//    { 
//        cout << "CB f()" << endl; 
//    } 
//    void ff() 
//    { 
//        cout << "CB ff()" << endl; 
//        f(); 
//        CA::ff(); 
//    } 
//}; 
//class CC : public CB 
//{ 
//public: 
//	CC()
//	{
//		cout << "CC" << endl;
//	}
//    virtual void f() 
//    { 
//        cout << "C f()" << endl; 
//    } 
//}; 
//int main()
//{
// CB b;
// CA *ap = &b;
// CC c;
// CB &br = c;
// CB *bp = &c;
//
//  ap->f();
// cout << endl;
//
//  b.f();
// cout << endl;
//
//  br.f();
// cout << endl;
//
//  bp->f();
// cout << endl;
//
//  ap->ff();
// cout << endl;
//
//  bp->ff();
// cout << endl;
//
//     return 0;
//}
//class Base1
//{
//public:
//	virtual void show()
//	{
//		cout << "Base1::show()" << endl;
//	}
//	virtual void fun()
//	{
//		cout << "Base1::fun()" << endl;
//	}
//private:
//	int m_base1;
//};
//class Base
//{
//public:
//	virtual void show()
//	{
//		cout << "Base::show()" << endl;
//	}
//	virtual void fun()
//	{
//		cout << "Base::fun()" << endl;
//	}
//private:
//	int m_base;
//};
//class D : public Base,public Base1
//{
//public:
//	virtual void show()
//	{
//		cout << "D::show()" << endl;
//	}
//	virtual void fun1()
//	{
//		cout << "D::fun()" << endl;
//	}
//private:
//	int m_d;
//};
//int main()
//{
//	D d;
//	return 0;
//}