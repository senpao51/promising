#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����
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

//�޸�
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


//����
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

//�޸�
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



//����
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
//	//stu.name = (char*)malloc(100);//��name����һ��ռ䣬������һ���Ϸ��ĵ�ַ�����Դ�����ݣ�����Ҳ�����ҵ�
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
//	pstu = (struct student*)malloc(100);//���ṹ��һ��Ϸ��ĵ�ַ�����Է��ʺϷ����ڴ档
//	pstu->name = (char*)malloc(100);//��nameһ��Ϸ��ĵ�ַ�����Է��ʺϷ����ڴ档
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
//	stu.name = (char*)malloc(100);//��name����һ��ռ䣬����ָ��һ���Ϸ��ĵ�ַ������ַ��ָ����ڴ���Ա����ʡ�
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
//	pstu = NULL; //ע��free���Ⱥ�˳��һ��Ҫ��free�ṹ���ڲ���ָ����ָ��Ŀռ䣬��free�ṹ�塣
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
//	pstu = (struct student*)malloc(100);//���ṹ��һ��Ϸ��ĵ�ַ�����Է��ʺϷ����ڴ档
//	pstu->name = (char*)malloc(100);//��nameһ��Ϸ��ĵ�ַ�����Է��ʺϷ����ڴ档
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