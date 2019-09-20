#define _CRT_SECURE_NO_WARNINGS 1
#include "8.16.h"
void menu()
{
	printf("*********************\n");
	printf("****    1.play   ****\n");
	printf("****    0.exit   ****\n");
	printf("*********************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
		}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'p')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)(time(NULL)));
	do 
	{
		menu();
	    printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{	
		        case 1:
				game();
				break;
			    case 0:
		        printf("�˳���Ϸ\n");
			    break;
			   default:
				printf("ѡ���������ѡ��\n");
				break;
		}

	} while (input);

	return 0;
}