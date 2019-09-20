#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//���ĿǰͨѶ¼�Ƿ��������������ٶഴ�������ռ䡣
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
		printf("���ݳɹ�\n");
	}
}


//������Ϣ
void LoadContact(Contact* pcon)
{
	assert(pcon);
	PeoInfo tmp = { 0 };//��ʱ���������ڴ����ʱ��Ϣ��
	FILE* PfRead = fopen("contact.txt","rb");
	if (PfRead == NULL)
	{
		printf("������Ϣʧ��\n");
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


//��ʼ��ͨѶ¼
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
//ɾ��ͨѶ¼��ռ�Ŀռ�
void DestroyContact(Contact* pcon)
{
	assert(pcon);
	free(pcon->data);
	pcon->data = NULL;//һ��Ҫ��free�󸳳ɿ�ָ�롣
	pcon->capacity = 0;
	pcon->sz = 0;
}

//������Ϣ
void AddContact(Contact* pcon)
{
	assert(pcon);
	CheckContact(pcon);
	printf("����������:");
	scanf("%s",pcon->data[pcon->sz].name);
	printf("�������Ա�:");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("����������:");
	scanf("%d",&(pcon->data[pcon->sz].age));
	printf("������绰:");
	scanf("%s",pcon->data[pcon->sz].tel);
	printf("�������ַ:");
	scanf("%s",pcon->data[pcon->sz].address);
	pcon->sz++;
	printf("¼��ɹ�\n");	

}
//ͨ�����ֲ���ͨѶ¼�Ƿ�������ˣ����ɾ�����޸ģ�Ѱ��ʹ��
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
//ɾ����Ϣ
void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	assert(pcon);
	if (0 == pcon->sz)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:");
	scanf("%s",name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("���޴���\n");
		return;
	}
	while (ret < pcon->sz)
	{
		pcon->data[ret] = pcon->data[ret + 1];
		ret++;
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}

//�޸���Ϣ
void ModifyContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	assert(pcon);
	printf("������Ҫ�޸��˵�����:");
	scanf("%s",name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("���޴���\n");
		return;
	}
	printf("����������:");
	scanf("%s",pcon->data[ret].name);
	printf("�������Ա�:");
	scanf("%s",pcon->data[ret].sex);
	printf("����������:");
	scanf("%d", &(pcon->data[ret].age));
	printf("������绰:");
	scanf("%s", pcon->data[ret].tel);
	printf("�������ַ:");
	scanf("%s", pcon->data[ret].address);
	printf("�޸ĳɹ�\n");
}



void SortMenu()
{
	printf("**************************\n");
	printf("**  1.name      2.sex   **\n");
	printf("**  3.age       4.tel   **\n");
	printf("**  5.address   0.exit  **\n");
	printf("**************************\n");
}
//������������
int Com_By_Name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//�����Ա�����
int Com_By_Sex(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->sex, ((PeoInfo*)e2)->sex);
}
//������������
int Com_By_Age(const void* e1, const void* e2)
{
	return ((PeoInfo*)e1)->age-((PeoInfo*)e2)->age;
}
//���ݵ绰����
int Com_By_Tel(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->tel, ((PeoInfo*)e2)->tel);
}
//���ݵ�ַ����
int Com_By_Addr(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->address, ((PeoInfo*)e2)->address);
}
//����
void SortContact(Contact* pcon)
{
	assert(pcon);
	int input = 0;
		SortMenu();
		printf("��ѡ�����ʲô��Ϣ����\n");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), Com_By_Name);
			printf("����ɹ�\n");
			break;
		case SEX:
			qsort(pcon->data,pcon->sz,sizeof(PeoInfo),Com_By_Sex);
			printf("����ɹ�\n");
			break;
		case AGE:
			qsort(pcon->data,pcon->sz,sizeof(PeoInfo),Com_By_Age);
			printf("����ɹ�\n");
			break;
		case TEL:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo),Com_By_Tel);
			printf("����ɹ�\n");
			break;
		case ADDR:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), Com_By_Addr);
			printf("����ɹ�\n");
			break;
		case CANCEL:
			printf("ȡ������\n");
			break;
		default:
			printf("ѡ�����,���˳�\n");
			break;
		}
}


//չʾͨѶ¼
void ShowContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n","����","�Ա�","����","�绰","��ַ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\n",pcon->data[i].name,
			                                      pcon->data[i].sex,
			                                      pcon->data[i].age,
			                                      pcon->data[i].tel,
			                                      pcon->data[i].address);
	}
}


//Ѱ����Ϣ
void SearchContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	assert(pcon);
	printf("������ҪѰ���˵�����:");
	scanf("%s", name);
	ret = Find_By_Name(pcon, name);
	if (-1 == ret)
	{
		printf("���޴���\n");
		return;
	}
	printf("���˵���Ϣ����\n");
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\t\n","����","�Ա�","����","�绰","��ַ");
	printf("%-15s\t%-5s\t%-5d\t%-12s\t%-20s\t\n",
		                                  pcon->data[ret].name,
		                                  pcon->data[ret].sex,
		                                  pcon->data[ret].age,
		                                  pcon->data[ret].tel,
		                                  pcon->data[ret].address);
}



//����ͨѶ¼
void SaveContact(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	FILE* PfWrite = fopen("contact.txt", "wb");
	if (PfWrite == NULL)
	{
		printf("�����ļ�ʧ��\n");
		return;
	}
	for (i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data+i, sizeof(PeoInfo), 1,PfWrite);
	}
	fclose(PfWrite);
	PfWrite = NULL;
	printf("����ɹ�\n");
}


