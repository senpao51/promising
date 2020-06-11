#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <math.h>
using namespace std;
class Container
{
public:
	virtual void volume()= 0;
	virtual void area() = 0;
private:
	 double radius;
};
class Cube :public Container
{
public:
	Cube(double _r) :r(_r)
	{}
	void volume()
	{
		cout << r*r*r << endl;
	}
	void area()
	{
		cout << 6 * r*r << endl;
	}
private:
	double r;
};
class Cylinder :public Container
{
public:
	Cylinder(double _r, double _h):r(_r),height(_h)
	{}
	void volume()
	{
		cout << 3.14*r*r*height << endl;
	}
	void area()
	{
		cout << 2 * 3.14*r*r + 2 * 3.14*r*height << endl;
	}
private:
	double r;
	double height;
};
int main()
{
	Cube cb(10);
	cb.volume();
	cb.area();
	Cylinder cy(5,8);
	cy.volume();
	cy.area();
	return 0;
}
//class Point
//{
//	friend double Distance(const Point& a, const Point& b)
//	{
//		return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
//	}
//public:
//	Point(double _x, double _y) :x(_x), y(_y)
//	{}
//private:
//	double x;
//	double y;
//};
//class Triangle
//{
//	Triangle(Point _a, Point _b, Point _c) :a(_a), b(_b), c(_c)
//	{}
//	void IsTriangle()
//	{
//		double x = Distance(a, b);
//		double y = Distance(b, c);
//		double z = Distance(a, c);
//		if ((x + y > z) && (x + z > y) && (y + z > x))
//			cout << "能构成三角形" << endl;
//		else
//			cout << "不能构成三角形" << endl;
//	}
//private:
//	Point a;
//	Point b;
//	Point c;
//};
//int main()
//{
//	Point p1(3, 4);
//	Point p2(0, 0);
//	cout << Distance(p1, p2) << endl;
//	return 0;
//}
//class Date
//{
//public:
//	Date(int _year = 2020, int _month = 6, int _day = 11) :year(_year), month(_month), day(_day)
//	{}
//	void show()
//	{
//		cout << year << "年" << month << "月" << day << "日" << endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	Date d;
//	d.show();
//	return 0;
//}