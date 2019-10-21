#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
//��ʼ��
SeqCyQueue* SeqCyQueueInit(int sz)
{
	SeqCyQueue* ptr = (SeqCyQueue*)malloc(sizeof(SeqCyQueue));
	ptr->capacity = sz > _DEAFAULT_QUEUE_SIZE ? sz : _DEAFAULT_QUEUE_SIZE;
	ptr->base = (DataType*)malloc(sizeof(ptr->capacity+1));
	ptr->front = ptr->tail = 0;
	return ptr;
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
void SeqCyQueueEn(SeqCyQueue* Q, DataType x)
{
	if (SeqCyQueueFull(Q))
	{
		printf("����������%d�޷�����\n",x);
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
	Q->front=(Q->front+1)%Q->capacity;
}
//��ʾ����
void SeqCyQueueShow(SeqCyQueue* Q)
{
	int i = 0;
	for (i = Q->front; i!=Q->tail; i=(i+1)%Q->capacity)
	{
		printf("%d ",Q->base[i]);
	}
	printf("\n");
}


//�ݻٶ���
void SeqCyQueueDestroy(SeqCyQueue* Q)
{

}