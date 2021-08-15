#include<vector>
#include<iostream>
#include<fstream>
using namespace std;


bool checkVector(vector<int>& a, int x)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == x) return false;
	}
	a.push_back(x);
	return true;
}
int main()
{
	int max = 10000;
	int min = 1;
	vector<int> a;
	ofstream fout;
	fout.open("input.txt");
	if (!fout.is_open()) return 0;
	int rnd = min + rand() % (max - min + 1);
	a.push_back(rnd);
	for (int i = min+1; i <= max; i++)
	{
		int rnd = min + rand() % (max - min + 1);
		while (!checkVector(a, rnd))
		{
			rnd = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		fout << a[i] << " ";
	}
	fout.close();
	return 0;
}