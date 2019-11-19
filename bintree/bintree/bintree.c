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

//根据中序和后序创建树
BinTreeNode*_BinTreeCreateBy_LVR_LRV(char*lvr, char*lrv, int n)
{
	if (n == 0)
		return NULL;
	int k = 0;
	while (lrv[n-1] != lvr[k])
		k++;
	BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	t->data = lvr[k];
	t->rightchild = _BinTreeCreateBy_LVR_LRV(lvr+k+1,lrv+k,n-k-1);
	t->leftchild = _BinTreeCreateBy_LVR_LRV(lvr, lrv, k);
	return t;
}
void BinTreeCreateBy_LVR_LRV(BinTree* t, char*lvr, char*lrv, int n)
{
	t->root = _BinTreeCreateBy_LVR_LRV(lvr, lrv, n);
}
//根据前序遍历和中序遍历创造二叉树
BinTreeNode*_BinTreeCreateBy_VLR_LVR(char*vlr, char*lvr, int n)
{
	if (n == 0)
		return 0;
	int k = 0;
	while (vlr[0] != lvr[k])
		k++;
	BinTreeNode*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	t->data = vlr[0];
	t->leftchild = _BinTreeCreateBy_VLR_LVR(vlr+1,lvr,k);
	t->rightchild = _BinTreeCreateBy_VLR_LVR(vlr+k+1,lvr+k+1,n-k-1);
	return t;
}
void BinTreeCreateBy_VLR_LVR(BinTree* t, char*vlr, char*lvr, int n)
{
	t->root = _BinTreeCreateBy_VLR_LVR(vlr,lvr,n);
}


//前序(递归)
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

#include "stack.h"
//前序(非递归)
void _PreOrderNr(BinTreeNode* t)
{
	if (t != NULL)
	{
		SeqStack st;
		SeqStackInit(&st, _DEAFAULT_QUEUE_SIZE);
		SeqStackPush(&st,t);
		while (!SeqStackIsEmpty(&st))
		{
			BinTreeNode* p = SeqStackPeepTop(&st);
			printf("%c ", p->data);
			SeqStackPop(&st);
			if (p->rightchild!=NULL)
				SeqStackPush(&st, p->rightchild);
			if (p->leftchild!=NULL)
				SeqStackPush(&st, p->leftchild);
		}
	}
}
void PreOrderNr(BinTree* t)
{
	_PreOrderNr(t->root);
}

//中序(递归)
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
//中序(非递归)
void _InOrderNr(BinTreeNode* t)
{
	if (t != NULL)
	{
		SeqStack st;
		SeqStackInit(&st, _DEAFAULT_QUEUE_SIZE);
		SeqStackPush(&st, t);
		while (t ->leftchild!= NULL)
		{
			SeqStackPush(&st, t->leftchild);
			t = t->leftchild;
		}
		while (!SeqStackIsEmpty(&st))
		{
			BinTreeNode*q;
			BinTreeNode* p = SeqStackPeepTop(&st);
			SeqStackPop(&st);
			printf("%c ",p->data);
			if (!SeqStackIsEmpty(&st))
			{
				p = SeqStackPeepTop(&st);
				SeqStackPop(&st);
				printf("%c ", p->data);
			}
			q = p->rightchild;
			if (q!=NULL)
				SeqStackPush(&st, q);
			if (q!=NULL&&q->leftchild!=NULL)
				SeqStackPush(&st, q->leftchild);
		}
	}
}
void InOrderNr(BinTree* t)
{
	_InOrderNr(t->root);
}
//后序(递归)
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

//后序(非递归)
void _PostOrderNr(BinTreeNode* t)
{
	if (t != NULL)
	{
		SeqStack st;
		SeqStackInit(&st, _DEAFAULT_QUEUE_SIZE);
		SeqStackPush(&st, t);
		while (t->leftchild != NULL)
		{
			SeqStackPush(&st, t->leftchild);
			t = t->leftchild;
		}
		while (!SeqStackIsEmpty(&st))
		{
			BinTreeNode* q;
			BinTreeNode* tmp;
			BinTreeNode* p = SeqStackPeepTop(&st);
			printf("%c ",p->data);
			SeqStackPop(&st);
			if (!SeqStackIsEmpty(&st))
			{
				tmp = SeqStackPeepTop(&st);
				q = tmp->rightchild;
				if (q != NULL&&q != p)
					SeqStackPush(&st, q);
				if (q != NULL&&q->rightchild != NULL&&q != p)
					SeqStackPush(&st, q->rightchild);
				if (q != NULL&&q->leftchild != NULL&&q != p)
					SeqStackPush(&st, q->leftchild);
			}
		}
	}
}
void PostOrderNr(BinTree* t)
{
	_PostOrderNr(t->root);
}
//层次(递归)
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
			printf("%c ", p->data);
			SeqCyQueueDe(&Q);
			if (p->leftchild != NULL)
				SeqCyQueueEn(&Q,p->leftchild);
			if (p->rightchild != NULL)
				SeqCyQueueEn(&Q,p->rightchild);
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
BinTreeNode* Find(BinTree* t, DataType key)
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
BinTreeNode* _Clone(BinTreeNode*t)
{
	
	if (t == NULL)
		return NULL;
	else
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
	t2->root = _Clone(t1->root);
}


//判断两个数是否相等
bool _Equal(BinTreeNode*t1, BinTreeNode*t2)
{
	if (t1 == NULL&&t2 == NULL)
		return true;
	if (t1 == NULL || t2 == NULL)
		return false;
	return(t1->data == t2->data) 
		&& _Equal(t1->leftchild, t2->leftchild) 
		&& _Equal(t1->rightchild,t2->rightchild);
}
bool Equal(BinTree*t1,BinTree*t2)
{
	return _Equal(t1->root,t2->root);
}
//判断一个数是否是对称
bool _isSymmetric(BinTreeNode*t1,BinTreeNode*t2)
{
	if (t1 == NULL&&t2 == NULL)
		return true;
	if (t1 == NULL||t2 == NULL)
		return false;
	return (t1->data == t2->data)
		&& _isSymmetric(t1->leftchild, t2->rightchild)
		&& _isSymmetric(t1->rightchild,t2->leftchild);
}
bool isSymmetric(BinTree*t)
{
	if (t->root== NULL)
		return true;
	else
		return _isSymmetric(t->root->leftchild,t->root->rightchild);
}