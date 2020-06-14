#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int pos[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
//找到所有和边上相连通的点
void dfs(vector<vector<char>>& board, int row, int col, int x, int y)
{
	//和边上联通的点进行特殊标记
	board[x][y] = '#';
	//搜索
	for (int i = 0; i<4; i++)
	{
		int newx = x + pos[i][0];
		int newy = y + pos[i][1];
		if (newx<0 || newx >= row || newy<0 || newy >= col)
			continue;
		//以新的点为中心继续搜索
		if (board[newx][newy] == '0')
			dfs(board, row, col, newx, newy);
	}
}
void solve(vector<vector<char>>& board)
{
	if (board.empty())
		return;
	//找到所有边上的O，且以每一个O为起点进行搜索
	int row = board.size();
	int col = board[0].size();
	//第一行，最后一行
	for (int i = 0; i<col; ++i)
	{
		//第一行
		if (board[0][i] == 'O')
			dfs(board, row, col, 0, i);
		//最后一行
		if (board[row - 1][i] == 'O')
			dfs(board, row, col, row - 1, i);
	}
	//第一列 最后一列
	for (int i = 0; i<row; i++)
	{
		//第一列
		if (board[i][0] == 'O')
			dfs(board, row, col, i, 0);
		//最后一列
		if (board[i][col - 1] == 'O')
			dfs(board, row, col, i, col - 1);
	}
	//恢复所有的#位置，将'O'都改为'X'
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