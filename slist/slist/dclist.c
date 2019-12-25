#define _CRT_SECURE_NO_WARNINGS 1
#include "dclist.h"

//申请空间
static DClistNode* _Buynode(DataType x)
{
	DClistNode* s = (DClistNode*)malloc(sizeof(DClistNode));
	assert(s);
	s->data = x;
	s->next = s->prev = NULL;
	return s;
}
//初始化链表
void DClistInit(DClist* plist)
{
	DClistNode* s = _Buynode(0);
	plist->first = plist->last = s;
	plist->first->prev = plist->last; 
	plist->last->next = plist->first;
	plist->sz = 0;
}
//尾插
bool DClistPushBack(DClist* plist, DataType x)
{
	DClistNode* s = _Buynode(x);
	if (s == NULL)
		return false;
	s->next = plist->first;
	s->prev = plist->last;
	s->prev->next = s;
	s->next->prev = s;
	plist->last = s;
	plist->sz++;
	return true;
}
//头插
bool DClistPushFront(DClist* plist, DataType x)
{
	DClistNode* s = _Buynode(x);
	if (s == NULL)
		return false;
	s->next = plist->first->next;
	s->prev = plist->first;
	s->prev->next = s;
	s->next->prev = s;
	if (plist->sz == 0)
		plist->last = s;
	plist->sz++;
	return true;
}

//尾删
bool DClistPopBack(DClist* plist)
{
	DClistNode*p;
	if (plist->sz == 0)
		return false;
	p = plist->last;
	p->prev->next = plist->first;
	plist->first->prev = p->prev;
	free(p);
	plist->last = plist->first->prev;
	plist->sz--;
	return true;
}

//头删
bool DClistPopFront(DClist* plist)
{
	DClistNode*p;
	if (plist->sz == 0)
		return false;
	p = plist->first->next;
	plist->first->next = p->next;
	p->next->prev = plist->first;
	free(p);
	plist->sz--;
	if (plist->sz == 0)
		plist->last = plist->first;
	return true;
}

//按位置找
DataType DClistFindPos(DClist* plist, int pos)
{
	DClistNode* p;
	if (pos < 1||pos > plist->sz)
		return -1;
	p = plist->first;
	while (pos--)
		p = p->next;
	return p->data;
}

//按值找
DClistNode* DClistFindVal(DClist* plist, int val)
{
	DClistNode* p = plist->first->next;
	while (p != plist->first&&p->data!=val)
	{
		p = p->next;
	}
	if (p == plist->first)
		return NULL;
	return p;
}

//按值删
bool DClistDeleteVal(DClist* plist, int val)
{
	DClistNode* p = DClistFindVal(plist, val);
	if (p == NULL)
		return false;
	if (p == plist->last)
		plist->last = p->prev;
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
	plist->sz--;
	return true;
}

//按值插入
bool DClistInsertVal(DClist* plist, int val)
{
	DClistNode* s = _Buynode(val);
	DClistNode* p;
	if (s == NULL)
		return false;
	p = plist->first->next;
	while (p!=plist->first&&s->data > p->data)
		p = p->next;
	s->next = p;
	s->prev = p->prev;
	s->prev->next = s;
	s->next->prev = s;
	if (p == plist->first)
		plist->last = s;
	plist->sz++;
	return true;
}


//展示链表
void DClistShow(DClist *plist)
{
	DClistNode*p = plist->first->next;
	while (p != plist->first)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("over.\n");
}


//链表长度
size_t DClistLength(DClist* plist)
{
	return plist->sz;
}

//链表排序
void DClistSort(DClist* plist)
{
	if (plist->sz > 1)
	{
		DClistNode* p1 = plist->first->next;
		DClistNode* p2 = p1->next;
		DClistNode* p3 = NULL;
		plist->last = p1;
		plist->last->next = plist->first;
		plist->first->prev = plist->last;
		p3 = plist->first->next;
		p1 = p2;
		while (p1 != plist->first)
		{
			p2 = p2->next;
			while (p3 != plist->first&&p1->data > p3->data)
			{
				p3 = p3->next;
			}
			p1->next = p3;
			p1->prev = p3->prev;
			p1->prev->next = p1;
			p1->next->prev = p1;
			if (p3 == plist->first)
				plist->last = p1;
			p1 = p2;
			p3 = plist->first->next;
		}
	}
}

//翻转链表
void DClistReserve(DClist* plist)
{
	if (plist->sz > 1)
	{
		DClistNode* p = plist->first->next;
		DClistNode* q = p->next;
		plist->last = p;
		plist->last->next = plist->first;
		plist->first->prev = plist->last;
		p = q;
		while (p != plist->first)
		{
			q = q->next;
			p->next = plist->first->next;
			p->prev = plist->first;
			p->next->prev = p;
			p->prev->next = p;
			p = q;
		}
	}
}

//清除链表
void DClistClear(DClist* plist)
{
	DClistNode* p = plist->first->next;
	while (p != plist->first)
	{
		plist->first->next = p->next;
		p->next->prev = plist->first;
		free(p);
		p = plist->first->next;
	}
	plist->last = plist->first;
	plist->sz = 0;
}

//销毁链表
void DClistDestroy(DClist* plist)
{
	DClistClear(plist);
	free(plist->first);
	plist->first = plist->last = NULL;
}


