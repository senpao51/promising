#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

int main()
{
	SeqStack st;
	DataType x;
	SeqStackInit(&st, STACK_DEAFAULT);
	printf("�����Ҫѹջ�����ݣ���-1����\n");
	while (scanf("%d",&x)&&x!=-1)
	{
		SeqStackPush(&st,x);
	}
	SeqStackPeepTop(&st);
	//SeqStackPop(&st);
	SeqStackShow(&st);
	return 0;
}

