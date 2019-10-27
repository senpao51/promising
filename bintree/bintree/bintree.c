#define _CRT_SECURE_NO_WARNINGS 1
#include "bintree.h"

//void BinTreeInit(BinTree* t)
//{
//	*t = NULL;
//}
//
//
//void BinTreeCreate_1(BinTree* t)
//{
//	DataType input;
//	scanf("%c",&input);
//	if (input == '#')
//		*t = NULL;
//	else
//	{
//		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		assert(*t != NULL);
//		(*t)->data = input;
//		BinTreeCreate_1(&((*t)->leftchild));
//		BinTreeCreate_1(&((*t)->rightchild));
//	}
//}
//
//
//BinTreeNode* BinTreeCreate_2()
//{
//	DataType input;
//	scanf("%c",&input);
//	if (input == '#')
//		return NULL;
//	else
//	{
//		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		assert(t!=NULL);
//		t->data = input;
//		t->leftchild = BinTreeCreate_2();
//		t->rightchild = BinTreeCreate_2();
//		return t;
//	}
//}


void BinTreeInit(BinTree* t)
{
	t->root = NULL;
}


 void _BinTreeCreate_1(BinTreeNode**t)
{
	DataType input;
	scanf("%c",&input);
	if (input == '#')
		*t = NULL;
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(*t!=NULL);
		(*t)->data = input;
		_BinTreeCreate_1(&((*t)->leftchild));
		_BinTreeCreate_1(&((*t)->rightchild));
	}
}
void BinTreeCreate_1(BinTree* t)
{
	_BinTreeCreate_1(&(t->root));
}



BinTreeNode*_BinTreeCreate_2()
{
	DataType input;
		scanf("%c",&input);
		if (input == '#')
			return NULL;
		else
		{
			BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
			assert(t!=NULL);
			t->data = input;
			t->leftchild = _BinTreeCreate_2();
			t->rightchild = _BinTreeCreate_2();
			return t;
		}
}

void  BinTreeCreate_2(BinTree* t)
{
	t->root = _BinTreeCreate_2();
}

BinTreeNode* _BinTreeCreate_3(char*str, int*i)
{
	if (str[*i] == '#' || str[*i] == '\0')
		return NULL;
	else
	{
		BinTreeNode*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		t->data = str[*i];
		(*i)++;
		t->leftchild = _BinTreeCreate_3(str, i);
		(*i)++;
		t->rightchild = _BinTreeCreate_3(str, i);
		return t;
	}
}
void BinTreeCreate_3(BinTree* t, char*str, int*i)
{
	t->root = _BinTreeCreate_3(str,i);
}


//前序
void _PreOrder(BinTreeNode* t)
{
	if (t != NULL)
	{
		printf("%c ",t->data);
		_PreOrder(t->leftchild);
		_PreOrder(t->rightchild);
	}
}

void PreOrder(BinTree* t)
{
	_PreOrder(t->root);
}

//中序
void _InOrder(BinTreeNode* t)
{
	if (t != NULL)
	{
		_InOrder(t->leftchild);
		printf("%c ", t->data);
		_InOrder(t->rightchild);
	}
}
void InOrder(BinTree* t)
{
	_InOrder(t->root);
}
//后序
void _PostOrder(BinTreeNode* t)
{
	if (t != NULL)
	{
		_PostOrder(t->leftchild);
		_PostOrder(t->rightchild);
		printf("%c ", t->data);
	}
}
void PostOrder(BinTree* t)
{
	_PostOrder(t->root);
}

//层次
#include "queue.h"
void _LevelOrder(BinTreeNode* t)
{
	if (t != NULL)
	{
		BinTreeNode*p;
		SeqCyQueue Q;
		SeqCyQueueInit(&Q);
		SeqCyQueueEn(&Q,t);
		while (!SeqCyQueueEmpty(&Q))
		{
			p = SeqCyQueueTop(&Q);
			SeqCyQueueDe(&Q);
			printf("%c ",p->data);
			if (p->leftchild!=NULL)
				_LevelOrder(t->leftchild);
			if (p->rightchild!=NULL)
				_LevelOrder(t->rightchild);
		}
	}
}
void LevelOrder(BinTree* t)
{
	_LevelOrder(t->root);
}


//节点个数
size_t _Size(BinTreeNode* t)
{
	if (t == NULL)
		return 0;
	return _Size(t->leftchild) + _Size(t->rightchild) + 1;
}
size_t Size(BinTree* t)
{
	return _Size(t->root);
}


//树高度
size_t _Height(BinTreeNode*t)
{
	if (t == NULL)
		return 0;
	return _Height(t->leftchild) > _Height(t->rightchild) ? _Height(t->leftchild) + 1 : _Height(t->rightchild) + 1;
}
size_t Height(BinTree* t)
{
	return _Height(t->root);
}

//找节点
BinTreeNode* _Find(BinTreeNode* t, DataType key)
{
	BinTreeNode*p;
	if (t == NULL)
		return NULL;
	if (t->data == key)
		return t;
	p = _Find(t->leftchild,key);
	if (p != NULL)
		return p;
	return _Find(t->rightchild,key);
}
BinTreeNode *Find(BinTree* t, DataType key)
{
	return _Find(t->root,key);
}

//找父节点

BinTreeNode* _Parent(BinTreeNode* t, DataType key)
{
	BinTreeNode*pr;
	BinTreeNode* p = _Find(t, key);
	if (t == NULL || p == NULL || p == t)
		return NULL;
	if (t->leftchild == p || t->rightchild == p)
		return t;
	pr = _Parent(t->leftchild,key);
	if (pr != NULL)
		return pr;
	return _Parent(t->rightchild,key);
}
BinTreeNode*Parent(BinTree* t, DataType key)
{
	return _Parent(t->root, key);
}

//克隆
BinTreeNode*_Clone(BinTreeNode*t)
{
	if (t == NULL)
		return NULL;
	while (t != NULL)
	{
		BinTreeNode* p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p->data = t->data;
		p->leftchild = _Clone(t->leftchild);
		p->rightchild = _Clone(t->rightchild);
		return p;
	}
}
void Clone(BinTree* t1, BinTree* t2)
{
	t2 =  _Clone(t1->root);
}


//判断两个数是否相等
bool _Equal(BinTreeNode*t1, BinTreeNode*t2)
{
	if (t1 == NULL && t2 == NULL)
		return true;
	if (t1 == NULL || t2 == NULL)
		return false;
	return (t1->data == t2->data) 
		&& _Equal(t1->leftchild, t2->leftchild) 
		&& _Equal(t1->rightchild, t2->rightchild);
}
bool Equal(BinTree*t1, BinTree*t2)
{
	return _Equal(t1->root,t2->root);
}

