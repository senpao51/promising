#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//int massage(vector<int>& nums)
//{
//	int len = nums.size();
//	if (len == 0)
//		return 0;
//	if (len == 1)
//		return nums[0];
//	vector<vector<int>>dp(len,vector<int>());
//	for (auto e : dp)
//	{
//		e.resize(2);
//	}
//	for (int i = 1; i <= len; i++)
//	{
//		dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
//		dp[i][1] = dp[i - 1][0] + nums[i - 1];
//	}
//	return max(dp[len][0], dp[len][1]);
//}
int massage(vector<int>& nums)
{
	int len = nums.size();
	if (len == 0)
		return 0;
	if (len == 1)
		return nums[0];
	int(*dp)[2] = new int[len][2];
	dp[0][0] = 0;
	dp[0][1] = nums[0];
	for (int i = 1; i<len; i++)
	{
		dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
		dp[i][1] = dp[i - 1][0] + nums[i];
	}
	return max(dp[len - 1][0], dp[len - 1][1]);
}
int main()
{
	vector<int>v = {2,1,4,5,3,1,1,3};
	cout << massage(v) << endl;
	return 0;
}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int>v;
//		vector<int>tmp;
//		v.resize(n);
//		tmp.resize(n);
//		for (auto &e : v)
//			cin >> e;
//		for (int i = 0; i<v.size(); i++)
//		{
//			for (int j = i + 1; j<v.size(); j++)
//			{
//
//				if ((v[i] & v[j]) != 0)
//				{
//					tmp[i] = -1;
//					tmp[j] = -1;
//				}
//				else
//				{
//					tmp[i] = 1;
//					tmp[j] = 1;
//				}
//			}
//		}
//		for (const auto&e : tmp)
//			cout << e << " ";
//		cout << endl;
//	}
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		vector<pair<int, int>>v;
//		v.resize(n);
//		for (int i = 0; i<n; i++)
//			cin >> v[i].first >> v[i].second;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j)
//					continue;
//				if (v[i].second>v[j].second)
//					continue;
//				if ()
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
////#include <iostream>
////#include <string>
////using namespace std;
////int main()
////{
////	string s;
////	while (cin >> s)
////	{
////		string ret = s;
////		auto p = s.find('.');
////		if (p != string::npos)
////		{
////			s += "000";
////			string tmp1 = s.substr(p, 3);
////			string tmp2 = s.substr(0, p);
////			s = tmp2;
////			s += tmp1;
////			for (int i = 0; i<p; i += 3)
////			{
////				if (i + 3<p)
////					ret.insert(ret.begin() + i + 3, ',');
////				else
////					break;
////			}
////			if (s[0] == '-')
////			{
////				ret[0] = '$';
////				ret.insert(ret.begin(), '(');
////				ret.insert(ret.end(), ')');
////			}
////			else
////				ret.insert(ret.begin(), '$');
////		}
////		else
////		{
////			ret += ".00";
////			for (int i = 0; i<s.size(); i += 3)
////			{
////				if (i + 3<s.size())
////					ret.insert(ret.begin() + i + 3, ',');
////				else
////					break;
////			}
////			if (s[0] == '-')
////			{
////				ret[0] = '$';
////				ret.insert(ret.begin(), '(');
////				ret.insert(ret.end(), ')');
////			}
////			else
////				ret.insert(ret.begin(), '$');
////		}
////		cout << ret << endl;
////	}
////}

///�ڹ��ǵ�ʱ��һ�ֳ��õķ�ʽ�ǻ��������������ε������ڣ�ȷ������
///�������ǵ����꣬�����������ǿ��Ͻ�������ϵ���������Ǻ�С�����Ǻ���
///�����������Ϊÿһ��������һ����


///������ֵ�Ĺ淶���ǽ��ڹ�˾��һ�����⣬��������Ҫдһ�������������һ����


///������n��ѡ�ֽ�������������ѡ�ְ�˳����1--n,�������ǻ����һ������A����Ϸ�����n�֣�ÿ�ֻ����һ��ѡ��


///��үү�ĳ������ڴ��ۻ���У� Ŀǰ�������ļ�����һ��k����һ��ȥ��������Ʒ.���ڴ��ۻ���Ⱥܴ�ÿ����ֻ��ȥ����һ�Σ�������һ����Ķ���


///�����������Ƶģ����ҽ�������λ��������Ϊ0.���磬3��5�����Ƶģ����ڣ���������a1,a2,...an������ϣ�����ҳ������������i��