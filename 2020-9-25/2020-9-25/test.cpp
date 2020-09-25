#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
//vector<string> Rotate(vector<string>s)
//{
//	int row = s.size();
//	vector<string>ret;
//	ret.resize(row);
//	for (int i = 0; i < row; i++)
//		ret[i].resize(row);
//	for (int i = 0; i<row; i++)
//	{
//		for (int j = 0; j<row; j++)
//		{
//			ret[i][j] = s[row - j - 1][i];
//		}
//	}
//	return ret;
//}
//int main()
//{
//	vector<string>v = {"ABCD","EFGH","abcd","efgh"};
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	vector<string>ret = Rotate(v);
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << ret[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
int main()
{
	char ch[] = {'A','B','C','D'};
	string s = "ABC";
	string s1 = s;
	int p = 0;
	for (int i = 0; i < 1; i++)
	{
		for (int j = s.size() - 1; j >= 0; j--)
		{
			s[j] = ch[p++];
			for (int k = 0; k < 4; k++)
			{
				s[j] = ch[k];
				cout << s << endl;
			}
		}
	}
}
//int leastworktime(vector<int>& tasks, int n)
//{
//	if (tasks.size() == 0)
//		return 0;
//	int len = tasks.size();
//	vector<int>dp(len, 0);
//	dp[0] = 1;
//	for (int i = 1; i<len; i++)
//	{
//		if (tasks[i] == tasks[i - 1])
//			dp[i] = dp[i - 1] + n;
//		else
//			dp[i] = dp[i - 1] + 1;
//	}
//	return dp[len - 1];
//}
//int main()
//{
//	vector<int>v = { 1, 1, 1, 2, 3, 3, 3  };
//	int n = 2;
//	cout << leastworktime(v,n) << endl;
//}
//#include <iostream>
//using namespace std;
//int _Partition_2(int*arr, int left, int right)//¸³Öµ
//{
//	int key = arr[left];
//	while (left < right)
//	{
//		while (left<right&&arr[right] >= key)
//			right--;
//		if (left<right)
//		{
//			arr[left] = arr[right];
//		}
//		while (left<right&&arr[left] < key)
//			left++;
//		if (left<right)
//		{
//			arr[right] = arr[left];
//		}
//	}
//	arr[left] = key;
//	return left;
//}
//void QuickSort(int*arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int pos = _Partition_2(arr, left, right);
//	//int pos = _Partition_1(arr, left, right);
//	QuickSort(arr, left, pos);
//	QuickSort(arr, pos + 1, right);
//}
//int main()
//{
//	int arr[] = {5,2,6,8,9,4,0,3,1,7};
//	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
//	for (auto&e : arr)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}