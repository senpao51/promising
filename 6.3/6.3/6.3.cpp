#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int from, to;
	long long Fib_array[80] = { 1, 1 };
	for (int i = 2; i<80; i++)
	{
		Fib_array[i] = Fib_array[i - 1] + Fib_array[i - 2];
	}
	while (cin >> from >> to)
	{
		int sum = 0;
		for (int i = from; i <= to; i++)
		{
			sum += Fib_array[i - 1];
		}
		cout << sum << endl;
	}
	return 0;
}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	string t;
//	while (cin >> s >> t)
//	{
//		int count = 0;
//		auto p = 0;
//		while ((p = s.find(t)) != string::npos)
//		{
//			count++;
//			string tmp(s.begin() + p + t.size(), s.end());
//			s = tmp;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	string t;
//	while (cin >> s >> t)
//	{
//		int count = 0;
//		size_t pos = 0;
//		while (pos != string::npos)
//		{
//			pos = s.find(t);
//			count++;
//			string tmp(s.begin() + pos+t.size(), s.end());
//			s = tmp;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	string t;
//	while (cin >> s >> t)
//	{
//		int count = 0;
//		while (s.find(t) != string::npos)
//		{
//			count++;
//			string tmp(s.begin() + t.size(), s.end());
//			s = tmp;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    string t;
//    while(cin>>s>>t)
//    {
//        int count = 0;
//        while(s.find(t)!=string::npos)
//        {
//            count++;
//			
//			cout << s << endl;
//        }
//        cout<<count<<endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;

//int main()
//{
//	string s = "hello bit";
//	auto p = s.find("bit");
//	cout << p << endl;
//	string t(s.begin()+1,s.end());
//	cout << t << endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s = "hello bit";
//	auto p = s.find("bit");
//	cout << p << endl;
//	string t(s.begin()+1,s.end());
//	cout << t << endl;
//	return 0;
//}

//int main()
//{
//	auto_ptr<int>v;
//	return 0;
//}