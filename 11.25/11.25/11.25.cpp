#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<stdio.h>
using namespace std;
class StuInfor
{
public:
	void GetInfor(char*name, char*sex, int age);
private:
	char _name[10];
	char _sex[3];
	int _age;
};
void StuInfor::GetInfor(char*name, char*sex, int age)
{
	strcpy(_name, name);
	strcpy(_sex, sex);
	_age = age;
}
void main()
{
	StuInfor stu;
	stu.GetInfor("张三", "nan", 20);//通过public方法来操纵数据.
}
//void main()
//{
//	double a = 12.34;
//	const int&rra = a;
//	cout << rra << endl;
//	cout << sizeof(nullptr) << endl;
//}
//int&Add(int a, int b, int& sum)
//{
//	sum = a + b;
//	return sum;
//}
//int&Add(int a, int b)
//{
//	int sum = a + b;
//	return sum;
//}
//void main()
//{
//	int a = 10;
//	int&sum = a;
//	sum = Add(1, 2, sum);
//	int&tmp = Add(1, 2);
//	Add(4,5);
//}
//struct A
//{
//	int a = 10;
//	char ch = 'a';
//};
//void main()
//{
//	A a;
//	cout << typeid(a).name() << endl;//输出struct A
//}
//void main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (auto&a : arr)//引用是想将数据里面的值进行改变，每个元素都加了10
//	{
//		a += 10;
//	}
//	for (auto a : arr)//不改变数组内部的值，所以可以不要引用，只是打印数组内的值
//	{
//		cout << a << " ";
//	}
//	cout << endl;
//}