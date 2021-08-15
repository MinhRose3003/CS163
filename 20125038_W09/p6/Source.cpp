#include<iostream>
#include<fstream>
#include"p6.h"
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
void merge2Array(int*& a1, int n1, int*& a2, int n2, int*& a)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n1 && j < n2)
	{
		if (a1[i] < a2[j])
		{
			a[k] = a1[i];
			i++;
			k++;
		}
		else
		{
			a[k] = a2[j];
			j++;
			k++;
		}
	}
	while (i < n1)
	{
		a[k] = a1[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		a[k] = a2[j];
		j++;
		k++;
	}
}
void mergeSort(int*& a, int begin , int end)
{
	if (begin == end) return;
	int mid = begin + (end - begin) / 2;
	int left = mid - begin + 1;
	int right = end - mid;
	int* a1 = new int[left];
	int* a2 = new int[right];
	for (int i = 0; i < left; i++)
	{
		a1[i] = a[begin +i];
	}
	for (int i = 0; i < right; i++)
	{
		a2[i] = a[mid + 1 + i];
	}
	mergeSort(a1, 0, left - 1);
	mergeSort(a2, 0, right - 1);
	merge2Array(a1, left, a2, right, a);
}



