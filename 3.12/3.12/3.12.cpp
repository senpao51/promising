#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <iostream>
#include <string>
using namespace std;
class A
{
public:
	A()
	{
		cout << typeid(this).name() << endl;
	}
};
int main()
{
	A b;
	return 0;
}
//class A
//{
//public:
//	A()
//	{
//		cout << "A::A" << endl;
//	}
//	~A()
//	{
//		cout << "A::~A" << endl;
//	}
//	int m_a = 1;
//};
//class B :virtual public A
//{
//public:
//	B()
//	{
//		cout << "B::B" << endl;
//	}
//	~B()
//	{
//		cout << "B::~B" << endl;
//	}
//	int m_b = 2 ;
//};
//class C :virtual public A
//{
//public:
//	C()
//	{
//		cout << "C::C" << endl;
//	}
//	~C()
//	{
//		cout << "C::~C" << endl;
//	}
//	int m_c = 3;
//};
//class D :public B, public C
//{
//public:
//	D()
//	{
//		cout << "D::D" << endl;
//	}
//	~D()
//	{
//		cout << "D::~D" << endl;
//	}
//	int m_d = 4;
//};
//int main()
//{
//	D d;
//	//cout << sizeof(d) << endl;
//	return 0;
//}
//class A
//{
//public:
//	A()
//	{
//		cout << "A::A" << endl;
//	}
//	~A()
//	{
//		cout << "A::~A" << endl;
//	}
//private:
//	int m_a;
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "B::B" << endl;
//	}
//	~B()
//	{
//		cout << "B::~B" << endl;
//	}
//private:
//	int m_b;
//};
//class C :public A, virtual public B
//{
//public:
//	C()
//	{
//		cout << "C::C" << endl;
//	}
//	~C()
//	{
//		cout << "C::~C" << endl;
//	}
//private:
//	int m_c;
//};
//int main()
//{
//	C c;
//	return 0;
//}
//class A
//{
//public:
//	A()
//	{
//		cout << "A::A" << endl;
//	}
//	~A()
//	{
//		cout << "A::~A" << endl;
//	}
//	int m_a;
//};
//class B:public A
//{
//public:
//	B()
//	{
//		cout << "B::B" << endl;
//	}
//	~B()
//	{
//		cout << "B::~B" << endl;
//	}
//	int m_b;
//};
//class C:public A
//{
//public:
//	C()
//	{
//		cout << "C::C" << endl;
//	}
//	~C()
//	{
//		cout << "C::~C" << endl;
//	}
//	int m_c;
//};
//class D:public B,public C
//{
//public:
//	D()
//	{
//		cout << "D::D" << endl;
//	}
//	~D()
//	{
//		cout << "D::~D" << endl;
//	}
//	int m_d;
//};
//int main()
//{
//	D d;
//	d.m_a = 10;
//	return 0;
//}
//int GetPwdSecurityLevel(string s)
//{
//	if (s.size() == 0)
//		return 0;
//	int grade = 0;
//	int numcount = 0;
//	int markcount = 0;
//	bool AZ = false;
//	bool az = false;
//	if (s.size() <= 4)
//		grade = 4;
//	else if (s.size() >= 5 && s.size() <= 7)
//		grade = 10;
//	else
//		grade = 25;
//	for (int i = 0; i<s.size(); i++)
//	{
//		if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))
//		{
//			if ((s[i] >= 'a'&&s[i] <= 'z'))
//				az = true;
//			else
//				AZ = true;
//		}
//		if (s[i] >= '0'&&s[i] <= '9')
//			numcount++;
//		if ((s[i] >= 33 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
//			markcount++;
//	}
//	if (AZ || az)
//	{
//		if (AZ&&az)
//			grade += 20;
//		else
//			grade += 10;
//	}
//	if (numcount)
//	{
//		if (numcount == 1)
//			grade += 10;
//		else
//			grade += 20;
//	}
//	if (markcount)
//	{
//		if (markcount == 1)
//			grade += 10;
//		else
//			grade += 25;
//	}
//	if (az&&AZ&&numcount&&markcount)
//		grade += 5;
//	else if ((az || AZ) && numcount&&markcount)
//		grade += 3;
//	else if ((az || AZ) && numcount)
//		grade += 2;
//	return grade;
//}
//int main()
//{
//	string s;
//	cin >> s;
//	int grade = GetPwdSecurityLevel(s);
//	if (grade >= 90)
//		cout << "VERY_SECURE" << endl;
//	else if (grade >= 80)
//		cout << "SECURE" << endl;
//	else if (grade >= 70)
//		cout << "VERY_STRONG" << endl;
//	else if (grade >= 60)
//		cout << "STRONG" << endl;
//	else if (grade >= 50)
//		cout << "AVERAGE" << endl;
//	else if (grade >= 25)
//		cout << "WEAK" << endl;
//	else
//		cout << "VERY_WEAK" << endl;
//}
//int main()
//{
//	int x = 9999;
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	cout << count << endl;
//}
//class A
//{
//public:
//	A() :m_iVal(0){ test(); }
//	virtual void func() { std::cout << m_iVal << endl; }
//	void test(){ func(); }
//public:
//	int m_iVal;
//};
//class B : public A
//{
//public:
//	B(){ test(); }
//	virtual void func()
//	{
//		++m_iVal;
//		std::cout << m_iVal << endl;
//	}
//};
//int GetCD(int a, int b)
//{
//	int ret = a%b;
//	while (ret != 0)
//	{
//		a = b;
//		b = ret;
//		ret = a%b;
//	}
//	return b;
//}
//int main(int argc, char* argv[])
//{
//	A*p = new B;
//	p->test();
//	cout<<GetCD(6,36)<<endl;
//	return 0;
//}
//class A
//{
//public:
//	void show()
//	{
//		cout << "A::show()" << endl;
//	}
//	void show(int)
//	{
//		cout << "A::show(int)" << endl;
//	}
//private:
//	int m = 0;
//};
//class B :public A
//{
//public:
//	void show()
//	{
//		cout << "B::show()" << endl;
//	}
//private:
//	int n = 0;
//};
//int main()
//{
//	B b;
//	b.show(0);
//	return 0;
//}
//int main()
//{
//	int*p;
//	return 0;
//}
//class A
//{
//	friend void show(const A&a,const B&b);
//private:
//	int m = 0;
//};
//class B :public A
//{
//private:
//	int n = 0;
//};
//void show(const A&a, const B&b)
//{
//	cout << "m = " << a.m << endl;
//	cout << "n = " << b.n << endl;
//
//}
//int main()
//{
//	A a;
//	B b;
//	show(a,b);
//	return 0;
//}
//class B
//{
//	friend void show(const B&b,const A&c);
//private:
//	int a = 0;
//};
//class A :public B
//{
//private:
//	int m = 0;
//};
//void show(const B&b,const A&c)
//{
//	cout <<"a = "<<b.a<< endl;
//	cout << "m = " << c.m << endl;
//
//}
//int main()
//{
//	B b;
//	A a;
//	show(b,a);
//	return 0;
//}