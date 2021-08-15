#pragma once
#ifndef _p3_h_
#define _p3_h_
#include<iostream>
#include<fstream>
using namespace std;



void getData(int*& a, ifstream& fin , int n);
int getMin(int* a, int start, int n);
void selectionSort(int*& a , int n);
void print(int* a, int n);
#endif
