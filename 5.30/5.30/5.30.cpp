#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int Add(int a, int b)
{
	int tmp = a + b;
	return tmp;
}
int main()
{
	int &&ret = Add(10, 200);
	return 0;
}