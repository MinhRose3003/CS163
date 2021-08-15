#include<iostream>
#include<fstream>
#include"p3.h"

using namespace std;




int main()
{
	int n = 10000;
	ifstream fin;
	fin.open("input.txt");
	if (!fin.is_open()) return 0;
	int* a = new int[n];
	getData(a, fin,n);
	fin.close();
	selectionSort(a,n);
	print(a, n);
	return 0;
}