#define _CRT_SECURE_NO_WARNINGS 1
/*#include<iostream>
using namespace std*/;//ÃüÃû¿Õ¼ä
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//char Max(char a, int b)
//{
//	return a > b ? a : b;
//}
//void main()
//{
//	cout << "Hello Bit."<<endl;
//	int a = 10;
//	char ch = 'A';
//	double d = 12.34;
//	cout << a << endl;
//	cout << ch << endl;
//	cout << d << endl;
//	cout << Max(10, 20) << endl;
//
//}


//#include<iostream>
//using namespace std;
//namespace myspace
//{
//	void fun()
//	{
//		cout << "this is fun1" << endl;
//	}
//	void show()
//	{
//		cout << "this is show1" << endl;
//	}
//};
//namespace youspace
//{
//	void fun()
//	{
//		cout << "this is fun2" << endl;
//	}
//	void show()
//	{
//		cout << "this is show2" << endl;
//	}
//};
//using namespace myspace;
//void main()
//{
//	myspace::fun();
//	myspace::show();
//	youspace::fun();
//	char c;
//	cin >> c;
//	cout << c;
//}
//#include <iostream>
//using namespace std;
//void fun(int a = 10, int b = 30,int c = 50)
//{
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//}
//void main()
//{
//	fun(1,3,5);
//	fun();
//	fun(8,9);
//}
#include <iostream>
using namespace std;
int Max(int a, int b)
{
	return a > b ? a : b;
}
char Max(char a, char b)
{
	return a > b ?a : b;
}
void main()
{
	cout << "Max = " << Max(10, 20) << endl;
	cout << "Max = " << Max('A', 'B') << endl;
}