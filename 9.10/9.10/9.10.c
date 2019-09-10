#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	char *p = "senpaopaopao";
//	FILE* pfwrite = fopen("test.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0; 
//	}
//	else
//	{
//		fputs(p,pfwrite);
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//	FILE* pfread = fopen("test.txt","r");
//	char arr[20] = { 0 };
//	if (pfread == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	
//	else
//	{
//		fgets(arr,5,pfread);
//		printf("%s",arr);
//	}
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}

//int main()
//{
//	int a[10];
//	int *pa;
//	pa = a;
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = { "张三", 20, 55.5 };
//	FILE* pfwrite = fopen("text.txt","w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fprintf(pfwrite,"%s %d %f",s.name,s.age,s.score);
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {0};
//	FILE* pfread = fopen("text.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(pfread,"%s %d %f",s.name,&(s.age),&(s.score));
//	printf("%s %d %f",s.name,s.age,s.score);
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {"张三",20,55.5};
//	char arr[50] = { 0 };
//	struct stu tmp = { 0 };
//	sprintf(arr,"%s %d %f",s.name,s.age,s.score);
//	printf("%s\n",arr);
//	sscanf(arr,"%s %d %f",tmp.name,&(tmp.age),&(tmp.score));
//	printf("%s %d %f",tmp.name,tmp.age,tmp.score);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {"张三",20,55.5};
//
//	FILE* pfwrite = fopen("text.txt","wb");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fwrite(&s,sizeof(struct stu),1,pfwrite);
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {0};
//	FILE* pfread = fopen("text.txt", "rb");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fread(&s, sizeof(struct stu), 1, pfread);
//	printf("%s %d %f",s.name,s.age,s.score);
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("text.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fseek(pf,0,SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//	fseek(pf, 1, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n",ftell(pf));
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt","r");
//	int ch = 0;
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	printf("\n");
//	printf("%d\n",feof(pf));
//	printf("%d\n",ferror(pf));
//  fclose(pf);
//  pf =NULL;
//	return 0;
//}

int main()
{
	float a[20] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float b = 0.0;
	size_t ret = 0;
	FILE* pf = fopen("text.txt","wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fwrite(a,sizeof(float),20,pf);
	fclose(pf);
	pf = NULL; 
	pf = fopen("text.txt","rb");
	while ((ret = fread(&b, sizeof(float), 1, pf)) >= 1)
	{
		printf("%f\n",b);
	}
	printf("%d\n",feof(pf));
	printf("%d\n",ferror(pf));
	fclose(pf);
	pf = NULL;
	return 0;
}