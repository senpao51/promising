#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "bintree.h"


#define DataType char
#define QueueDataType BinTreeNode*

#define _DEAFAULT_QUEUE_SIZE 20
typedef struct SeqCyQueue
{
	QueueDataType* base;
	size_t capacity;
	int front;
	int tail;
}SeqCyQueue;


void SeqCyQueueInit(SeqCyQueue* Q);
void SeqCyQueueEn(SeqCyQueue* Q, QueueDataType x);
void SeqCyQueueDe(SeqCyQueue* Q);
void SeqCyQueueShow(SeqCyQueue* Q);
void SeqCyQueueDestroy(SeqCyQueue* Q);
bool SeqCyQueueFull(SeqCyQueue* Q);
bool SeqCyQueueEmpty(SeqCyQueue* Q);
BinTreeNode* SeqCyQueueTop(SeqCyQueue* Q);



void SeqCyQueueInit(SeqCyQueue* Q)
{
	Q->capacity = _DEAFAULT_QUEUE_SIZE;
	Q->base = (QueueDataType*)malloc(sizeof(Q->capacity + 1));
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
void SeqCyQueueEn(SeqCyQueue* Q, QueueDataType x)
{
	if (SeqCyQueueFull(Q))
	{
		printf("队列已满，%d无法入列\n", x);
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
	Q->front = (Q->front + 1) % Q->capacity;
}


//队列的首元素
BinTreeNode* SeqCyQueueTop(SeqCyQueue* Q)
{
	return Q->base[Q->front];
}
//显示队列
void SeqCyQueueShow(SeqCyQueue* Q)
{
	int i = 0;
	for (i = Q->front; i != Q->tail; i = (i + 1) % Q->capacity)
	{
		printf("%d ", Q->base[i]);
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



