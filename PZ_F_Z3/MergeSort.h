#pragma once
#include <iostream>

using namespace std;

class MergeSort
{
private:
	int roz;
	int* dane;
	int lew;
	int pra;
public:

	MergeSort(int tab[], int r, int p, int k);
	~MergeSort();
	void Merge(int p1[], int lr, int p2[], int pr);
	void Sort(int tab[], int l, int p);
	void Wypisz();
	void StartSort();
};

