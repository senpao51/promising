#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	Person(string _name, int _age, char _sex) :name(_name), age(_age), sex(_sex)
	{}
	void display()
	{
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "sex = " << sex << endl;
	}
private:
	string name;
	int age;
	char sex;
};

class Student:public Person
{
public:
	Student(string _name, int _age, char _sex, int _grade, float _score) :Person(_name,_age,_sex)
	{
		grade = _grade;
		score = _score;
	}
	void show()
	{
		cout << "grade = " << grade << endl;
		cout << "score = " << score << endl;
	}
	float add(float s)
	{
		score += s;
		return score;
	}
private:
	int grade;
	float score;
};
int main()
{
	string name = "Xu Li";
	int age = 20;
	char sex = 'f';
	int grade = 2;
	float score = 25.4;
	Student stu(name,age,sex,grade,score);
	stu.display();
	stu.show();
	float sum = stu.add(15);
	cout <<"sum = "<< sum << endl;
	return 0;
}