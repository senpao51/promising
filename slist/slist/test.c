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
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
				  printf("请输入要插入的数,以-1结束\n");
				  while (scanf("%d", &x) && x != -1)
				  {
					  SlistPushBack(&mylist, x);
				  }
				  break;
		}
		case 2:
		{
				  printf("请输入要插入的数,以-1结束\n");
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
				  printf("请输入要删除的位置:");
				  scanf("%d", &pos);
				  //SeqListDeletePos(&mylist, pos);
				  break;
		}
		case 6:
		{
				  printf("请输入要删除的数:");
				  scanf("%d", &val);
				  //SlistDeleteVal(&mylist,val);
				 // SeqListDeleteVal(&mylist, val);
				  break;
		}
		case 7:
		{
				  printf("请输入要查找的位置:");
				  scanf("%d", &pos);
				  //SlistFindPos(&mylist, pos);
				 // SeqListFindPos(&mylist, pos);
				  break;
		}
		case 8:
		{
				  printf("请输入要查找的数:");
				  scanf("%d", &val);
				  SlistFindVal(&mylist, val);
				  //SeqListFindVal(&mylist, val);
				  break;
		}
		case 9:
		{
				  printf("请输入要修改的位置\n");
				  scanf("%d", &pos);
				  printf("请输入要修改的值\n");
				  scanf("%d", &val);
				  //SeqListModifyPos(&mylist, pos, val);
				  break;
		}
		case 10:
		{
				   printf("请输入要修改的值\n");
				   scanf("%d", &val);
				   printf("请输入要修改到的位置\n");
				   scanf("%d", &pos);
				   //SeqListModifyVal(&mylist, val, pos);
				   break;
		}
		case 11:
		{
				   printf("请输入要插入的位置\n");
				   scanf("%d", &pos);
				   printf("请输入要插入的值\n");
				   scanf("%d", &val);
				   //SeqListInsertPos(&mylist, pos, val);
				   break;
		}
		case 12:
		{
				   printf("请输入要插入的值\n");
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
				   printf("顺序表的大小为：%d\n", lenth);
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
				  printf("退出程序\n");
				  break;
		}
		default:
		{
				   printf("选择错误，请重新选择\n");
				   break;
		}
		}
	} while (input);
	//SeqListDestroy(&mylist);
	return 0;
}
