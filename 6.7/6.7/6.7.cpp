#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	double d = 100.00 / 20;
	printf("%4.2lf\n",d);
}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		double d = 10000 / n;
//		if (d == 10000)
//			cout << "100.00%" << endl;
//		else
//		{
//			string s = to_string(d);
//			auto p = s.find('.');
//			string str = s.substr(0, p);
//			str.insert(str.begin() + 2, '.');
//			cout << str;
//			cout << "%" << endl;
//		}
//		
//	}
//	return 0;
//}
//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//
//	}
//private:
//	Singleton()
//	{}
//private:
//	static Singleton* instance;
//};
//int main()
//{
//	return 0;
//}