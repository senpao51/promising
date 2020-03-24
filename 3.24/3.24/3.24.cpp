#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n = -1;
	int count = 0;
	int flag = 1;
	while (flag)
	{
		if (n & flag)
			count++;
		flag = flag<<1;
	}
	cout << count << endl;
	return 0;
}
//int main()
//{
//	string s1;
//	string s2;
//	while (cin >> s1 >> s2)
//	{
//		int len1 = s1.size();
//		int len2 = s2.size();
//		int max = 0;
//		int end = 0;
//		vector<vector<int>>num(len1, vector<int>());
//		for (int i = 0; i<len1; i++)
//		{
//			num[i].resize(len2, 0);
//		}
//		for (int i = 0; i<len1; i++)
//		{
//			for (int j = 0; j<len2; j++)
//			{
//				if (s1[i] == s2[j])
//				{
//					if (i == 0 || j == 0)
//						num[i][j] = 1;
//					else
//					{
//						num[i][j] = num[i - 1][j - 1] + 1;
//					}
//					if (num[i][j]>max)
//					{
//						max = num[i][j];
//						end = i;
//					}
//				}
//
//			}
//		}
//		if (max == 0)
//			cout << "-1" << endl;
//		for (int i = end - max + 1; i <= end; i++)
//		{
//			cout << s1[i];
//		}
//		cout << endl;
//	}
//}