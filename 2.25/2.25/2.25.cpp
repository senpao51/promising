#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s = "hello world!";
	string::iterator it = s.begin();
	while (it != s.end())
	{
		*it = 'l';
		cout << *it << endl;
		it++;
	}
	return 0;
}
//void Reverse(string&s, int begin, int end)
//{
//	while (begin<end)
//	{
//		char ch = s[begin];
//		s[begin] = s[end];
//		s[end] = ch;
//		begin++;
//		end--;
//	}
//}
//string reverseStr(string s, int k)
//{
//	int size = s.size();
//	int pos = 0;
//	if (size<k)
//	{
//		Reverse(s, 0, size - 1);
//	}
//	else
//	{
//		while (size>=2*k)
//		{
//			Reverse(s, pos, pos + k - 1);
//			pos += (2*k);
//			size -= (2*k);
//		}
//		if (size<k)
//			Reverse(s, pos, s.size() - 1);
//		else if (size>k&&size<(2*k))
//			Reverse(s, pos, pos + k - 1);
//	}
//	return s;
//}
//int main()
//{
//	const char*str = "krmyfshbspcgtesxnnljhfursyissjnsocgdhgfxubewllxzqhpasguvlrxtkgatzfybprfmmfithphckksnvjkcvnsqgsgosfxc";
//	cout << strlen(str) << endl;
//	string s = "abcdefghijk";
//	string s1 = reverseStr(s,2);
//	cout << s1 << endl;
//	return 0;
//}
//void Reverse(string&s, int begin, int end)
//{
//	while (begin <= end)
//	{
//		char ch = s[begin];
//		s[begin] = s[end];
//		s[end] = ch;
//		begin++;
//		end--;
//	}
//}
//string reverseWords(string s)
//{
//	int size = s.size();
//	int pos = 0;
//	bool flag = true;
//	if (size == 0)
//		return s;
//	for (int i = 0; i<size; i++)
//	{
//		if (s[i] != ' '&&flag)
//		{
//			pos = i;
//			i++;
//			flag = false;
//		}
//		if (s[i] == ' ')
//		{
//			Reverse(s, pos, i-1);
//			flag = true;
//		}
//		else if (i == size - 1)
//		{
//			Reverse(s, pos, i);
//			flag = true;
//		}
//	}
//	return s;
//}
//int main()
//{
//	string s = "Let's take LeetCode contest";
//	string s1 = reverseWords(s);
//	cout << s1 << endl;
//	return 0;
//}
//int main()
//{
//	string s;
//	cin >> s;
//	for (int i = 0; i<s.size(); i++)
//	{
//		if (s.find(s[i]) == s.rfind(s[i]))
//			cout << s[i] << endl;;
//	}
//	cout << "-1" << endl;
//	return 0;
//}