#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int minArray(vector<int>& numbers)
{
	int small = 0;
	int big = numbers.size() - 1;
	int index = small;
	while (numbers[small] >= numbers[big])
	{
		if (big - small == 1)
		{
			index = big;
			break;
		}
		index = (big + small) / 2;
		if (numbers[index] == numbers[small] && numbers[index] == numbers[big])
		{
			for (int i = small; i<big; i++)
			{
				if (numbers[i]<numbers[i + 1])
					index = i;
			}
			break;
		}
		else if (numbers[small] <= numbers[index])
			small = index;
		else if (numbers[big] >= numbers[index])
			big = index;
	}
	return numbers[index];
}
int main()
{
	vector<int>v = {10,11,4,5,6,7,8,9};
	cout << minArray(v) << endl;
	return 0;
}
//int main()
//{
//	string s;
//	getline(cin, s);
//	auto p = s.begin();
//	auto q = s.begin();
//	auto tmp = s.begin();
//	while (p != s.end())
//	{
//		if ((*p) == '"')
//		{
//			q = p + 1;
//			p++;
//			while ((*p) != '"')
//				p++;
//			tmp = p - 1;
//			p++;
//			string str(q, tmp);
//			cout << str << endl;
//		}
//		else
//		{
//			q = p;
//			while (*p != ' ' && p != s.end())
//				p++;
//			if (*p == ' ')
//			{
//				tmp = p - 1;
//				p++;
//				string str(q, tmp);
//				cout << str << endl;
//			}
//			else
//			{
//				string str(q, p);
//				cout << str << endl;
//			}
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	auto p = s.begin();
//	while (p != s.end())
//	{
//		if (*p == '¡°')
//			cout << "<" << endl;
//
//	}
//	return 0;
//}
