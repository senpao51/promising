#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
int main()
{
	SeqCyQueue Q;
	SeqCyQueueInit(&Q,5);
	SeqCyQueueEn(&Q,1);
	SeqCyQueueEn(&Q,2);
	SeqCyQueueEn(&Q,3);
	SeqCyQueueEn(&Q,4);
	SeqCyQueueEn(&Q,5);
	SeqCyQueueEn(&Q,6);
	SeqCyQueueEn(&Q,7);
	SeqCyQueueShow(&Q);
	SeqCyQueueDe(&Q);
	SeqCyQueueDe(&Q);
	SeqCyQueueShow(&Q);
	SeqCyQueueEn(&Q, 8);
	SeqCyQueueEn(&Q, 9);
	SeqCyQueueEn(&Q, 10);
	SeqCyQueueShow(&Q);
	return 0;
}
