#pragma once
#include <iostream>

using namespace std;

class MergeSort
{
private:
	int pivot;
	int roz;
	int* dane;
	int poc;
	int kon;
public:

	MergeSort(int r, int tab[], int p, int k);
	~MergeSort();
	void Split();
	void Merge();
	void Mk_Pivot();
};

