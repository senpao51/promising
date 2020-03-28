#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int getcd(int a, int b)
{
	int ret = a%b;
	while (ret)
	{
		a = b;
		b = ret;
		ret = a%b;
	}
	return b;
}
int main()
{
	cout << getcd(4,6) << endl;
	return 0;
}
//int main()
//{
//	int N, M;
//	while (cin >> N >> M)
//	{
//		vector<vector<int>> arr(N, vector<int>(M, 0));
//		for (int i = 0; i<N; i++)
//			for (int j = 0; j<M; j++)
//				cin >> arr[i][j];
//		vector<vector<int>> v(N, vector<int>(M, 9999));
//		v[0][0] = 0;
//		for (int i = 0; i<N; i++)
//			for (int j = 0; j<M; j++)
//			{
//				if (arr[i][j] == 1 || (i == 0 && j == 0))
//					continue;
//				if (i == 0)
//				{
//					v[i][j] = v[i][j - 1] + 1;
//				}
//				else if (j == 0)
//				{
//					v[i][j] = v[i - 1][j] + 1;
//				}
//				else
//				{
//					v[i][j] = min(v[i][j - 1], v[i - 1][j]) + 1;
//				}
//			}
//		int temp = 0;
//		for (int i = 0; i<N; i++)
//			for (int j = 0; j<M; j++)
//			{
//				if (v[i][j] == temp)
//				{
//					cout << "(" << i << "," << j << ")" << endl;
//					temp++;
//				}
//				
//			}
//	}
//
//
//	return 0;
//}
//int getMost(vector<vector<int>> board)
//{
//	int maxcount = 0;
//	vector<vector<int>>dp(7, vector<int>(7, 0));
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= 6; j++)
//		{
//			dp[i][j] = board[i - 1][j - 1];
//		}
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= 6; j++)
//		{
//			if (i == 1 && j == 1)
//				maxcount += dp[i][j];
//			else
//				maxcount += max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//	maxcount += dp[6][6];
//	return maxcount;
//}
//int main()
//{
//	vector<vector<int>>dp(6, vector<int>(6,0));
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			dp[i][j] = i + j;
//		}
//	}
//	cout<<getMost(dp) << endl;
//}