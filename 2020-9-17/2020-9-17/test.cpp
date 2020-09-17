#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<int> Connect(vector<vector<int>>& road)
{
	unordered_set<int> st;
	for (int i = 0; i<2; i++)
		st.insert(road[0][i]);
	for (int i = 1; i<road.size(); i++)
	{
		if (st.find(road[i][0]) != st.end())
			st.insert(road[i][1]);
		else if (st.find(road[i][1]) != st.end())
			st.insert(road[i][0]);
	}
	return st;
}
int main()
{
	int n, m, q;
	while (cin >> n >> m >> q)
	{
		vector<vector<int>>road(m, vector<int>(2, 0));
		vector<vector<int>>ques(q, vector<int>(2, 0));
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<2; j++)
			{
				cin >> road[i][j];
			}
		}
		for (int i = 0; i<q; i++)
		{
			for (int j = 0; j<2; j++)
			{
				cin >> ques[i][j];
			}
		}
		unordered_set<int> st = Connect(road);
		for (int i = 0; i<q; i++)
		{
			if ((st.find(ques[i][0]) != st.end()) && (st.find(ques[i][1]) != st.end()))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}