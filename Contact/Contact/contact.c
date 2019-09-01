#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//检查目前通讯录是否已满，已满就再多创建两个空间。
void CheckContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->capacity == pcon->sz)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("%s\n", strerror(errno));
			return;
		}
		pcon->data = ptr;
		pcon->capacity += 2;
		printf("增容成功\n");
	}
}


//加载信息
void LoadContact(Contact* pcon)
{
	assert(pcon);
	PeoInfo tmp = { 0 };//临时变量，用于存放临时信息。
	FILE* PfRead = fopen("contact.txt","rb");
	if (PfRead == NULL)
	{
		printf("加载信息失败\n");
		return;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, PfRead))
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
	if (pcon->data == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	pcon->data=(PeoInfo*)calloc(INIT_NUM,sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n",strerror(errno));
		return;
	}
	pcon->capacity = INIT_NUM;
	LoadContact(pcon);
}
//删除通讯录所占的空间
void DestroyContact(Contact* pcon)
{
	assert(pcon);
	free(pcon->data);
	pcon->data = NULL;//一定要在free后赋成空指针。
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
	char name[NAME_MAX] = { 0 };
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
	char name[NAME_MAX] = { 0 };
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



void SortMenu()
{
	printf("**************************\n");
	printf("**  1.name      2.sex   **\n");
	printf("**  3.age       4.tel   **\n");
	printf("**  5.address   0.exit  **\n");
	printf("**************************\n");
}
//根据名字排序
int Com_By_Name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//根据性别排序
int Com_By_Sex(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->sex, ((PeoInfo*)e2)->sex);
}
//根据年龄排序
int Com_By_Age(const void* e1, const void* e2)
{
	return ((PeoInfo*)e1)->age-((PeoInfo*)e2)->age;
}
//根据电话排序
int Com_By_Tel(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->tel, ((PeoInfo*)e2)->tel);
}
//根据地址排序
int Com_By_Addr(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->address, ((PeoInfo*)e2)->address);
}
//排序
void SortContact(Contact* pcon)
{
	assert(pcon);
	int input = 0;
		SortMenu();
		printf("请选择根据什么信息排序\n");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), Com_By_Name);
			printf("排序成功\n");
			break;
		case SEX:
			qsort(pcon->data,pcon->sz,sizeof(PeoInfo),Com_By_Sex);
			printf("排序成功\n");
			break;
		case AGE:
			qsort(pcon->data,pcon->sz,sizeof(PeoInfo),Com_By_Age);
			printf("排序成功\n");
			break;
		case TEL:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo),Com_By_Tel);
			printf("排序成功\n");
			break;
		case ADDR:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), Com_By_Addr);
			printf("排序成功\n");
			break;
		case CANCEL:
			printf("取消排序\n");
			break;
		default:
			printf("选择错误,已退出\n");
			break;
		}
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
	char name[NAME_MAX] = { 0 };
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
	assert(pcon);
	int i = 0;
	FILE* PfWrite = fopen("contact.txt", "wb");
	if (PfWrite == NULL)
	{
		printf("保存文件失败\n");
		return;
	}
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data+i, sizeof(PeoInfo), 1,PfWrite);
	}
	fclose(PfWrite);
	PfWrite = NULL;
	printf("保存成功\n");
}


