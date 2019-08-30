#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//���ĿǰͨѶ¼�Ƿ��������������ٶഴ�������ռ䡣
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
			printf("���ݳɹ�\n");
		}
	}
}
//������Ϣ
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


//��ʼ��ͨѶ¼
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
//ɾ��ͨѶ¼��ռ�Ŀռ�
void DestoryContact(Contact* pcon)
{
	assert(pcon);
	free(pcon->data);
	pcon->data = NULL;
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
	char name[name_max] = { 0 };
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
	char name[name_max] = { 0 };
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


//����
void SortContact(Contact* pcon)
{
	assert(pcon);

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
	char name[name_max] = { 0 };
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
	printf("����ɹ�\n");
}

