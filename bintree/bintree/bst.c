#define _CRT_SECURE_NO_WARNINGS 1
#include "bst.h"
void BstInit(Bst*t)
{
	*t = NULL;
}
//插入数据
bool BstInsert(Bst*t, DataType x)
{
	if (*t == NULL)
	{
		*t = (BstNode*)malloc(sizeof(BstNode));
		(*t)->data = x;
		(*t)->left = NULL;
		(*t)->right = NULL;
		return true;
	}
	else if ((*t)->data > x)
		BstInsert(&((*t)->left), x);
	else if ((*t)->data < x)
		BstInsert(&((*t)->right), x);
	else
		return false;
}
//清除数据
bool BstRemove(Bst*t, DataType x)
{
	if (*t == NULL)
		return false;
	else if (x>(*t)->data)
		BstRemove(&((*t)->right),x);
	else if (x < (*t)->data)
		BstRemove(&((*t)->left),x);
	else
	{
		BstNode* p = *t;
		if ((p->left == NULL) + (p->right == NULL)!=0)
		{
			p = *t;
			if (p->left == NULL)
				*t = p->right;
			else
				*t = p->left;
			free(p);
		}
		else
		{
			p = (*t)->left;
			while (p->right != NULL)
				p = p->right;
			(*t)->data = p->data;
			BstRemove(&((*t)->left),p->data);
		}
		return true;
	}
}



//排序
void BstSort(Bst t,int*arr,int*j)
{
	if (t != NULL)
	{
		BstSort(t->left,arr,j);
		arr[*j] = t->data;
		(*j)++;
		BstSort(t->right,arr,j);
	}
}
DataType Max(Bst t)
{
	assert(t != NULL);
	while (t->right!= NULL)
		t = t->right;
	return t->data;
}
DataType Min(Bst t)
{
	assert(t != NULL);
	while (t->left != NULL)
		t= t->left;
	return t->data;
}

