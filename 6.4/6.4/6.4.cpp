#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string>v;
		v.resize(n);
		cin.ignore();
		for (int i = 0; i<n; i++)
		{
			getline(cin, v[i]);
			if ((string::npos != v[i].find(',')) || (string::npos != v[i].find(' ')))
			{
				v[i].insert(v[i].begin(), '"');
				v[i].insert(v[i].end(), '"');
			}
			cout << v[i];
			if (i != n - 1)
				printf(", ");
		}
		cout << endl;
	}
	return 0;
}
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<string>v;
//	v.resize(3);
//	for (auto e : v)
//	{
//		getline(cin,e);
//		cout << e << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string>v;
//		v.resize(n);
//		for (int i = 0; i<n; i++)
//		{
//			getline(cin, v[i]);
//			auto p = 0;
//			if ((string::npos != v[i].find(',')) && (string::npos != v[i].find(' ')))
//			{
//				v[i].insert(v[i].begin(), '"');
//				v[i].insert(v[i].end(), '"');
//			}
//			cout << v[i];
//			printf(", ");
//		}
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	return 0;
//}