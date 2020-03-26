#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		if (s.size() == 0)
			cout << "-1" << endl;
		else
		{
			char ch = '\0';
			for (int i = 0; i<s.size(); i++)
			{
				auto p1 = s.find(s[i]);
				auto p2 = s.rfind(s[i]);
				if (p1 == p2)
				{
					ch = s[i];
					break;
				}
			}
			if (ch != '\0')
				cout << ch << endl;
			else
				cout << "-1" << endl;
		}
	}
	return 0;
}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s = "helol";
//	return 0;
//}
