#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//void main()
//{
//	//int arr[5] = { 0 };
//
//	decltype(NULL) b;
//	cout << typeid(nullptr).name() << endl;
//}
//class Student
//{
//public:
//
//private:
//	char name[10];//默认私有
//	char sex[3];
//	size_t age;
//	size_t weight;
//	size_t height;
//};
//void main()
//{
//	Student s;//实例化  对象
//	
//}
//class Test
//{
//public:
//	void SetData(int data)
//	{
//		m_data = data;
//	}
//	int GetData()
//	{
//		return m_data;
//	}
//	void ShowData()
//	{
//		cout << "m_data = " << m_data << endl;
//	}
//private:
//	int m_data;
//public:
//	double d;
//};
//void main()
//{
//	Test t;
//	t.SetData(10);
//	int value = t.GetData();
//	t.ShowData();
//	cout << sizeof(t) << endl;
//}
//class CGoods
//{
//public:
//	void RegisterGoods(char*name,size_t count,float price);
//	void SetName(char*name);
//	void SetCount(size_t count);
//	void SetPrice(float price);
//public:
//	char*GetName();
//	size_t GetCount();
//	float GetPrice();
//	float GetTotalPrice();
//private:
//	char name[10];
//	size_t count;
//	float price;
//	float total_price;
//};
//void CGoods::RegisterGoods(char*name, size_t count, float price)
//{
//	strcpy(this->name, name);
//	this->count = count;
//	this->price = price;
//}
//void CGoods::SetName(char*name)
//{
//	strcpy(this->name, name);
//}
//void CGoods::SetCount(size_t count)
//{
//	this->count = count;
//}
//void CGoods::SetPrice(float price)
//{
//	this->price = price;
//}
//char*CGoods::GetName()
//{
//	return this->name;
//}
//size_t CGoods::GetCount()
//{
//	return this->count;
//}
//float CGoods::GetPrice()
//{
//	return this->price;
//}
//float CGoods::GetTotalPrice()
//{
//	return this->count*this->price;
//}
//void main()
//{
//	CGoods t;
//	t.RegisterGoods("C++", 8, 12.5f);
//	cout << "t.name = "<<t.GetName() << endl;
//	cout << "t.count = " << t.GetCount() << endl;
//	cout << "t.price = " << t.GetPrice() << endl;
//	cout << "t.total = " << t.GetTotalPrice() << endl;
//	cout << endl;
//	t.SetName("java");
//	cout << "t.name = " << t.GetName() << endl;
//	cout << "t.count = " << t.GetCount() << endl;
//	cout << "t.price = " << t.GetPrice() << endl;
//	cout << "t.total = " << t.GetTotalPrice() << endl;
//	cout << endl;
//	t.SetCount(10);
//	cout << "t.name = " << t.GetName() << endl;
//	cout << "t.count = " << t.GetCount() << endl;
//	cout << "t.price = " << t.GetPrice() << endl;
//	cout << "t.total = " << t.GetTotalPrice() << endl;
//	cout << endl;
//	t.SetPrice(15.5f);
//	cout << "t.name = " << t.GetName() << endl;
//	cout << "t.count = " << t.GetCount() << endl;
//	cout << "t.price = " << t.GetPrice() << endl;
//	cout << "t.total = " << t.GetTotalPrice() << endl;
//	cout << endl;`
//}
class Test
{
public:
	Test(int a)//构造函数
	{
		cout << "m_data = " <<a<< endl;
	}
	Test(const Test&t)//拷贝构造函数
	{
		cout << "Copy" << endl;
		m_data = t.m_data;
	}
	//赋值语句
	//Test&operator=()
	~Test()//析构函数
	{
		cout << "free" << endl;
	}
private:
	int m_data;
};
void main()
{
	Test t(10);
	Test t1 = t;
}
