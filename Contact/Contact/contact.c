#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//检查目前通讯录是否已满，已满就再多创建两个空间。
void CheckContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->capacity == pcon->sz)
	{
		PeoInfo*ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("增容成功\n");
		}
	}
}
//加载信息
void LoadContact(Contact*pcon)
{
	PeoInfo tmp = { 0 };
	assert(pcon);
	FILE* PfRead = fopen("contact.txt","rb");
	if (PfRead == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	while (fread(&(tmp),sizeof(PeoInfo),1,PfRead))
	{
		CheckContact(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	fclose(PfRead);
	PfRead = NULL;
}


//初始化通讯录
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	pcon->data =(PeoInfo*)calloc(INIT_NUM, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	pcon->capacity = INIT_NUM;
	LoadContact(pcon);
}
//删除通讯录所占的空间
void DestoryContact(Contact* pcon)
{
	assert(pcon);
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}


//增加信息
void AddContact(Contact* pcon)
{
	assert(pcon);
	CheckContact(pcon);
	printf("请输入姓名:");
	scanf("%s",pcon->data[pcon->sz].name);
	printf("请输入性别:");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入年龄:");
	scanf("%d",&(pcon->data[pcon->sz].age));
	printf("请输入电话:");
	scanf("%s",pcon->data[pcon->sz].tel);
	printf("请输入地址:");
	scanf("%s",pcon->data[pcon->sz].address);
	pcon->sz++;
	printf("录入成功\n");	

}
//通过名字查找通讯录是否有这个人，配合删除，修改，寻找使用
static int Find_By_Name(Contact*pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
//删除信息
void DelContact(Contact* pcon)
{
	char name[name_max] = { 0 };
	int ret = 0;
	assert(pcon);
	if (0 == pcon->sz)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入要删除人的名字:");
	scanf("%s",name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("查无此人\n");
		return;
	}
	while (ret < pcon->sz)
	{
		pcon->data[ret] = pcon->data[ret + 1];
		ret++;
	}
	pcon->sz--;
	printf("删除成功\n");
}

//修改信息
void ModifyContact(Contact* pcon)
{
	char name[name_max] = { 0 };
	int ret = 0;
	assert(pcon);
	printf("请输入要修改人的名字:");
	scanf("%s",name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("查无此人\n");
		return;
	}
	printf("请输入姓名:");
	scanf("%s",pcon->data[ret].name);
	printf("请输入性别:");
	scanf("%s",pcon->data[ret].sex);
	printf("请输入年龄:");
	scanf("%d", &(pcon->data[ret].age));
	printf("请输入电话:");
	scanf("%s", pcon->data[ret].tel);
	printf("请输入地址:");
	scanf("%s", pcon->data[ret].address);
	printf("修改成功\n");
}


//排序
void SortContact(Contact* pcon)
{
	assert(pcon);

}


//展示通讯录
void ShowContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n","姓名","性别","年龄","电话","地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",pcon->data[i].name,
			                                      pcon->data[i].sex,
			                                      pcon->data[i].age,
			                                      pcon->data[i].tel,
			                                      pcon->data[i].address);
	}
}


//寻找信息
void SearchContact(Contact* pcon)
{
	char name[name_max] = { 0 };
	int ret = 0;
	assert(pcon);
	printf("请输入要寻找人的名字:");
	scanf("%s", name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("查无此人\n");
		return;
	}
	printf("此人的信息如下\n");
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\t\n","姓名","性别","年龄","电话","地址");
	printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\t\n",
		                                  pcon->data[ret].name,
		                                  pcon->data[ret].sex,
		                                  pcon->data[ret].age,
		                                  pcon->data[ret].tel,
		                                  pcon->data[ret].address);
}



//保存通讯录
void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* PfWrite = fopen("Contact.txt","wb");
	assert(pcon);
	if (PfWrite == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data+i, sizeof(PeoInfo), 1, PfWrite);
	}
	fclose(PfWrite);
	PfWrite = NULL;
	printf("保存成功\n");
}

