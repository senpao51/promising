#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
bool matching(string s1, string s2)
{
	int start1 = 0;
	int start2 = 0;
	while (start1<s1.size() && start2<s2.size())
	{
		if ((s1[start1] == s2[start2]) || s1[start1] == '?')
		{
			start1++;
			start2++;
		}
		else if (s1[start1] == '*')
		{
			while (s1[start1] != s2[start2] && start2<s2.size())
				start2++;
		}
		else if (s1[start1] != s2[start2] && (s1[start1] != '*'&&s1[start1] != '?'))
			return false;
	}
	if (start1>start2)
		return false;
	return true;
}
int main()
{
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		if (matching(s1, s2))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
