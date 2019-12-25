#define _CRT_SECURE_NO_WARNINGS 1
#include "sclist.h"
//申请空间
static SClistNode* _Buynode(DataType x)
{
	SClistNode *s = (SClistNode*)malloc(sizeof(SClistNode));
	assert(s != NULL);
	s->next = NULL;
	s->data = x;
	return s;
}
//初始化
void SClistInit(SClist* plist)
{
	SClistNode* s =_Buynode(0);
	plist->first = plist->last = s;
	plist->sz = 0;
}

//尾插
bool SClistPushBack(SClist* plist, DataType x)
{
	SClistNode* s = _Buynode(x);
	if (s == NULL)
		return false;
	plist->last->next = s;
	plist->last = s;
	plist->last->next = plist->first;
	plist->sz++;
	return true;
}

//头插
bool SClistPushFront(SClist* plist, DataType x)
{
	SClistNode* p = _Buynode(x);
	if (NULL == p)
		return false;
	p->next = plist->first->next;
	plist->first->next = p;
	if (plist->sz == 0)
		plist->last = p;
	plist->last->next = plist->first;
	plist->sz++;
	return true;
}

//尾删
bool SClistPopBack(SClist* plist)
{
	SClistNode* p = plist->first;
	if (plist->first == plist->last)
		return false;
	while (p->next != plist->last)
	{
		p = p->next;
	}
	free(plist->last);
	plist->last = p;
	p->next = plist->first;
	plist->sz--;
	return true;
}

//头删
bool SClistPopFront(SClist* plist)
{
	SClistNode* p = plist->first->next;
	if (plist->first == plist->last)
		return false;
	plist->first->next = p->next;
	free(p);
	plist->sz--;
	if (plist->sz == 0)
		plist->last->next= plist->first;
	return true;
}


//展示链表
void SClistShow(SClist *plist)
{
	SClistNode* p = plist->first->next;
	while (p != plist->first)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("over\n");
}

//链表长度
size_t SClistLength(SClist* plist)
{
	return plist->sz;
}

//清除链表
void SClistClear(SClist* plist)
{
	SClistNode* p = plist->first->next;
	while (p!= plist->first)
	{
		plist->first->next = p->next;
		free(p);
		p = plist->first->next;
	}
	plist->last = plist->first;
	plist->sz = 0;
}



