#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;//ÃüÃû¿Õ¼ä
int Max(int a, int b)
{
	return a > b ? a : b;
}
char Max(int a, int b)
{
	return a > b ? a : b;
}
void main()
{
	cout << "Hello Bit."<<endl;
	int a = 10;
	char ch = 'A';
	double d = 12.34;
	cout << a << endl;
	cout << ch << endl;
	cout << d << endl;
	cout << Max(10, 20) << endl;

}

