#include<iostream>
#include<fstream>
#include "p7.h"
using namespace std;

void getData(ifstream& fin, int *& a)
{
	int i = 0;
	while (!fin.eof())
	{
		fin >> a[i];
		i++;
	}	

}
int update(int*& a, int low, int high)
{
	int pivot = high;
	int k = low - 1;
	for (int i = low; i <= high - 1; i++)
	{
		if (a[i] < a[pivot])
		{
			k++;
			swap(a[k], a[i]);
		}

	}
	swap(a[k+1], a[pivot]);
	
	
	return k + 1;
}
void quickSortPivotInHigh(int*& a, int low, int high)
{
	if (low < high)
	{
		int pi = update(a, low, high);
		quickSortPivotInHigh(a, pi + 1, high);
		quickSortPivotInHigh(a, low, pi - 1);
	}
	
}

