#define _CRT_SECURE_NO_WARNINGS 1
/*
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
		plist->last = plist->first;
	return true;
}

//��λ�ò���
bool SlistFindPos(Slist* plist, int pos)
{
	assert(plist!=NULL);
	SlistNode*head = plist->first;
	if (pos <= 0||pos>plist->sz)
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



//��λ��ɾ
bool SlistDeletePos(Slist* plist, int pos)
{
	int pos1 = pos - 1;
	SlistNode* p = plist->first;
	SlistNode* q = plist->first->next;
	if (pos <= 0 || pos>plist->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	while (pos1--)
	{
		p = p->next;
		q = q->next;
	}
	if (q == plist->last)
		plist->last = p;
	p->next = q->next;
	free(q);
	plist->sz--;
	return true;
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

//��λ���޸�
bool SlistModifyPos(Slist* plist, int pos, int val)
{
	SlistNode* p = plist->first;
	if (pos <= 0 || pos>plist->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	while (pos--)
	{
		p = p->next;
	}
	p->data = val;
	return true;
}

//��ֵ�޸�
//bool SlistModifyVal(Slist* plist, int val, int pos)
//{
//	SlistNode*tmp = SlistFindVal(plist,val);
//	SlistNode* p = plist->first;
//	if (tmp == NULL)
//	{
//		printf("��ֵ������\n");
//		return false;
//	}
//	if (pos <= 0 || pos>plist->sz)
//	{
//		printf("λ�ô���\n");
//		return false;
//	}
//	while (p->next != tmp)
//		p = p->next;
//
//}

//��ֵ����
void SlistInsertVal(Slist* plist, int val)
{
	SlistNode* p = plist->first;
	while (p->next != NULL&&val > p->next->data)
		p = p->next;
	SlistNode*s = _Buynode(val);
	if (p->next == NULL)
	{
		p->next = s;
		plist->last = s;
	}
	else
	{
		s->next = p->next;
		p->next = s;
	}
	plist->sz++;
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

//������
size_t SlistLength(Slist* plist)
{
	return plist->sz;
}


//�������
void SlistClear(Slist* plist)
{
	SlistNode* p = plist->first->next;
	while (p != NULL)
	{
		plist->first->next = p->next;
		free(p);
		p = plist->first->next;
	}
	plist->last = plist->first;
	plist->sz=0;
}


//��������
void SlistSort(Slist* plist)
{
	if (plist->sz > 1)
	{
		SlistNode* prev;
		SlistNode* p = plist->first->next;
		SlistNode* q = p->next;
		plist->last = p;
		plist->last->next = NULL;
		p = q;
		while (p != NULL)
		{
			q = q->next;
			prev = plist->first;
			while (prev->next != NULL&&p->data > prev->next->data)
				prev = prev->next;
			if (prev->next == NULL)
			{
				prev->next = p;
				plist->last = p;
				p->next = NULL;
			}
			else
			{
				p->next = prev->next;
				prev->next = p;
			}
			p = q;
		}
	}
}


//��������
//����1
//void SlistReserve(Slist* plist)
//{
//	SlistNode* p = plist->first->next;
//	SlistNode* q = p->next;
//	plist->last = p;
//	plist->last->next = NULL;
//	p = q;
//	while (p!=NULL)
//	{
//		q = q->next;
//		p->next = plist->first->next;
//		plist->first->next = p;
//		p = q;
//	}
//}

//����2
void SlistReserve(Slist* plist)
{
	SlistNode* p1 = NULL;
	SlistNode* p2 = plist->first->next;
	SlistNode* p3 = p2->next;
	plist->last = p2;
	while (p2 != NULL)
	{
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		if (p3 != NULL)
			p3 = p3->next;
	}
	plist->first->next = p1;
}


//��������
void SlistDestroy(Slist* plist)
{
	SlistClear(plist);
	free(plist->first);
	plist->first = plist->last = NULL;
}
*/

