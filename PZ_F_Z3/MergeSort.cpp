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

void MergeSort::Merge(int p1[], int lr, int p2[], int pr)
{
	int* tab = new int[roz];


}

void MergeSort::Sort(int tab[], int l, int p)
{
	if (l >= p)
	{
		return;
	}
	int pivot = l + (p - l) / 2;
	Sort(tab, l, pivot);
	Sort(tab, pivot + 1, p);
	
	int* p1 = new int[pivot - l + 1];
	int* p2 = new int[p - pivot];

	for (int i = 0; i <= pivot - lew; i++)
	{
		p1[i] = tab[l + i];
	}

	for (int i = 0; i <= p - pivot; i++)
	{
		p2[i] = tab[pivot + 1 + i];
	}
	Merge(p1, pivot - l + 1, p2, p - pivot);
};


void MergeSort::Wypisz()
{
	for (int i = 0; i < roz; i++)
	{
		cout << dane[i] << " ";
	}
}