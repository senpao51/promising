#define _	CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
};
vector<int> PreOrder(TreeNode* root)
{
	if (root != nullptr)
	{
		vector<int>ret;
		stack<TreeNode*>st;
		while (root || !st.empty())
		{
			if (root)
			{
				ret.push_back(root->val);
				st.push(root);
				root = root->left;
			}
			else
			{
				TreeNode*t = st.top();
				st.pop();
				root = t->right;
			}
		}
		return ret;
	}
}
vector<int> InOrder(TreeNode* root)
{
	if (root != nullptr)
	{
		vector<int>ret;
		stack<TreeNode*>st;
		while (root || !st.empty())
		{
			if (root)
			{
				st.push(root);
				root = root->left;
			}
			else
			{
				TreeNode*t = st.top();
				ret.push_back(t->val);
				st.pop();
				root = t->right;
			}
		}
		return ret;
	}
}
vector<int> PostOrder(TreeNode* root)
{
	if (root != nullptr)
	{
		stack<TreeNode*>st;
		vector<int>ret;
		TreeNode* last = root;
		TreeNode* p = root;
		st.push(p);
		while (!st.empty())
		{
			p = st.top();
			if ((p->left == nullptr&&p->right == nullptr) || (p->right == nullptr&&p->left == last) || (p->right == last))
			{
				ret.push_back(p->val);
				last = p;
				st.pop();
			}
			else
			{
				if (p->right)
					st.push(p->right);
				if (p->left)
					st.push(p->left);
			}
		}
		return ret;
	}
}

int main()
{

}