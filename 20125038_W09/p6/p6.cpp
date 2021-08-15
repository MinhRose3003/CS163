#include<iostream>
#include<fstream>
#include"p6.h"
using namespace std;



int main()
{
	int n = 10000;
	int* a = new int[n];
	ifstream fin;
	fin.open("input.txt");
	if (!fin.is_open()) return  0;
	getData(fin, a);
	fin.close();
	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}
