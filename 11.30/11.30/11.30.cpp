#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	printf("%d ",a);
}
//#include <iostream>
//using namespace std;
//union S
//{
//	int a;
//	char ch;
//};
//int fun()
//{
//	S s;
//	s.a = 200;
//	return s.ch;
//}
//void main()
//{
//	cout << fun()<< endl;
//
//}
//int fun()
//{
//	int a = 200;
//	return (char)a;
//}
//void main()
//{
//	cout << fun() << endl;
//}
//class String
//{
//public:
//	String(const char*str="hello world")
//	{
//		m_str = (char*)malloc(strlen(str) + 1);
//		strcpy(m_str,str);
//	}
//	String(const String&s)//String(String*this,const Sting&s)
//	{
//		this->m_str = (char*)malloc(strlen(s.m_str)+1);
//		strcpy(m_str, s.m_str);
//	}
//	String&operator=(const String&s)//String&operate=(String*this,const String&s)
//	{
//		if (this != &s)
//		{
//			m_str = (char*)malloc(strlen(s.m_str) + 1);
//			strcpy(m_str, s.m_str);
//		}
//		return *this;
//	}
//	~String()
//	{
//		free(m_str);
//		m_str = NULL;
//	}
//private:
//	char*m_str;
//};
//void main()
//{
//	String s1;
//	cout << typeid(s1).name() << endl;
//	String s2(s1);
//	String s3("hello bit");
//	s3 = s1;
//}

//class test
//{
//public:
//	test()//�޲εĹ��캯��
//	{
//		strcpy(name, "senpao");
//		strcpy(sex, "nan");
//		age = 20;
//	}
//	test(char*name)//ȱʡ�����Ĺ��캯��
//	{
//		strcpy(this->name, name);
//		strcpy(sex, "nan");
//		age = 15;
//	}
//	test(const test&t)//�������캯��
//	{
//		strcpy(name, t.name);
//		strcpy(sex, t.sex);
//		age = t.age;
//	}
//	~test()//��������
//	{
//		strcpy(name, "");
//		strcpy(sex, "");
//		age = 0;
//	}
//private:
//	char name[20];
//	char sex[5];
//	int age;
//};
//void main()
//{
//	test t1;
//	test t2("lisi");
//	test t3 = t1;
//	test t4(t1);
//}