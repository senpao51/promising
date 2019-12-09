#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	char ch;
	scanf("%d %c %d",&a,&ch,&b);
	if (ch != '\\'&&b != 0)
	{
		switch (ch)
		{
		case '+':
		{
				printf("%d+%d=%d",a,b,a+b);
				break;
		}
		case '-':
		{
				printf("%d-%d=%d", a, b, a - b);
				break;
		}
		case '*':
		{
				printf("%d*%d=%d", a, b, a * b);
				break;
		}
		case '/':
		{
				printf("%d/%d=%d", a, b, a / b);
				break;
		}
		default:
			break;
		}
	}
}

