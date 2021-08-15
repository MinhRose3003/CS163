#pragma once
#ifndef _p2_h_
#define _p2_h_
#include<iostream>
#include<fstream>
using namespace std;




void GetData(ifstream& fin, int**& a, int& n);
int GetMin(int* store, bool* visited, int n);
void updateStore(int** a, int n, int*& store, int u, bool* visited, int*& pre);
void DijkstraAlgorithm(int** a, int n, int start, int end);




#endif // !_p2_h_

