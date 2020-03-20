#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
#include<iostream>
#include<vector>
using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n == 0 || n == 1 || n == 2)
//		{
//			cout << -1 << endl;
//		}
//		vector<int> k(n * 2 + 1, 0);
//		k[n - 1] = k[n] = k[n + 1] = 1;
//		int len = 3;
//		while (len <= n)
//		{
//			vector<int> temp(n * 2 + 1, 0);
//			for (int i = n - len + 1; i<n + len; i++)
//			{
//				temp[i] = k[i - 1] + k[i] + k[i + 1];
//			}
//			k = temp;
//			len++;
//		}
//		for (int i = 0; i<k.size(); i++)
//		{
//			if (k[i] != 0 && k[i] % 2 == 0)
//			{
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//string AddString(string s1, string s2)
//{
//	if (s1.size() == 0)
//		return s2;
//	if (s2.size() == 0)
//		return s1;
//	string tmp;
//	auto p1 = s1.rbegin();
//	auto p2 = s2.rbegin();
//	int ret = 0;
//	char ch;
//	bool flag = false;
//	while (p1 != s1.rend() && p2 != s2.rend())
//	{
//		if (*p1 + *p2 >= 10)
//		{
//			ret = (*p1-'0' + *p2-'0') - 10;
//			flag = true;
//		}
//		ch = ret + '0';
//		if (tmp.size() == 0)
//			tmp += ch;
//		if (flag)
//		{
//			tmp.insert(tmp.begin(), '1');
//			flag = false;
//		}
//		p1++;
//		p2++;
//	}
//	if (p1 == s1.rend())
//	{
//		while (p2 != s2.rend())
//		{
//			if (*p2-'0' + tmp[0]-'0' >= 10)
//			{
//				ret = *p2-'0' + tmp[0]-'0' - 10;
//				ch = ret + '0';
//				tmp[0] = ch;
//				tmp.insert(tmp.begin(), '1');
//			}
//			else
//			{
//				tmp[0] = *p2-'0' + tmp[0]-'0' + '0';
//			}
//			p2++;
//		}
//	}
//	if (p2 == s2.rend())
//	{
//		while (p1 != s1.rend())
//		{
//			if (*p1-'0' + tmp[0]-'0' >= 10)
//			{
//				ret = *p1-'0' + tmp[0]-'0' - 10;
//				ch = ret + '0';
//				tmp[0] = ch;
//				tmp.insert(tmp.begin(), '1');
//			}
//			else
//			{
//				tmp[0] = *p1-'0' + tmp[0]-'0' + '0';
//			}
//			p1++;
//		}
//	}
//	return tmp;
//}
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	cout << AddString(s1, s2) << endl;
//}
//int main()
//{
//	//long long a = 1, b = 2, c = 3;
//	//printf("%d %d %d\n",a,b,c);
//	string s = "hello";
//	s.insert(s.begin(), 'c');
//	cout << s << endl;
//	int a = 5;
//	char ch = a + '0';
//	s.push_back(ch);
//	cout << s << endl;
//	return 0;
//}
