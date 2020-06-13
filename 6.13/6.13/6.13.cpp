#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//max = v[0];
// F(i) = max(v[i]+max,max)
int MaxSum(vector<int>&v)
{
	if (v.size() == 0)
		return 0;
	int maxret = v[0];
	int sum = v[0];
	for (int i = 1; i<v.size(); ++i)
	{
		maxret = max(maxret + v[i], v[i]);
	}
	return maxret;
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int>v(n);
		for (int i = 0; i<n; ++i)
		{
			cin >> v[i];
		}
		cout << MaxSum(v) << endl;
	}
	return 0;
}