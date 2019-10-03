#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"



//����ռ�
static SlistNode* _Buynode(DataType x)
{
	SlistNode *s = (SlistNode*)malloc(sizeof(SlistNode));
	assert(s != NULL);
	s->next = NULL;
	s->data = x;
	return s;
}



//��ʼ������
void SlistInit(Slist* plist)
{
	SlistNode *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->sz = 0;
}


//β��
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

//ͷ��
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

//βɾ
bool SlistPopBack(Slist* plist)
{
	SlistNode* head;
	if (plist->sz == 0)
	{
		printf("�����ѿգ��޷�ɾ��\n");
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

//ͷɾ
bool SlistPopFront(Slist* plist)
{
	SlistNode*p = plist->first->next;
	if (plist->sz == 0)
	{
		printf("�����ѿգ��޷�ɾ��\n");
		return false;
	}
	plist->first->next = p->next;
	free(p);
	plist->sz--;
	if (plist->sz == 0)
		plist->last = p;
	return true;
}

//��λ�ò���
bool SlistFindPos(Slist* plist, int pos)
{
	assert(plist!=NULL);
	SlistNode*head = plist->first;
	if (pos <= 0 || pos > plist->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	while (pos--)
	{
		head = head->next;
	}
	printf("��λ�õ�����Ϊ:%d\n",head->data);
	return true;
}

//��ֵ����
SlistNode* SlistFindVal(Slist* plist, DataType val)
{
	SlistNode* p = plist->first->next;
	while (p != NULL&&p->data != val)
	{
		p = p->next;
	}
	return p;
}


//��ֵɾ
bool SlistDeleteVal(Slist* plist, DataType val)
{
	assert(plist);
	SlistNode* tmp = SlistFindVal(plist, val);
	SlistNode* p = plist->first;
	if (tmp == NULL)
	{
		printf("���޴���\n");
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






//չʾ����
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
