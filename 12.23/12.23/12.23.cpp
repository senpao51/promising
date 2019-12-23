#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
template <typename Type>
Type Max(Type a, Type b)
{
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	return a > b ? a : b;
}

int main()
{
	Max<int>(12.34,23);
		90
	return 0;
}