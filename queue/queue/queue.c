#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
//初始化
SeqCyQueue* SeqCyQueueInit(int sz)
{
	SeqCyQueue* ptr = (SeqCyQueue*)malloc(sizeof(SeqCyQueue));
	ptr->capacity = sz > _DEAFAULT_QUEUE_SIZE ? sz : _DEAFAULT_QUEUE_SIZE;
	ptr->base = (DataType*)malloc(sizeof(ptr->capacity+1));
	ptr->front = ptr->tail = 0;
	return ptr;
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


//摧毁队列
void SeqCyQueueDestroy(SeqCyQueue*Q) 
{
	free(Q->base);
	free(Q);
	Q = NULL;
	Q->base = NULL;
}


