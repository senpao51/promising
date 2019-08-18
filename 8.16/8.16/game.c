#define _CRT_SECURE_NO_WARNINGS 1
//三子棋
#include "8.16.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c %c %c",' ',board[i][j],' ' );
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("%c %c %c", '-', '-', '-');
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int flag = 0;
	printf("玩家走\n");
	printf("请输入要走的坐标\n");
	do
	{
		scanf("%d %d", &x, &y);
		if (0 < x&&x<=row && 0 < y&&y<=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				flag = 0;
			}
			else
			{
				printf("此处被占用，请重新输入\n");
				flag = 1;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
			flag = 1;
		}
	} while (flag);
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int a = rand() % row;
		int b = rand() % col;
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] == '*')
			return '*';
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] = board[1][j] && board[1][j] == board[2][j] && board[1][j] == '*')
			return '*';
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				count++;
			}
		}
	}
	if (count == 9)
		return 'p';
	return 'c';
}