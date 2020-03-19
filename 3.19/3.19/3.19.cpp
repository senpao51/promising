#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Base {
public:
	Base(int j) : i(j) {}
	virtual~Base() {}
	void func1() {
		i *= 10;
		func2();
	} 
	int getValue() {
			return i;
		} 
protected :
	virtual void func2() {
		i++;
	} 
protected :
	int i;
};
class Child : public Base {
public:
	Child(int j) : Base(j) {}
	void func1() {
		i *= 100;
		func2();
	} 
protected :
	void func2() {
		i += 2;
	}
};
int main() {
	Base * pb = new Child(1);
	pb->func1();
	cout << pb->getValue() << endl; delete pb;
}
//class Test
//{
//public:
//	Test(int m) :a(m)
//	{}
//	void change()const
//	{
//		a = 20;
//	}
//	void show()const
//	{
//		cout << a << endl;
//	}
//private:
//	mutable int a;
//};
//int main()
//{
//	Test t(5);
//	t.show();
//	t.change();
//	t.show();
//
//	return 0;
//}
//int main()
//{
//	cin >> "-";
//	return 0;
//}
//bool IsPerfectNumber(int n)
//{
//	vector<int>v;
//	for (int i = 1; i <n; i++)
//	{
//		if (n%i == 0)
//		{
//			v.push_back(i);
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i<v.size(); i++)
//	{
//		sum += v[i];
//	}
//	if (sum == n)
//		return true;
//	return false;
//}
//int Count(int n)
//{
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (IsPerfectNumber(i))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cout << Count(n) << endl;
//	}
//	return 0;
//}
