#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	set<string>st;
	st.insert("zaba");
	st.insert("h");
	st.insert("a");
	st.insert("bbb");
	for (const auto&e : st)
		cout << e << endl;
	return 0;
}