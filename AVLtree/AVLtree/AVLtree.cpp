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
	friend class AVLTree<T>;
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
		if (val == p->data)
			return false;
		ptr = p;
		st.push(ptr);
		if (p->data > val)
			p = p->left;
		else
			p = p->right;
	}
	p = new AVLNode<T>(val);
	if (ptr == nullptr)
	{
		t = p;
		return true;
	}
	if (ptr->data > val)
		ptr->left = p;
	else
		ptr->right = p;
	while (!st.empty())
	{
		ptr = st.top();
		st.pop();
		if (p = ptr->left)
			ptr->bf--;
		else
			ptr->bf++;
		if (ptr->bf == 0)
			break;
		else if (ptr->bf == 1 || ptr->bf == -1)
			p = ptr;
		else
		{
			if (ptr->bf > 0)
			{
				if (p->bf > 0)
				{
					//左单旋        \\     /

					cout << "RotateL" << endl;
				}
				else
				{
					//先右后左       >
					cout << "RotateRL" << endl;

				}
			}
			else
			{
				if (p->bf > 0)
				{
					//先左后右      <
					cout << "RotateLR" << endl;

				}
				else
				{
					//右单旋        /
					cout << "RotateR" << endl;

				}
			}
			break;
		}
	}
	if (st.empty())
		t = ptr;
	else
	{
		AVLNode<T>*pptr = st.top();
		if (pptr->data > ptr->data)
			pptr->left = ptr;
		else
			pptr->right = ptr;
	}
	return true;
}
int main()
{
	vector<int>v = {3,7,10};
	AVLTree<int>avl;
	for (const auto&e : v)
		avl.Insert(e);
	return 0;
}