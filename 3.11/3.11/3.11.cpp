#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
class A
{
	friend void show();
private:
	int m = 0;
};
void A::show()
{
	cout << "m = " << A::m << endl;
}
int main()
{
	A a;
	show();
	return 0;
}
//int main()
//{
//	return 0;
//}
//class A
//{
//private:
//	static int a;
//};
//int A::a = 0;
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}


