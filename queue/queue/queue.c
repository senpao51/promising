#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
//初始化
void SeqCyQueueInit(SeqCyQueue* Q, int sz)
{
	Q->capacity = sz > _DEAFAULT_QUEUE_SIZE ? sz : _DEAFAULT_QUEUE_SIZE;
	Q->base = (DataType*)malloc(sizeof(DataType)*Q->capacity);
	Q->front = Q->tail = 0;
}

//判满
bool SeqCyQueueFull(SeqCyQueue* Q)
{
	return (Q->tail + 1) % Q->capacity == Q->front;
}


//判空
bool SeqCyQueueEmpty(SeqCyQueue* Q)
{
	return Q->tail == Q->front;
}
//入队
void SeqCyQueueEn(SeqCyQueue* Q, DataType x)
{
	if (SeqCyQueueFull(Q))
	{
		printf("队列已满，%d无法入列\n",x);
		return;
	}
	Q->base[Q->tail] = x;
	Q->tail = (Q->tail + 1) % Q->capacity;
}

//出列
void SeqCyQueueDe(SeqCyQueue* Q)
{
	if (SeqCyQueueEmpty(Q))
	{
		printf("队列已空，无法出列\n");
		return;
	}
	Q->front=(Q->front+1)%Q->capacity;
}
//显示队列
void SeqCyQueueShow(SeqCyQueue* Q)
{
	int i = 0;
	for (i = Q->front; i!=Q->tail; i=(i+1)%Q->capacity)
	{
		printf("%d ",Q->base[i]);
	}
	printf("\n");
}
