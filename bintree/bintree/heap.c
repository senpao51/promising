#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"
//交换数据
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
//初始化堆
void HeapInit(Heap*php, int n)
{
	php->capacity = n;
	php->sz = 0;
	php->heap = (DataType*)malloc(sizeof(DataType)*php->capacity);
}

//插入数据
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
		printf("堆已满，%d无法插入\n",x);
		return false;
	}
	php->heap[php->sz] = x;
	HeapUp(php,php->sz);
	php->sz++;
	return true;
}

//移除数据
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
		printf("堆已空，无法移除\n");
		return false;
	}
	php->heap[0] = php->heap[php->sz - 1];
	php->sz--;
	HeapDown(php);
	return true;
}
//获取堆顶元素
DataType HeapTop(Heap*php)
{
	if (!HeapEmpty(php))
		return php->heap[0];
}
//显示堆
void HeapShow(Heap*php)
{
	int i = 0;
	for (i = 0; i < php->sz; i++)
	{
		printf("%d ",php->heap[i]);
	}
	printf("\n");
}
//摧毁堆
void HeapDestroy(Heap*php)
{
	php->capacity = php->sz = 0;
	free(php->heap);
	php->heap = NULL;
}
