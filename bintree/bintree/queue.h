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

//����
bool SeqCyQueueFull(SeqCyQueue* Q)
{
	return (Q->tail + 1) % Q->capacity == Q->front;
}


//�п�
bool SeqCyQueueEmpty(SeqCyQueue* Q)
{
	return Q->tail == Q->front;
}
//���
void SeqCyQueueEn(SeqCyQueue* Q, QueueDataType x)
{
	if (SeqCyQueueFull(Q))
	{
		printf("����������%d�޷�����\n", x);
		return;
	}
	Q->base[Q->tail] = x;
	Q->tail = (Q->tail + 1) % Q->capacity;
}

//����
void SeqCyQueueDe(SeqCyQueue* Q)
{
	if (SeqCyQueueEmpty(Q))
	{
		printf("�����ѿգ��޷�����\n");
		return;
	}
	Q->front = (Q->front + 1) % Q->capacity;
}


//���е���Ԫ��
BinTreeNode* SeqCyQueueTop(SeqCyQueue* Q)
{
	return Q->base[Q->front];
}
//��ʾ����
void SeqCyQueueShow(SeqCyQueue* Q)
{
	int i = 0;
	for (i = Q->front; i != Q->tail; i = (i + 1) % Q->capacity)
	{
		printf("%d ", Q->base[i]);
	}
	printf("\n");
}


//�ݻٶ���
void SeqCyQueueDestroy(SeqCyQueue*Q)
{
	free(Q->base);
	free(Q);
	Q = NULL;
	Q->base = NULL;
}



