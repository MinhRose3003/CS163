#include<iostream>
#include<fstream>
#include"p4.h"
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


void insertionSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		for (int j = i; j >= 0; j--)
		{
			if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
			else break;
		}
	}
}

