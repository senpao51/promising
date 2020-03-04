#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int>v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto p = find(v.begin(),v.end(),5);
	auto it = v.erase(p);
	cout << *it;
	return 0;
}
//int main()
//{
//	char ch = '1';
//	cout << ch - '\0' << endl;;
//	return 0;
//}
//int MoreThanHalfNum_Solution(vector<int> numbers)
//{
//	vector<int>v;
//	v.reserve(10000);
//	for (auto e : numbers)
//		v[e]++;
//	int max = 0;
//	for (auto e : v)
//	{
//		if (e != 0 && e>max)
//			max = e;
//	}
//	if (max>(numbers.size() / 2))
//	{
//		for (int i = 0; i<v.size(); i++)
//		{
//			if (v[i] == max)
//				return i;
//		}
//	}
//	else
//		return 0;
//}
//int main()
//{
//	vector<int>v = {1,2,2,2,2,2,5,6,7};
//	cout << v[1] << endl;
//	//cout << MoreThanHalfNum_Solution(v) << endl;
//	return 0;
//}
//int main()
//{
//	vector<int>v = {5,9,3,6,4,8,2,1,7,0};
//	sort(v.begin(),v.end(),greater<int>());
//	for (const auto&e : v)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	double b = 3.14;
//	auto c = a + b;
//	cout << typeid(c).name() << endl;
//	return 0;
//}