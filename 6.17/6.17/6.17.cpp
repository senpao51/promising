#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
	map<char, char>dic;
	dic.emplace('A', '2');
	dic.emplace('B', '2');
	dic.emplace('C', '2');
	dic.emplace('D', '3');
	dic.emplace('E', '3');
	dic.emplace('F', '3');
	dic.emplace('G', '4');
	dic.emplace('H', '4');
	dic.emplace('I', '4');
	dic.emplace('J', '5');
	dic.emplace('K', '5');
	dic.emplace('L', '5');
	dic.emplace('M', '6');
	dic.emplace('N', '6');
	dic.emplace('O', '6');
	dic.emplace('P', '7');
	dic.emplace('Q', '7');
	dic.emplace('R', '7');
	dic.emplace('S', '7');
	dic.emplace('T', '8');
	dic.emplace('U', '8');
	dic.emplace('V', '8');
	dic.emplace('W', '9');
	dic.emplace('X', '9');
	dic.emplace('Y', '9');
	dic.emplace('Z', '9');
	int n;
	while (cin >> n)
	{
		string s;
		set<string>st;
		for (int i = 0; i<n; i++)
		{
			cin >> s;
			string p = "";
			for (const auto&e : s)
			{
				if (isdigit(e))
					p += e;
				else if (isupper(e))
					p += dic[e];
			}
			if (p.size() != 7)
				continue;
			p = p.substr(0, 3) + "-" + p.substr(3, 4);
			st.insert(p);
		}
		for (const auto e : st)
			cout << e << endl;
		cout << endl;
	}
}
//#include <iostream>
//#include <map>
//using namespace std;
//void print(map<int, int>&mp)
//{
//	auto it = mp.begin();
//	while (it != mp.end())
//	{
//		cout << it->second << " ";
//		it++;
//	}
//	cout << endl;
//}
//void deleteValueFromMap(map<int, int>&mp)
//{
//	auto it = mp.begin();
//	while (it != mp.end())
//	{
//		if (it->second % 5 == 0)
//			it = mp.erase(it);
//		else
//			it++;
//	}
//}
//
//int main()
//{
//	map<int, int>mp;
//	for (int i = 0; i < 21; i++)
//	{
//		mp[i] = i;
//	}
//	print(mp);
//	deleteValueFromMap(mp);
//	print(mp);
//
//	return 0;
//}