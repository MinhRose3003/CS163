#pragma once
#ifndef _p8_h_
#define _p8_h_
#include<iostream>
#include<fstream>
using namespace std;


void getData(ifstream& fin, int*& a);
int countStep(int* a, int n);
void RadixSort(int*& a, int n, int step);

#endif // !_p8_h_

