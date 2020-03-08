#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
	int len = nums.size();
	auto it = nums.begin();
	while (it != nums.end())
	{
		while (*it == *(it + 1))
		{
			it = nums.erase(it);
			len--;
		}
		it++;
	}
	return len;
}
int main()
{
	vector<int>v = {1,2,3,3,4,4};
	cout << removeDuplicates(v) << endl;
	return 0;
}
//int main()
//{
//	int a;
//	char b;
//	cin >> a >> b;
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}
//class A
//{
//public:
//	void show()
//	{
//		cout << "show" << endl;
//		//fun();
//	}
//protected:
//	void swap()
//	{
//		cout << "swap" << endl;
//	}
//private:
//	void fun()
//	{
//		cout << "fun" << endl;
//	}
//};
//class B :public A
//{
//public:
//	void print()
//	{
//		show();
//		swap();
//		//fun();
//	}
//};
//int main()
//{
//	B b;
//	b.print();
//}
//int main()
//{
//	string s = "hello";
//	string t = "bit";
//	s.insert(s.end(),5,'a');
//	return 0;
//}
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n",x++);
//	} while (x--);
//	return 0;
//}
//int main()
//{
//	double a = 3.5;
//	char*str = "hello world";
//	printf("%8.5s\n",str);
//	printf("%5.2f\n",a);
//	return 0;
//}
