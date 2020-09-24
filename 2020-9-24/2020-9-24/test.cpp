#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int replaceBits(int src, int dst, int bitIndex, int bitCount)
{
	if (bitIndex>31 || bitCount <= 0)
		return dst;
	int a = 1;
	vector<int>v;
	while (bitIndex--)
	{
		src >>= 1;
	}
	while (bitCount--)
	{
		int tmp = src & 1;
		v.push_back(tmp);
		src >>= 1;
	}
}
//int comboOf(int cash)
//{
//	int n = 0;
//	for (int i = 0; i<=cash; i++)
//	{
//		for (int j = 0; j<=cash / 2; j++)
//		{
//			for (int k = 0; k<=cash / 5; k++)
//			{
//				if (i * 1 + 2 * j + k * 5 == cash)
//					n++;
//			}
//		}
//	}
//	return n;
//}
int main()
{
	int a = 45 & 4;
	cout << a << endl;
	cout << replaceBits(45,83,1,3) << endl;
	return 0;
}