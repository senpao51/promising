#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
using namespace std;
template<typename T>
class ListNode
{
public:
	ListNode(const T&value = T()) :Prev(nullptr), Next(nullptr), Val(value)
	{}
	~ListNode()
	{}
public:
	ListNode<T>*Prev;
	ListNode<T>*Next;
	T Val;
};
template<typename T>
class List
{
public:
	size_t size()const
	{
		return Size;
	}
	bool empty()const
	{
		return Size == 0;
	}
public:
	template<typename T>
	class ListIterator
	{
		ListIterator() :Ptr(nullptr)
		{}
	private:
		ListNode<T>*Ptr;
	};
public:
	List() :Head(_BuyNode()), Size(0)
	{}
	ListNode<T>* _BuyNode(const T&value = T())
	{
		ListNode<T>*p = new ListNode<T>;
		p->Next = p->Prev = p;
		p->Val = value;
		return p;
	}
private:
	ListNode<T>* Head;
	size_t Size;
};

int main()
{
	List<int>t;
	cout << t.size() << endl;
	return 0;
}
//int main()
//{
//	list<int>t = { 1, 2, 3, 4, 5 };
//	auto p = t.begin();
//	cout << *p << endl;
//	//t.erase(p);
//	//cout << *p << endl;
//	p = t.erase(p);
//	cout << *p << endl;
//	for (auto e : t)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	list<int>t1(arr,arr+len);
//	t1.push_back(100);
//	t1.push_front(20);
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	t1.pop_back();
//	t1.pop_front();
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	auto p = find(t1.begin(),t1.end(),4);
//	t1.insert(p,100);
//	t1.insert(p, 5, 50);
//
//	list<int>t2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	auto p1 = find(t1.begin(), t1.end(), 4);
//	auto p2 = find(t1.begin(), t1.end(), 8);
//	t1.insert(p, p1, p2);
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//
//	t1.erase(p1);
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	list<int>t3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	auto p4 = find(t3.begin(), t3.end(), 3);
//	auto p5 = find(t3.begin(), t3.end(), 6);
//	auto p6 = find(t3.begin(), t3.end(), 9);
//	t3.erase(p6);
//	for (auto e : t3)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl; 
//	t3.erase(p4, p5);
//	for (auto e : t3)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	/*t1.erase(p2, p);
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;*/
//	list<int>t5 = { 1, 2, 3, 4, 5 };
//	list<int>t6 = { 6, 7, 8, 9, 10 };
//	for (auto e : t5)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl; 
//	t5.swap(t6);
//	for (auto e : t5)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	list<int>t1(arr,arr+len);
//	cout << t1.front() << endl;
//	cout << t1.back() << endl;
//	list<int>::iterator it = t1.begin();
//	while (it!= t1.end())
//	{
//		cout << *it << "-->";
//		it++;
//	}
//	cout << "over" << endl;
//	list<int>::reverse_iterator rit = t1.rbegin();
//	while (rit != t1.rend())
//	{
//		cout << *rit << "-->";
//		rit++;
//	}
//	cout << "over" << endl;
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout << "over" << endl;
//	return 0;
//}
//int main()
//{
//	list<int>t1(10, 2);
//	cout << t1.size() << endl;
//	t1.resize(5);
//	cout << t1.size() << endl;
//	cout << t1.empty() << endl;
//	//t1.clear();
//	cout << t1.size() << endl;
//	for (auto e : t1)
//	{
//		cout << e << "-->";
//	}
//	cout <<"over"<< endl;
//	return 0;
//}
//int main()
//{
//	list<int>t1;
//	list<int>t2(10);
//	list<int>::iterator it1 = t1.begin();
//	while (it1 != t1.end())
//	{
//		cout << *it1 << "-->";
//		it1++;
//	}
//	cout <<"over"<<endl;
//	list<int>::iterator it2 = t2.begin();
//	while (it2 != t2.end())
//	{
//		cout << *it2 << "-->";
//		it2++;
//	}
//	cout << "over" << endl;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	list<int>t3(arr, arr + len);
//	list<int>::iterator it3 = t3.begin();
//	while (it3 != t3.end())
//	{
//		cout << *it3 << "-->";
//		it3++;
//	}
//	cout <<"over"<<endl;
//	list<int>t4=t3;
//	list<int>::iterator it4 = t4.begin();
//	while (it4 != t4.end())
//	{
//		cout << *it4 << "-->";
//		it4++;
//	}
//	cout << "over" << endl;
//	auto p = find(t4.begin(),t4.end(),4);
//	list<int>t5(p, t4.end());
//	list<int>::iterator it5 = t5.begin();
//	while (it5 != t5.end())
//	{
//		cout << *it5 << "-->";
//		it5++;
//	}
//	cout << "over" << endl;
//	return 0;
//}
