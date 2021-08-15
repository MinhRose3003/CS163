#pragma once
#ifndef _p6_h_
#define _p6_h_
#include<iostream>
#include<fstream>

using namespace std;

void getData(ifstream& fin, int*& a);
void merge2Array(int*& a1, int n1, int*& a2, int n2, int*& a);
void mergeSort(int*& a, int begin, int end);



#endif // !_p6_h_

