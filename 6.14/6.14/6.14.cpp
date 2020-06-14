#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int pos[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
//�ҵ����кͱ�������ͨ�ĵ�
void dfs(vector<vector<char>>& board, int row, int col, int x, int y)
{
	//�ͱ�����ͨ�ĵ����������
	board[x][y] = '#';
	//����
	for (int i = 0; i<4; i++)
	{
		int newx = x + pos[i][0];
		int newy = y + pos[i][1];
		if (newx<0 || newx >= row || newy<0 || newy >= col)
			continue;
		//���µĵ�Ϊ���ļ�������
		if (board[newx][newy] == '0')
			dfs(board, row, col, newx, newy);
	}
}
void solve(vector<vector<char>>& board)
{
	if (board.empty())
		return;
	//�ҵ����б��ϵ�O������ÿһ��OΪ����������
	int row = board.size();
	int col = board[0].size();
	//��һ�У����һ��
	for (int i = 0; i<col; ++i)
	{
		//��һ��
		if (board[0][i] == 'O')
			dfs(board, row, col, 0, i);
		//���һ��
		if (board[row - 1][i] == 'O')
			dfs(board, row, col, row - 1, i);
	}
	//��һ�� ���һ��
	for (int i = 0; i<row; i++)
	{
		//��һ��
		if (board[i][0] == 'O')
			dfs(board, row, col, i, 0);
		//���һ��
		if (board[i][col - 1] == 'O')
			dfs(board, row, col, i, col - 1);
	}
	//�ָ����е�#λ�ã���'O'����Ϊ'X'
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			if (board[i][j] == '#')
				board[i][j] = 'O';
			else if (board[i][j] == 'O')
				board[i][j] = 'X';
		}
	}
}
int main()
{
	vector<vector<char>>board(3, vector<char>(3));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> board[i][j];
		}
	}
	solve(board);
	for (const auto e : board)
	{
		for (const auto c : e)
		{
			cout << c << "  ";
		}
		cout << endl;
	}
}