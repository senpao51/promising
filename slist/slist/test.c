#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"
#include "sclist.h"
#include "dlist.h"
#include "dclist.h"
void menu()
{
	printf("**********************************\n");
	printf("*[1]:push_back    [2]:push_front *\n");
	printf("*[3]:pop_back     [4]:pop_front  *\n");
	printf("*[5]:delete_pos   [6]:delete_val *\n");
	printf("*[7]:find_pos     [8]:find_val   *\n");
	printf("*[9]:modify_pos   [10]:modify_val*\n");
	printf("*[11]:insert_pos  [12]:insert_val*\n");
	printf("*[13]:show        [14]:length    *\n");
	printf("*[15]:clear       [16]:sort      *\n");
	printf("*[17]:reverse     [0]:exit       *\n");
	printf("**********************************\n");

}
int main()
{
	DClistNode *p;
	DataType x = 0;
	int input = 0;
	int pos = 0;
	int val = 0;
	DataType flag = 0;
	//Slist mylist;
	//SClist mylist;
	DClist mylist;
	//SlistInit(&mylist);
	//SClistInit(&mylist);
	DClistInit(&mylist);
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
				  printf("������Ҫ�������,��-1����\n");
				  while (scanf("%d",&x)&&x!=-1)
				  {
					  //SlistPushBack(&mylist, x);
					 // SClistPushBack(&mylist, x);
					  DClistPushBack(&mylist, x);
				  }
				  break;
		}
		case 2:
		{
				  printf("������Ҫ�������,��-1����\n");
				  while (scanf("%d",&x)&&x!=-1)
				  {
					  //SlistPushFront(&mylist,x);
					 // SClistPushFront(&mylist, x);
					  DClistPushFront(&mylist, x);
				  }
				  break;
		}
		case 3:
		{
				  //SlistPopBack(&mylist);
				 // SClistPopBack(&mylist);
				  DClistPopBack(&mylist);
				  break;
		}
		case 4:
		{
				  //SlistPopFront(&mylist);
				 // SClistPopFront(&mylist);
				  DClistPopFront(&mylist);
				  break;
		}
		case 5:
		{
				  printf("������Ҫɾ����λ��:");
				  scanf("%d", &pos);
				  //SlistDeletePos(&mylist,pos);
				  break;
		}
		case 6:
		{
				  printf("������Ҫɾ������:");
				  scanf("%d", &val);
				 // SlistDeleteVal(&mylist,val);
				  DClistDeleteVal(&mylist, val);
				  break;
		}
		case 7:
		{
				  printf("������Ҫ���ҵ�λ��:");
				  scanf("%d", &pos);
				  //SlistFindPos(&mylist, pos);
				  flag = DClistFindPos(&mylist, pos);
				  if (-1 == flag)
					  printf("λ�ô���\n");
				  else
					  printf("��λ�õ���Ϊ%d\n",flag);
				  break;
		}
		case 8:
		{
				  printf("������Ҫ���ҵ���:");
				  scanf("%d", &val);
				  //SlistFindVal(&mylist, val);
				  p = DClistFindVal(&mylist, val);
				  break;
		}
		case 9:
		{
				  printf("������Ҫ�޸ĵ�λ��\n");
				  scanf("%d", &pos);
				  printf("������Ҫ�޸ĵ�ֵ\n");
				  scanf("%d", &val);
				  SlistModifyPos(&mylist,pos,val);
				  break;
		}
		case 10:
		{
				   printf("������Ҫ�޸ĵ�ֵ\n");
				   scanf("%d", &val);
				   printf("������Ҫ�޸ĵ���λ��\n");
				   scanf("%d", &pos);
				  // SlistModifyVal(&mylist,val,pos);
				   break;
		}
		case 11:
		{
				   printf("������Ҫ�����λ��\n");
				   scanf("%d", &pos);
				   printf("������Ҫ�����ֵ\n");
				   scanf("%d", &val);
				   break;
		}
		case 12:
		{
				   printf("������Ҫ�����ֵ\n");
				   scanf("%d", &val);
				   //SlistInsertVal(&mylist,val);
				   DClistInsertVal(&mylist, val);
				   break;
		}
		case 13:
		{
				   //SlistShow(&mylist);
				   //SClistShow(&mylist);
				   DClistShow(&mylist);
				   break;
		}
		case 14:
		{
				   //printf("����Ĵ�СΪ��%d\n", SlistLength(&mylist));
				   //printf("����Ĵ�СΪ��%d\n", SClistLength(&mylist));
				   printf("����Ĵ�СΪ��%d\n", DClistLength(&mylist));
				   break;
		}
		case 15:
		{
				   //SlistClear(&mylist);
				  // SClistClear(&mylist);
				   DClistClear(&mylist);
				   break;
		}
		case 16:
		{	
				   //SlistSort(&mylist);
				   DClistSort(&mylist);
				   break;
		}
		case 17:
		{
				  // SlistReserve(&mylist);
				   DClistReserve(&mylist);
				   break;
		}
		case 0:
		{
				  printf("�˳�����\n");
				  break;
		}
		default:
		{
				   printf("ѡ�����������ѡ��\n");
				   break;
		}
		}
	} while (input);
	//SlistDestroy(&mylist);
	DClistDestroy(&mylist);
	return 0;
}
