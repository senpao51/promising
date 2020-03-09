#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
class Person
{
public :
	Person(const char* name = "peter")
		: _name(name)
	{
		cout << "Person()" << endl;
	}
	Person(const Person& p)
		: _name(p._name)
	{
		cout << "Person(const Person& p)" << endl;
	}
	Person& operator=(const Person& p)
	{
		cout << "Person operator=(const Person& p)" << endl;
		if (this != &p)
			_name = p._name;
		return *this;
	}
	~Person()
	{
		cout << "~Person()" << endl;
	}
protected:
	string _name; // ÐÕÃû
};
class Student : public Person
{
public:
	Student(const char* name, int num)
		: Person(name)
		, _num(num)
	{
		cout << "Student()" << endl;
	}
	Student(const Student& s)
		: Person(s)
		, _num(s._num)
	{
		cout << "Student(const Student& s)" << endl;
	}
	Student& operator = (const Student& s)
	{
		cout << "Student& operator= (const Student& s)" << endl;
		if (this != &s)
		{
			Person::operator =(s);
				_num = s._num;
		}
		return *this;
	}
	~Student()
	{
		cout << "~Student()" << endl;
	}
protected:
	int _num; //Ñ§ºÅ
};
int main()
{
	Student s1("hello",15);
	Student s2("ok",18);
	s1 = s2;
	return 0;
}
//class A
//{
//
//};
//class B :protected A
//{};
//int main()
//{
//	B b;
//	A a;
//	return 0;
//}
//int removeDuplicates(vector<int>nums) 
//{
//	if (nums.size() == 0) return 0;
//	int i = 0;
//	for (int j = 1; j < nums.size(); j++) 
//	{
//		if (nums[j] != nums[i]) 
//		{
//			i++;
//			nums[i] = nums[j];
//		}
//	}
//	return i + 1;
//}
//int main()
//{
//	vector<int>v = {1,2,2,3,3,4,5,5,6,6,7};
//	cout << removeDuplicates(v) << endl;
//	return 0;
//}
//int main()
//{
//	float a = 1.25;
//	printf("%5.1f\n",a);
//	printf("%.4f\n",a);
//	printf("%4.3f\n",a);
//	/*char*s = "hello world";
//	printf("%5.3s\n",s);
//	printf("%6.7s\n",s);
//	printf("%.2s\n",s);*/
//	/*int a = 123;
//	printf("%.4d\n",a);
//	printf("%5d\n", a);
//	printf("%5.4d\n", a);*/
//	return 0;
//}
