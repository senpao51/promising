#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"
//��������
void Swap(DataType* a, DataType*b)
{
	DataType tmp = *a;
	*a = *b;
	*b = tmp;
}
bool HeapFull(Heap*php)
{
	return php->sz >= php->capacity;
}
bool HeapEmpty(Heap*php)
{
	return php->sz == 0;
}
//��ʼ����
void HeapInit(Heap*php, int n)
{
	php->capacity = n;
	php->sz = 0;
	php->heap = (DataType*)malloc(sizeof(DataType)*php->capacity);
}

//��������
void HeapUp(Heap*php,int start)
{
	int i = start;
	int j = (i - 1) / 2;
	while (i > 0)
	{
		if (php->heap[i] < php->heap[j])
		{
			Swap(&(php->heap[i]), &(php->heap[j]));
			i = j;
			j = (i - 1) / 2;
		}
		else
			break;
	}
}
bool HeapInsert(Heap*php, DataType x)
{
	if (HeapFull(php))
	{
		printf("��������%d�޷�����\n",x);
		return false;
	}
	php->heap[php->sz] = x;
	HeapUp(php,php->sz);
	php->sz++;
	return true;
}

//�Ƴ�����
void HeapDown(Heap*php)
{
	int i = 0;
	int j = 2*i + 1;
	while (j <php->sz)
	{
		if (j + 1 < php->sz&&php->heap[j] > php->heap[j + 1])
			j++;
		if (php->heap[i]>php->heap[j])
		{
			Swap(&(php->heap[i]), &(php->heap[j]));
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
}
bool HeapRemove(Heap*php)
{
	if (HeapEmpty(php))
	{
		printf("���ѿգ��޷��Ƴ�\n");
		return false;
	}
	php->heap[0] = php->heap[php->sz - 1];
	php->sz--;
	HeapDown(php);
	return true;
}
//��ȡ�Ѷ�Ԫ��
DataType HeapTop(Heap*php)
{
	if (!HeapEmpty(php))
		return php->heap[0];
}
//��ʾ��
void HeapShow(Heap*php)
{
	int i = 0;
	for (i = 0; i < php->sz; i++)
	{
		printf("%d ",php->heap[i]);
	}
	printf("\n");
}
//�ݻٶ�
void HeapDestroy(Heap*php)
{
	php->capacity = php->sz = 0;
	free(php->heap);
	php->heap = NULL;
}
