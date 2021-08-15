#pragma once
#ifndef _p7_h_
#define _p7_h_
#include<iostream>
#include<fstream>
using namespace std;


void getData(ifstream& fin, int*& a);
int update(int*& a, int low, int high);
void quickSortPivotInHigh(int*& a, int low, int high);

#endif // !_p7_h_

