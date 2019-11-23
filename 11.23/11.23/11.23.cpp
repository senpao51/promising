#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <time.h>
using namespace std;
//int main()
//{
//	int a;
//	int b = 10;
//	int&ra = a;
//	cout << "ra=" << ra << endl;
//	cout << "ra=" << ra << endl;
//	const int c = 20;
//	const int&rc = c;
//	cout << rc << endl;
//	int*const pb = &b;
//	int*const &rb = pb;
//	*pb = 20;
//	cout << rb << endl;
//	double d = 12.3456789;
//	const double&rd = d;
//	cout << rd << endl;
//}
//void Swap(int&a, int&b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int& Fun()
//{
//	int n = 0;
//	cout << "&n = " << &n << endl;
//	n++;
//	return n;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a,b);
//	int m = Fun();
//	cout << "&m = " << &m << endl;
//	cout << m << endl;
//}
//int& Add(int a, int b) 
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//}
//struct A
//{
//	int a[10000];
//};
//A a;
//A Fun1()
//{
//	return a;
//}
//A& Fun2()
//{
//	return a;
//}
//A* Fun3()
//{
//	return &a;
//}
//int main()
//{
//	
//	size_t begin1 = clock();
//	for (int i = 0; i < 1000000; i++)
//	{
//		Fun1();
//	}
//	size_t end1 = clock();
//	cout << "a = " << end1-begin1<< endl;
//	size_t begin2 = clock();
//	for (int i = 0; i < 1000000; i++)
//	{
//		Fun2();
//	}
//	size_t end2 = clock();
//	cout << "&a = " << end2-begin2 << endl;
//	size_t begin3 = clock();
//	for (int i = 0; i < 1000000; i++)
//	{
//		Fun3();
//	}
//	size_t end3 = clock();
//	cout << "*a = " << end3 - begin3 << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int&ra = a;
//	int&rra = ra;
//	int&rrra = rra;
//	int c = rrra + 1;
//	cout << c << endl;
//	cout << sizeof(a) <<" "<<sizeof(ra)<<" "<<sizeof(rra)<<" "<<sizeof(rra)<< endl;
//}
//inline int Add(int&a, int&b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	size_t begin = clock();
//	for (int i = 0; i < 100000000; i++)
//	{
//		ret = Add(a, b);
//	}
//	size_t end = clock();
//	cout << ret << endl;
//	cout << end - begin << endl;
//}
//char TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	auto e = 128;
//	auto f = &e;
//	auto *g = &e;
//	auto& h = e;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(unsigned int).name()<< endl;
//	cout << typeid(f).name() << endl;
//	cout << typeid(g).name() << endl;
//	cout << typeid(h).name() << endl;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i] *= 2;
//	}
//	for (int*p=arr; p < arr + sizeof(arr) / sizeof(arr[0]); p++)
//	{
//		cout << *p << " ";
//	}
//	cout<< endl;
//}
//int main()
//{
//	char arr[] = {'a','b','c','d','e'};
//	for (auto &e : arr)
//		e /= 2;
//	for (char e : arr)
//		cout << e << " ";
//	cout << endl;
//}
void Fun(int a)
{
	cout << "int" << endl;
}
void Fun(void*a)
{
	cout << "void*" << endl;
}
void Fun(int*a)
{
	cout << "int*" << endl;
}
int main()
{
	Fun((void*)0);
	Fun((int*)NULL);
	Fun(NULL);
	Fun((char*)NULL);

}

