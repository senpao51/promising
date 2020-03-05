#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
vector<int> singleNumber(vector<int>& nums)
{
	int ret = 0;
	int tmp = 0;
	for (const auto&e : nums)
		tmp ^= e;
	vector<int>v;
	v.resize(10000);
	for (const auto&e : nums)
		v[e]++;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 1)
		{
			ret = i;
			break;
		}
	}
	int ret2 = tmp^ret;
	vector<int>v1;
	v1.resize(2);
	v1.push_back(ret);
	v1.push_back(ret2);
	return v1;
}
int main()
{
	vector<int>v = { 1, 2, 3, 1, 2, 5 };
	vector<int>s = singleNumber(v);
	for (const auto&e : s)
		cout << e << " ";
	cout << endl;
}
//int main()
//{
//	int sum = 7;
//	int n = sum && 1;
//	cout << n << endl;
//	return 0;
//}

