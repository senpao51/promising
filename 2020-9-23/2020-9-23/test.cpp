#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minNum(vector<int> arr)
{
	int min = arr[0];
	for (int i = 1; i<arr.size(); i++)
	{
		if (arr[i]<min)
			min = arr[i];
	}
	return min;
}
int minNumberInRotateArray(vector<int> arr)
{
	if (arr.size() == 0)
		return 0;
	int start = 0;
	int min = 0;
	int end = arr.size() - 1;
	while (arr[start]>=arr[end])
	{
		if (end - start == 1)
		{
			min = end;
			break;
		}
		 min = start + (end - start) >> 1;
		if (arr[start] == arr[min] && arr[start] == arr[end])
			return minNum(arr);
		if (arr[start]<=arr[min])
		{
			start = min;
		}
		else
		{
			end = min;
		}
	}
	return arr[min];
}
int main()
{
	vector<int>v = {4,5,1,2,3};
	cout<<minNumberInRotateArray(v) << endl;
	return 0;
}
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//string ch[] = {"A","K","Q","J","10","9","8","7","6","5","4","3","2","1"};
//int Type(vector<string>& v)
//{
//	if (v.size() == 0)
//		return 0;
//	bool TongHua = true;
//	bool ShunZi = true;
//	for (int i = 0; i < v.size()-1; i++)
//	{
//		if (v[i][0] != v[i + 1][0])
//			TongHua = false;
//
//	}
//	if (TongHua)
//	{
//
//	}
//	else
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cout << ch[4] << endl;
//		vector<string>v(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//		switch (Type(v))
//		{
//		case 1:
//			cout << "HuangJiaTongHuaShun" << endl;
//			break;
//		case 2:
//			cout << "TongHuaShun" << endl;
//			break;
//		case 3:
//			cout << "SiTiao" << endl;
//			break;
//		case 4:
//			cout << "Hulu" << endl;
//			break;
//		case 5:
//			cout << "TongHua" << endl;
//			break;
//		case 6:
//			cout << "ShunZi" << endl;
//			break;
//		case 7:
//			cout << "SaoTiao" << endl;
//			break;
//		case 8:
//			cout << "LiangDui" << endl;
//			break;
//		case 9:
//			cout << "YiDui" << endl;
//			break;
//		case 10:
//			cout << "GaoPai" << endl;
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}
//int Count(vector<char>v1, vector<char>v2)
//{
//	if (v1.size() == 0)
//		return 0;
//	vector<char>board;
//	auto p = find(v2.begin(), v2.end(), v1[0]);
//	auto ptr = p;
//	if (p != v2.end())
//		board.push_back(v1[0]);
//	int i = 1;
//	while (i<v1.size())
//	{
//		p = find(v2.begin(), v2.end(), v1[i]);
//		if (p != v2.end() && p >= ptr)
//		{
//			ptr = p;
//			board.push_back(v1[i]);
//			i++;
//		}
//		else
//		{
//			board.pop_back();
//			ptr = p;
//		}
//		ptr = p;
//	}
//	return board.size();
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<char>v1(n);
//		vector<char>v2(n);
//		for (auto&e : v1)
//			cin >> e;
//		for (auto&e : v2)
//			cin >> e;
//		cout << Count(v1, v2) << endl;
//	}
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<char>c = { 5, 6, 9, 3, 7 };
//	auto p = find(c.begin(), c.end(), 5);
//	auto p1 = find(c.begin(),c.end(),6);
//	auto p2 = find(c.begin(), c.end(), 8);
//	if (p2 == c.end())
//		cout << "aaa" << endl;
//	if (p > p1)
//		cout << "1" << endl;
//	else
//		cout << "2" << endl;
	//long long a =1;
	//for (int i = 50; i <= 100; i++)
	//{
	//	a *= i;
	//}
	//cout << a << endl;
	//return 0;
//}
//long long choosemethod(int m, int n)
//{
//	if (m < 0 || n < 0||n>m)
//		return 0;
//	long long ncount = 1;
//	long long mcount = 1;
//	for (int i = 0; i<n; i++)
//	{
//		int tmp = m - i;
//		mcount *= tmp;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		ncount *= i;
//	}
//	long long p = mcount / ncount;
//	return p;
//}
//int main()
//{
//	int n, m;
//	while (cin >> m >> n)
//	{
//		cout << choosemethod(m,n) << endl;
//	}
//	return 0;
//}