#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string AddString(string s1, string s2)
{
	string tmp = "";
	int value1 = 0;
	int value2 = 0;
	int next = 0;
	int end1 = s1.size() - 1;
	int end2 = s2.size() - 1;
	while (end1 >= 0 || end2 >= 0)
	{
		if (end1 >= 0)
			value1 = s1[end1--] - '0';
		else
			value1 = 0;
		if (end2 >= 0)
			value2 = s2[end2--] - '0';
		else
			value2 = 0;
		int value = value1 + value2 + next;
		if (value>10)
		{
			value -= 10;
			next = 1;
		}
		else
		{
			next = 0;
		}
		tmp.insert(tmp.begin(), value + '0');
	}
	if (next == 1)
		tmp.insert(tmp.begin(), '1');
	return tmp;
}
int main()
{
	vector<string>v;
	v.resize(3);
	while (cin >> v[0] >> v[1] >> v[2])
	{
		sort(v.begin(), v.end());
		string s = AddString(v[0], v[1]);
		if (s>v[2])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
