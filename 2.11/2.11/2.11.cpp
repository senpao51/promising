#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//int main()
//{
//	int a = 0;
//	a = 'a' + 1.6;
//	cout << a << endl;
//	return 0;
//}
//int main()
//{
//	vector<int>nums;
//	int len = sizeof(nums) / sizeof(nums[0]);
//	cout << len << endl;
//	nums.push_back(1);
//	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(4);
//	nums.push_back(5);
//	cout << len << endl;
//	cout << nums.size() << endl;
//	string s = "abcdef";
//	cout << s.size() << endl;
//}
//int removeElement(vector<int>& nums, int val)
//{
//	int len = nums.size();
//	int max = len - 1;
//	for (int i = 0; i <= max; i++)
//	{
//		if (nums[i] == val)
//		{
//			for (int j = i; j<max; j++)
//			{
//				nums[j] = nums[j + 1];
//			}
//			len--;
//		}
//	}
//	return len;
//}
//int main()
//{
//	vector<int>nums;
//	nums.push_back(3);
//	nums.push_back(2);
//	nums.push_back(2);
//	nums.push_back(3);
//	cout << removeElement(nums, 3) << endl;
//}
int searchInsert(vector<int>& nums, int target)
{
	int len = nums.size();
	if (nums[0]>target)
		return 0;
	if (nums[len - 1]<target)
		return len - 1;
	for (int i = 0; i<len - 2; i++)
	{
		if (nums[i] == target)
			return i;
		else if (nums[i]<target&&nums[i + 1]>target)
			return i + 1;
	}
	return len - 1;
}
int main()
{
	vector<int>nums;
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(6);
	cout<<searchInsert(nums, 7) << endl;
}