#pragma once
#include <iostream>

using namespace std;

class MergeSort
{
private:
	int pivot = 0;
	int roz;
	int* dane;
	int lew;
	int pra;
public:

	MergeSort(int tab[], int r, int p, int k);
	~MergeSort();
	void Sort();
	void Mk_Pivot();
	void Wypisz();
};

