#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	const char *p = "abcdef";
	while (*p)
	{
		printf("%c",*p);
		p++;
		Sleep(1000);
	}
	return 0;
}