#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
template<class T>
class Bstree;
template<class T>
class BstNode
{
	friend class Bstree<T>;
public:
	BstNode(const T&val = T(), BstNode<T>*_left = nullptr, BstNode<T>*_right = nullptr) :data(val), left(_left), right(_right)
	{}
	~BstNode()
	{}
private:
	T data;
	BstNode<T>*left;
	BstNode<T>*right;
};
template<class T>
class Bstree
{
public:
	Bstree() :root(nullptr)
	{}
	~Bstree()
	{}
public:
	void Insert(const T&val)
	{
		Insert(root, val);
	}
	void Inorder()
	{
		Inorder(root);
	}
	T& Max()
	{
		return Max(root);
	}
	T& Min()
	{
		return Min(root);
	}
	bool Delete(const T&key)
	{
		return Delete(root,key);
	}
protected:
	bool Delete(BstNode<T>*&root, const T& key)
	{
		if (root == nullptr)
			return false;
		if (root->data > key)
			Delete(root->left, key);
		else if (root->data<key)
			Delete(root->right, key);
		else
		{
			if (root->left != nullptr&&root->right != nullptr)
			{
				BstNode<T>*tmp = root->left;
				while (tmp->right != nullptr)
					tmp = tmp->right;
				root->data = tmp->data;
				Delete(root->left,tmp->data);
			}
			else
			{
				BstNode<T>*tmp = root;
				if (root->left != nullptr)
					root = root->left;
				else
					root = root->right;
				delete tmp;
				return true;
			}
		}
	}
	T& Max(BstNode<T>*root)
	{
		while (root->right != nullptr)
			root = root->right;
		return root->data;
	}
	T& Min(BstNode<T>*root)
	{
		while (root->left != nullptr)
			root = root->left;
		return root->data;
	}
	void Insert(BstNode<T>*&root, const T&val)
	{
		if (root == nullptr)
		{
			root = new BstNode<T>(val);
			return;
		}
		else if (root->data > val)
			Insert(root->left, val);
		else
			Insert(root->right,val);
	}
	void Inorder(BstNode<T>*root)
	{
		if (root != nullptr)
		{
			Inorder(root->left);
			cout << root->data << " ";
			Inorder(root->right);
		}
	}
private:
	BstNode<T>*root;
};
int main()
{
	Bstree<int>bst;
	vector<int>v = {7,5,9,3,6,2,8,1,0};
	for (const auto&e : v)
		bst.Insert(e);
	bst.Inorder();
	cout << endl;
	bst.Delete(3);
	bst.Inorder();
	cout << endl;
	return 0;
}