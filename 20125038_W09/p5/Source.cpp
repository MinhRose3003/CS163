#include<iostream>
#include<fstream>
#include"p5.h"
using namespace std;

void getData(ifstream& fin, int*& a)
{
	int i = 0;
	while (!fin.eof())
	{
		fin >> a[i];
		i++;
	}
}

void coutingSort(int* &a, int n)
{
	int* b = new int[n+1];
	for (int i = 1; i <= n; i++) b[i] = 0;
	for (int i = 0; i < n; i++)
	{
		int tmp = a[i];
		b[tmp] ++;
	}
	
	for (int i = 2; i <= n; i++)
	{
		b[i] = b[i] + b[i - 1];
	}

	int* c = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		int tmp = a[i];
		int index = b[tmp];
		c[index] = tmp;
		b[tmp]--;
	}
	for (int i = 1; i < n+1; i++)
	{
		a[i-1 ] = c[i];
	}
	delete[]b;
	delete[]c;

}

