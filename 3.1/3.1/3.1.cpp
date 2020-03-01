#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
#include <string>
#include <queue>
using namespace std;
int StrToInt(string str)
{
	int sum = 0;
	int i = 1;
	if (str.size() == 0)
		return 0;
	auto p = str.rbegin();
	while (p != str.rend())
	{
		if ((*p) <= 9 && (*p) >= 0)
		{
			sum += pow(*p, i);
			i *= 10;
		}
		else if ((p == str.rend() - 1) && (*p) == '-')
			sum *= -1;
		else
			return 0;
		p++;
	}
	return sum;
}
int main()
{
	string s = "123";
	cout << StrToInt(s) << endl;
}
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	for (int i = 0; i<s2.size(); i++)
//	{
//		while (1)
//		{
//			size_t pos = s1.find(s2[i]);
//			if (pos != string::npos)
//				s1.erase(s1.begin()+pos);
//			else
//				break;
//		}
//	}
//	cout << s1 << endl;
//	return 0;
//}
//int main()
//{
//	priority_queue<int> Q;
//	Q.push(1);
//	Q.push(2);
//	Q.push(3); 
//	Q.push(4); 
//	Q.push(5); 
//	Q.push(6);
//	Q.push(7);
//	Q.push(8);
//	Q.push(9);
//	/*int n;
//	int a;
//	cin >> n;
//	for (int i = 0; i<3 * n; i++)
//	{
//		cin >> a;
//		Q.push(a);
//	}*/
//	for (int i = 0; i<3; i++)
//	{
//		Q.pop();
//	}
//	int sum1 = Q.top();
//	Q.pop();
//	int sum2 = Q.top();
//	cout << sum1 + sum2 << endl;
//	return 0;
//}
//int main()
//{
//	printf("%5.3s\n","computer");
//	return 0;
//}
