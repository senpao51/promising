#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"
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
	DataType x = 0;
	int input = 0;
	int pos = 0;
	int val = 0;
	int lenth = 0;
	Slist mylist;
	SlistInit(&mylist);
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
				  while (scanf("%d", &x) && x != -1)
				  {
					  SlistPushBack(&mylist, x);
				  }
				  break;
		}
		case 2:
		{
				  printf("������Ҫ�������,��-1����\n");
				  while (scanf("%d", &x) && x != -1)
				  {
					  SlistPushFront(&mylist,x);
					  //SeqListPushFront(&mylist, x);
				  }
				  break;
		}
		case 3:
		{
				  SlistPopBack(&mylist);
				  //SeqListPopBack(&mylist);
				  break;
		}
		case 4:
		{
				  SlistPopFront(&mylist);
				  //SeqListPopFront(&mylist);
				  break;
		}
		case 5:
		{
				  printf("������Ҫɾ����λ��:");
				  scanf("%d", &pos);
				  //SeqListDeletePos(&mylist, pos);
				  break;
		}
		case 6:
		{
				  printf("������Ҫɾ������:");
				  scanf("%d", &val);
				  //SlistDeleteVal(&mylist,val);
				 // SeqListDeleteVal(&mylist, val);
				  break;
		}
		case 7:
		{
				  printf("������Ҫ���ҵ�λ��:");
				  scanf("%d", &pos);
				  //SlistFindPos(&mylist, pos);
				 // SeqListFindPos(&mylist, pos);
				  break;
		}
		case 8:
		{
				  printf("������Ҫ���ҵ���:");
				  scanf("%d", &val);
				  SlistFindVal(&mylist, val);
				  //SeqListFindVal(&mylist, val);
				  break;
		}
		case 9:
		{
				  printf("������Ҫ�޸ĵ�λ��\n");
				  scanf("%d", &pos);
				  printf("������Ҫ�޸ĵ�ֵ\n");
				  scanf("%d", &val);
				  //SeqListModifyPos(&mylist, pos, val);
				  break;
		}
		case 10:
		{
				   printf("������Ҫ�޸ĵ�ֵ\n");
				   scanf("%d", &val);
				   printf("������Ҫ�޸ĵ���λ��\n");
				   scanf("%d", &pos);
				   //SeqListModifyVal(&mylist, val, pos);
				   break;
		}
		case 11:
		{
				   printf("������Ҫ�����λ��\n");
				   scanf("%d", &pos);
				   printf("������Ҫ�����ֵ\n");
				   scanf("%d", &val);
				   //SeqListInsertPos(&mylist, pos, val);
				   break;
		}
		case 12:
		{
				   printf("������Ҫ�����ֵ\n");
				   scanf("%d", &val);

				   break;
		}
		case 13:
		{
				   SlistShow(&mylist);
				   break;
		}
		case 14:
		{
				   //lenth = SeqListLenth(&mylist);
				   printf("˳���Ĵ�СΪ��%d\n", lenth);
				   break;
		}
		case 15:
		{
				  // SeqListClear(&mylist);
				   break;
		}
		case 16:
		{
				   break;
		}
		case 17:
		{
				   //SeqListReverse(&mylist);
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
	//SeqListDestroy(&mylist);
	return 0;
}
