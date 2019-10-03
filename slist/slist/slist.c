#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"



//申请空间
static SlistNode* _Buynode(DataType x)
{
	SlistNode *s = (SlistNode*)malloc(sizeof(SlistNode));
	assert(s != NULL);
	s->next = NULL;
	s->data = x;
	return s;
}



//初始化链表
void SlistInit(Slist* plist)
{
	SlistNode *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->sz = 0;
}


//尾插
bool SlistPushBack(Slist* plist, DataType x)
{
	SlistNode* s = _Buynode(x);
	if (s == NULL)
		return false;
	plist->last->next = s;
	plist->last = s;
	plist->sz++;
	return true;
}

//头插
bool SlistPushFront(Slist* plist, DataType x)
{
	SlistNode* s = _Buynode(x);
	if (NULL==s)
		return false;
	s->next=plist->first->next;
	plist->first->next = s;
	if (plist->sz == 0)
		plist->last = s;
	plist->sz++;
	return true;
}

//尾删
bool SlistPopBack(Slist* plist)
{
	SlistNode* head;
	if (plist->sz == 0)
	{
		printf("链表已空，无法删除\n");
		return false;
	}
	head = plist->first;
	while (head->next != plist->last)
	{
		head = head->next;
	}
	head->next = NULL;
	free(plist->last);
	plist->last = head;
	plist->sz--;
	return true;
}

//头删
bool SlistPopFront(Slist* plist)
{
	SlistNode*p = plist->first->next;
	if (plist->sz == 0)
	{
		printf("链表已空，无法删除\n");
		return false;
	}
	plist->first->next = p->next;
	free(p);
	plist->sz--;
	if (plist->sz == 0)
		plist->last = p;
	return true;
}

//按位置查找
bool SlistFindPos(Slist* plist, int pos)
{
	assert(plist!=NULL);
	SlistNode*head = plist->first;
	if (pos <= 0 || pos > plist->sz)
	{
		printf("位置错误\n");
		return false;
	}
	while (pos--)
	{
		head = head->next;
	}
	printf("该位置的数据为:%d\n",head->data);
	return true;
}

//按值查找
SlistNode* SlistFindVal(Slist* plist, DataType val)
{
	SlistNode* p = plist->first->next;
	while (p != NULL&&p->data != val)
	{
		p = p->next;
	}
	return p;
}


//按值删
bool SlistDeleteVal(Slist* plist, DataType val)
{
	assert(plist);
	SlistNode* tmp = SlistFindVal(plist, val);
	SlistNode* p = plist->first;
	if (tmp == NULL)
	{
		printf("查无此数\n");
		return false;
	}
	while (p->next!=tmp)
	{
		p = p->next;
	}
	if (tmp == plist->last)
		plist->last = p;
	p->next = tmp->next;
	free(tmp);
	plist->sz--;
	return true;
}






//展示链表
void SlistShow(Slist* plist)
{
	assert(plist);
	SlistNode* p = plist->first->next;
	while (p != NULL)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("over.\n");

}
