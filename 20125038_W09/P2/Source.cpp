#include<iostream>
#include<fstream>
#include"p2.h"
using namespace std;

void GetData(ifstream& fin, int**& a, int& n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			fin >> a[i][j];
}


int GetMin(int* store, bool* visited, int n)
{
	int MIN = 1e9;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		if (!visited[i] && store[i] != 0 && store[i] < MIN)
		{
			MIN = store[i];
			tmp = i;
		}
	}
	visited[tmp] = true;
	return tmp;
}
void updateStore(int** a, int n, int*& store, int u, bool* visited, int*& pre)
{
	for (int i = 0; i < n; i++)
	{
		if (!visited[i] && a[u][i] != 0)
		{
			int tmp = a[u][i] + store[u];
			if (store[i] == 0)
			{
				store[i] = tmp;
				pre[i] = u;
			}
			else if (store[i] > tmp)
			{
				store[i] = tmp;
				pre[i] = u;
			}

		}
	}
}
void DijkstraAlgorithm(int** a, int n, int start, int end)
{
	int* store = new int[n];
	bool* visited = new bool[n];
	int* pre = new int[n];
	for (int i = 0; i < n; i++)
	{
		store[i] = 0;
		pre[i] = -1;
		visited[i] = false;
	}
	visited[start] = true;
	int choose = start;
	while (choose != end)
	{
		updateStore(a, n, store, choose, visited, pre);
		choose = GetMin(store, visited, n);
	}
	int cur = end;
	cout << cur << " ";
	while (cur != start)
	{
		cout << pre[cur] << " ";
		cur = pre[cur];
	}
	cout << "= " << store[end];

	delete[]store;
	delete[]visited;
	delete[]pre;

}