#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
bool isnumandword(char ch)
{
	return (ch <= '9'&&ch >= '0') || (ch <= 'Z'&&ch >= 'A') || (ch <= 'z'&&ch >= 'a');
}
bool isPalindrome(string s)
{
	if (s.size() == 0)
		return true;
	for (auto&e : s)
	{
		if (e <= 'Z'&&e >= 'A')
		{
			e += 32;
		}
	}
	int left = 0;
	int right = s.size() - 1;
	while (left<right)
	{
		if (s[left] == s[right] && isnumandword(s[left]) && isnumandword(s[right]))
		{
			left++;
			right--;
		}
		else if (!isnumandword(s[left]))
		{
			left++;
		}
		else if (!isnumandword(s[right]))
		{
			right--;
		}
		else
		{
			return false;
		}
	}
	return true;
}
};
int main()
{
	string s = "hello world!";
	for (auto e : s)
	{
		cout << e << endl;
	}
	cout<<isPalindrome(s)<<endl;
	return 0;
}
