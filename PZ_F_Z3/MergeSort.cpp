#pragma once
#include "MergeSort.h"

MergeSort::MergeSort(int tab[], int r, int p, int k)
{
	lew = p;
	pra = k;
	roz = r;
	dane = new int [r];
	for (int i = 0; i < r; i++) {
		dane[i] = tab[i];
	}
};

MergeSort::~MergeSort() 
{
	delete dane; 
};


void MergeSort::Sort()
{
	int p1 = pivot - lew + 1;
	int p2 = pra - pivot;
};

void MergeSort::Mk_Pivot()
{
	pivot = pra + (pra - lew) / 2;
};

void MergeSort::Wypisz()
{
	for (int i = 0; i < roz; i++)
	{
		cout << dane[i] << " ";
	}
}