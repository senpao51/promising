#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//问题
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改
//char *GetMemory(void)
//{
//	char *p = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//问题
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}



//问题
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int main()
//{
//	double *p = NULL;
//	printf("%d\n",sizeof(p));
//	return 0;
//}


//struct student
//{
//	char*name;
//	int score;
//}stu;
//
//int main()
//{
//	//stu.name = (char*)malloc(100);//给name开辟一块空间，让他有一个合法的地址，可以存放内容，并且也可以找到
//	strcpy(stu.name,"senpaolove");
//	stu.score = 99;
//
//	return 0;
//}



//struct student
//{
//	char* name;
//	int score;
//} *pstu;
//
//int main()
//{
//	pstu = (struct student*)malloc(100);//给结构体一块合法的地址，可以访问合法的内存。
//	pstu->name = (char*)malloc(100);//给name一块合法的地址，可以访问合法的内存。
//	pstu->score = 99;
//	strcpy(pstu->name, "love");
//	return 0;
//}

//struct student
//{
//	char* name;
//	int score;
//}stu, *pstu;
//int main()
//{
//	stu.name = (char*)malloc(100);//给name开辟一块空间，让他指向一个合法的地址，这块地址所指向的内存可以被访问。
//	pstu = (struct student*)malloc(200);
//	pstu->name = (char*)malloc(100);
//	strcpy(stu.name, "senpaolove");
//	pstu->score = 99;
//	strcpy(pstu->name, "senpaolove");
//	free(stu.name);
//	free(pstu->name);
//	free(pstu);
//	stu.name = NULL;
//	pstu->name = NULL;
//	pstu = NULL; //注意free的先后顺序，一定要先free结构体内部的指针所指向的空间，再free结构体。
//	return 0;
//}


//struct student
//{
//	char* name;
//	int score;
//} *pstu;
//
//int main()
//{
//	pstu = (struct student*)malloc(100);//给结构体一块合法的地址，可以访问合法的内存。
//	pstu->name = (char*)malloc(100);//给name一块合法的地址，可以访问合法的内存。
//	pstu->score = 99;
//	strcpy(pstu->name, "love");
//	free(pstu->name);
//	free(pstu);
//	pstu->name = NULL;
//	pstu = NULL;
//	return 0;
//}


//int main()
//{
//	char* p = malloc(100);
//	p = NULL;
//	free(p);
//}

//int main()
//{ 
//	char* p = calloc(10,sizeof(int));
//	printf("%d\n",sizeof(p));
//	return 0;
//
//}