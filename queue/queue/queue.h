#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define DataType int

#define _DEAFAULT_QUEUE_SIZE 8
typedef struct SeqCyQueue
{
	DataType* base;
	size_t capacity;
	int front;
	int tail;
}SeqCyQueue;

typedef struct LinkQueue
{
	DataType data;
	struct LinkQueueNode *next;
}LinkQueueNode;
typedef struct LinQueue
{
	LinkQueueNode* front;
	LinkQueueNode* tail;
}LinQueue;
//void SeqCyQueueInit(SeqCyQueue* Q,int sz);
//void SeqCyQueueEn(SeqCyQueue* Q, DataType x);
//void SeqCyQueueDe(SeqCyQueue* Q);
//void SeqCyQueueShow(SeqCyQueue* Q);