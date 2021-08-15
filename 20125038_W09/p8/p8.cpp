#include<iostream>
#include<fstream>
#include"p8.h"

using namespace std;


int main()
{
	int n = 10000;
	int* a = new int[n];
	ifstream fin;
	fin.open("input.txt");
	if (!fin.is_open()) return 0;
	getData(fin, a);
	fin.close();
	int count = countStep(a, n);
	RadixSort(a, n, count);
	for (int i = 0; i < n; i++)cout << a[i] << " ";
	return  0;
}
