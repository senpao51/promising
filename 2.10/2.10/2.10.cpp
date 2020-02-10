#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//void fun(string s)
//{
//	for (int i = 0; i < s.length(); i++)
//	{
//		cout << s[i] << endl;
//	}
//	string::iterator it;
//	it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << endl;
//		it++;
//	}
//}
//int main()
//{
//	string arr = "fuhjk hj";
//	fun(arr);
//}
//void rotate(vector<int>& nums, int k)
//{
//	if (k == 0)
//		return;
//	int max = nums.size()-1;
//	int ret = 0;
//	while (k--)
//	{
//		ret = nums[max];
//		for (int i = max; i>0; i--)
//		{
//			nums[i] = nums[i - 1];
//		}
//		nums[0] = ret;
//	}
//}
//int main()
//{
//	vector<int>nums;
//	vector<int>::iterator it;
//	for (it = nums.begin(); it != nums.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	nums.push_back(1);
//	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(4);
//	nums.push_back(5);
//	nums.push_back(6);
//	nums.push_back(7);
//	for (it = nums.begin(); it != nums.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	rotate(nums, 3);
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	for (it = nums.begin(); it != nums.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}
int main()
{
	int num = 7;
	int sum = 7;
	sum = num++;
	sum++;
	++num;
	cout << sum << endl;
}