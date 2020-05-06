#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

template<typename T>
class AVLTree;

template<typename T>
class AVLNode
{
	friend AVLTree<T>;
public:
	AVLNode(const T&val = T(), AVLNode<T>*_left = nullptr, AVLNode<T>*_right = nullptr)
		:data(val), left(_left), right(_right), bf(0)
	{}
private:
	T          data;
	AVLNode<T>*left;
	AVLNode<T>*right;
	int bf;    // 0  1 -1  2  -2
};

template<typename T>
class AVLTree
{
public:
	AVLTree() :root(nullptr)
	{}
public:
	bool Insert(const T&val)
	{
		return Insert(root,val);
	}
protected:
	bool Insert(AVLNode<T>*&t, const T&val);
private:
	AVLNode<T>*root;
};

template<typename T>
bool AVLTree<T>::Insert(AVLNode<T>*&t, const T&val)
{
	AVLNode<T>*p = t;
	AVLNode<T>*ptr = nullptr;
	stack<AVLNode<T>*>st;
	while (p != nullptr)
	{
		pr = p;
		st.push(pr);
		if (p->data > val)
			p = p->left;
		else
			p = p->right;
	}
	p = new AVLNode(val);
	if (ptr == nullptr)
	{
		t = p;
		return true;
	}
	while (!st.empty())
	{
		ptr = st.top();
		st.pop();
		if (ptr->data > p->data)
			ptr->bf++;
		else if (ptr->data < p->data)
			ptr->bf--;
		if (ptr->bf == 0)
			break;

	}
}
int main()
{
	AVLTree<int>avl;
	return 0;
}