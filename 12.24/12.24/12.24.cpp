#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Test
{
	friend ostream& operator<<(ostream&out, const Test&t);
public:
	Test(int data = 10) :m_data(data)
	{}
	bool operator>(const Test&t)
	{
		return m_data > t.m_data;
	}
private:
	int m_data;
};
ostream& operator<<(ostream&out, const Test&t)
{
	out << t.m_data;
	return out;
}
template<typename Type>
Type Max(Type a, Type b)
{
	return a > b ? a : b;
}
int main()
{
	Test t1;
	Test t2(20);
	cout << Max(t1, t2) << endl;
}

//template <typename Type1,typename Type2>
//void Add(Type1 a, Type2 b)
//{
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//}
//void main()
//{
//	int a = 10;
//	double d = 12.34;
//	Add(a,d);
//}
