#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

int main()
{
	SeqStack st;
	DataType x;
	SeqStackInit(&st, STACK_DEAFAULT);
	printf("请插入要压栈的数据，以-1结束\n");
	while (scanf("%d",&x)&&x!=-1)
	{
		SeqStackPush(&st,x);
	}
	SeqStackPeepTop(&st);
	//SeqStackPop(&st);
	SeqStackShow(&st);
	return 0;
}

