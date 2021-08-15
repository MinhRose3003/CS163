#include<iostream>
#include<fstream>
#include"p8.h"

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
int countStep(int* a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int tmp = a[i];
		int b = 0;
		while (tmp >= 10)
		{
			tmp /= 10;
			b++;
		}
		b++;
		if (b > count) count = b;
	}
	return count;
}
void RadixSort(int*& a, int n, int step)
{
	int* b = new int[n];
	for (int k = 1; k <= step; k++)
	{
		int count[10] = { 0 };
		for (int i = 0; i < n; i++)
		{
			int tmp = a[i] / (pow(10, k - 1));
			tmp = tmp % 10;
			count[tmp] ++;
		}
		for (int i = 1; i < 10; i++)
		{
			count[i] += count[i - 1];
		}
		for (int i = n-1; i >=0 ; i--)
		{
			int tmp = a[i] / (pow(10, k - 1));
			tmp = tmp % 10;
			b[count[tmp] - 1] = a[i];
			count[tmp] --;
		}
		for (int i = 0; i < n; i++)a[i] = b[i];
	}
}

