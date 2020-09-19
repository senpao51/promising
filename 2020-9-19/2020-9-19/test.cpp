#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
double GetLength(long tmp1[], long tmp2[])
{
	long x = abs(tmp1[0] - tmp2[0]);
	long y = abs(tmp1[1] - tmp2[1]);
	double len = sqrt(pow(x, 2) + pow(y, 2));
	return len;
}
int main()
{
	long Arr[2] = { 0 };
	long Brr[2] = { 0 };
	long Crr[2] = { 0 };
	for (int i = 0; i<2; i++)
		cin >> Arr[i];
	for (int i = 0; i<2; i++)
		cin >> Brr[i];
	for (int i = 0; i<2; i++)
		cin >> Crr[i];
	double len1 = GetLength(Arr, Brr);
	double len2 = GetLength(Arr, Crr);
	double len3 = GetLength(Brr, Crr);
	if ((len1 + len2 == len3) || (len1 + len3 == len2) || (len2 + len3 == len1))
		cout << 0.00 << endl;
	else
	{
		double p = (len1 + len2 + len3) / 2;
		double ch = p*(p - len1)*(p - len2)*(p - len3);
		double s = sqrt(ch);
		printf("%.2f\n", s);
	}
	return 0;
}
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<vector<int>> AddTwoBoard(vector<vector<int>>board1, vector<vector<int>>board2)
//{
//	int row = board1.size();
//	int col = board1[0].size();
//	vector<vector<int>>ret(row, vector<int>(col, 0));
//	for (int i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			ret[i][j] = board1[i][j] + board2[i][j];
//		}
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	int row1, col1, row2, col2;
//	while (cin >> row1 >> col1 >> row2 >> col2)
//	{
//		int op;
//		cin >> op;
//		vector<vector<int>>board1(row1, vector<int>(col1, 0));
//		vector<vector<int>>board2(row2, vector<int>(col2, 0));
//		for (int i = 0; i<row1; i++)
//		{
//			for (int j = 0; j<col1; j++)
//			{
//				cin >> board1[i][j];
//			}
//		}
//		for (int i = 0; i<row2; i++)
//		{
//			for (int j = 0; j<col2; j++)
//			{
//				cin >> board2[i][j];
//			}
//		}
//		vector<vector<int>>ret(row1, vector<int>(col1, 0));
//		switch (op)
//		{
//		case 0:
//			ret = AddTwoBoard(board1, board2);
//			break;
//		case 1:
//			//SubTwoBoard(board1,board2);
//			break;
//		case 2:
//			//MulTwoBoard(board1,board2);
//			break;
//		case 3:
//			//MulTwoTransBoard(board1,board2);
//			break;
//		}
//		for (int i = 0; i<ret.size(); i++)
//		{
//			for (int j = 0; j<ret[0].size(); j++)
//			{
//				cout << ret[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}