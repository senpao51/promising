#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
//#include <functional>
using namespace std;
struct Goods
{
	string name;
	double price;
};
bool Compare(const Goods g1, const Goods g2)
{
	return g1.price<g2.price;
}
template<class T>
struct Less
{
	bool operator()(const Goods g1, const Goods g2)
	{
		return g1.price < g2.price;
	}
};
int main()
{
	Goods gd[] = { { "Æ»¹û", 3.14 }, { "Ïã½¶", 2.5 }, {"éÙ×Ó",2.8} };
	int n = sizeof(gd) / sizeof(gd[0]);
	sort(gd,gd+n,Compare);
	for (const auto &e : gd)
		cout << e.name << ":" << e.price << endl;
	return 0;
}