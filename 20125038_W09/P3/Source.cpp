#include<iostream>
#include<fstream>
#include"p3.h"
using namespace std;



void getData(int*& a, ifstream& fin , int n)
{
	for (int i = 0; i < n; i++)
	{
		fin >> a[i];
	}
}
int getMin(int* a, int start , int n)
{
	int tmp = start;
	int min = a[start];
	for (int i = start + 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			tmp = i;
		}
	}
	return tmp;
}
void selectionSort(int*& a, int n)
{
	int pos = 0;
	while (pos != n - 1)
	{
		int tmp = getMin(a, pos, n);
		swap(a[pos], a[tmp]);
		pos++;
	}
}

void print(int* a , int n)
{
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}