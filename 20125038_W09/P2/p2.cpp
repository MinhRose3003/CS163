#include<iostream>
#include<fstream>
#include"p2.h"
using namespace std;

int main()
{
	ifstream fin;
	int n;
	fin.open("input.txt");
	if (!fin.is_open()) return 0;
	fin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) a[i] = new int[n];
	GetData(fin, a, n);
	int start, end;
	cout << " Input the Start and the Endfrom 0 to " << n-1  << " : ";
	cin >> start >> end;
	DijkstraAlgorithm(a, n, start, end);
	return 0;
}