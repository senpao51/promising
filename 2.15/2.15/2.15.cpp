#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int firstUniqChar(string s)
{
	int sz = s.size();
	if (sz == 0)
		return -1;
	for (int i = 0; i<sz - 2; i++)
	{
		char ch1 = s[i];
		bool flag = true;
		for (int j = i + 1; j < sz - 1; j++)
		{
			char ch2 = s[j];
			if (ch1 == ch2)
			{
				flag = false;
				break;
			}
				
		}
		if (flag)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	string s = "aadadaad";
	cout << firstUniqChar(s) << endl;
	return 0;
}

//int main()
//
//{
//
//	string s1 = "hello world";
//
//	string s2 = "change world";
//
//	string::iterator it = s1.begin();
//
//	swap(s1, s2);
//
//	while (it != s1.end())
//
//		cout << *it;
//
//	cout << endl;
//
//}
//int main()
//
//{
//
//	string str = "Hello Bit.";
//
//	string::iterator it = str.begin();
//
//	while (it != str.end())
//
//	{
//
//		if (*it != ' ')
//
//			cout << *it;
//
//		else
//
//			str.erase(it);
//
//		it++;
//
//	}
//
//	return 0;
//
//}
//int main()
//{
//	string strText = "How are you?";
//
//	string strSeparator = " ";
//
//	string strResult;
//
//	int size_pos = 0;
//
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//		size_prev_pos = ++size_pos;
//
//	}
//
//	if (size_prev_pos != strText.size())
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//	}
//
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	string s;
//	cout << s << endl;
//	//cin >> s;
//	//cout << s << endl;
//	getline(cin,s);
//	cout << s << endl;
//
//	return 0;
//}
//int main()
//{
//	string s1 = "senpaolove";
//	string s2 = "hello world";
//	cout << (s1 != s2) << endl;
//	return 0;
//}
//int main()
//{
//	string s1 = "senpaolove";
//	string s2 = "hello world";
//	const char*str = "abcdef";
//	size_t pos = s1.find_first_of(s2,3);
//	cout << pos << endl;
//}
int main()
{
	string s = "hello";
	s[2] = 'x';
	s.push_back('h');
	cout << s << endl;
	const char* str = "senpao";
	while (*str != '\0')
	{
		s.push_back(*str);
		str++;
	}
	cout << s << endl;
	s.append("love");
	cout << s << endl;
	s += "'\"'";
	cout << s << endl;
	char*arr = new char[20];
	strcpy(arr, s.c_str());
	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}
	cout << endl;
	//hexlohsenpaolove'"'
	s.append("love");
	size_t pos1 = s.find("ove",10);
	if (pos1 != string::npos)
	{
		cout << pos1 << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	size_t pos2 = s.rfind("h",3);
	if (pos2 != string::npos)
	{
		cout << pos2 << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	string s2 = s.substr(3);
	cout << s2 << endl;
	string s3 = "2w56.789.0@qq.com";
	size_t pos3 = s3.find('@');
	string s4 = s3.substr(pos3,3);
	cout << s4 << endl;
	size_t pos5 = s3.find('.');
	if (pos5 == string::npos)
	{
		cout << "error" << endl;
		return 0;
	}
	size_t pos6 = s3.find('.',pos5+1);
	string s5 = s3.substr(pos5+1,pos6-pos5);
	cout << s5 << endl;
	return 0;
}
//int main()
//{
//	string s("hello");
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s[i];
//	}
//	cout << endl;
//	for (auto&x : s)
//	{
//		cout << x;
//	}
//	cout << endl;
//	string::iterator it = s.end()-1;模拟reverse_iterator的做法
//	while (it != s.begin())
//	{
//		cout << *it;
//		it--;
//	}
//	cout << *it << endl;
//	string::reverse_iterator rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit;
//		rit++;
//	}
//	cout << endl;
//}
//int main()
//{
//	string s = "hello";
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s.empty() << endl;
//	cout << s << endl;
//	//s.clear();
//	cout << s << endl;
//	cout << s.capacity() << endl;
//	s.reserve(10);
//	cout << s.capacity() << endl;
//	s.resize(20,'a');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//}
//int main()
//{
//	string s1;
//	cout << s1 << endl;
//	string s2("h");
//	cout << s2 << endl;
//	string s3 = "hello";
//	cout << s3 << endl;
//	string s4 = s3;
//	cout << s4 << endl;
//	return 0;
//}
//int main()
//{
//	string s1(10, ' ');
//	cout <<"s1 = "<< s1 << endl;
//	string s2(s1);
//	cout << "s2 = " << s2 << endl;
//	string s3 = s2;
//	cout << "s3 = " <<s3<<endl;
//	return 0;
//}

