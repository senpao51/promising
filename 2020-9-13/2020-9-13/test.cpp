#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdio.h>
#include <set>
using namespace std;
int main()
{
	string s = "hello bi t cc";
	auto p = s.rfind(" ");
	int len = s.size();
	int last = len - p-1;
	cout << last << endl;
	return 0;
}
//void func1()
//{
//	printf("%s: ",__func__);
//}
//int main()
//{
//	func1();
//	return 0;
//}
//int main()
//{
//	map<int,int>mp;
//	mp.insert(pair<int, int>(1, 2));
//	mp.insert(pair<int, int>(1, 3));
//	if (mp.at(0) >> mp.at(1))
//		cout << "1";
//	return 0;
//}
//int main()
//{
//	map<int, int>mp;
//	mp.insert({1,2});
//	mp.insert({ 2, 1 });
//	cout << mp.size() << endl;
//	cout<<
//	return 0;
//}
//void Print(vector<vector<int>>&board, int row, int col)
//{
//	for (int i=0; i < row; i++)
//	{
//		for (int j = 0; i < col; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void Count(vector<vector<int>>&board, int& nrow, int& ncol)
//{
//	int row = board.size();
//	int col = board[0].size();
//	for (int i = 1; i <= row; i++)
//	{
//		if (row%i == 0)
//		{
//			int row_tmp = i;
//			if ()
//		}
//	}
//}
//int main()
//{
//	int row, col;
//	while (cin >> row >> col)
//	{
//		vector<vector<int>>board(row, vector<int>(col, 0));
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//		int nrow = 0;
//		int ncol = 0;
//		Count(board, nrow, ncol);
//		Print(board, nrow, ncol);
//	}
//}
//int Count(int sum, int k, int d)
//{
//	if (d > k)
//		return 0;
//}
//int main()
//{
//	int n, k, d;
//	while (cin >> n >> k >> d)
//	{
//		cout << Count(n,k,d) << endl;
//	}
//}
//int Count(vector<int>& v, int m, int k)
//{
//	if (m == 0||m>v.size())
//		return 0;
//	int count = 0;
//	for (int i = 0; i < v.size() - m+1; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (v[i + j] < k)
//				break;
//			else if (v[i + j]>=k && (j == m - 1))
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n, m, k;
//	while (cin >> n >> m >> k)
//	{
//		vector<int>v(n, 0);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//		cout << Count(v,m, k) << endl;
//	}
//	return 0;
//}