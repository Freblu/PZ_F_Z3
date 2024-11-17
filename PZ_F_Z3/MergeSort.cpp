#pragma once
#include "MergeSort.h"

MergeSort::MergeSort(int tab[], int r, int p, int k)
{
	lew = p;
	pra = k;
	roz = r;
	dane = new int [r];
	for (int i = 0; i < r; i++) 
    {
		dane[i] = tab[i];
	}
};

MergeSort::~MergeSort() 
{
	delete[] dane; 
};

void MergeSort::Merge(int tab[], int l, int pivot, int p)
{
    int n1 = pivot - l + 1;
    int n2 = p - pivot;

    int* left = new int[n1];
    int* right = new int[n2];

    for (int i = 0; i < n1; i++)
        left[i] = tab[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = tab[pivot + 1 + i];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) 
    {
        if (left[i] <= right[j]) 
        {
            tab[k++] = left[i++];
        }
        else 
        {
            tab[k++] = right[j++];
        }
    }
    while (i < n1) 
    {
        tab[k++] = left[i++];
    }
    while (j < n2) 
    {
        tab[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
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
	Merge(tab, l, pivot, p);
};


void MergeSort::Wypisz()
{
	for (int i = 0; i < roz; i++)
	{
		cout << dane[i] << " ";
	}
}

void MergeSort::StartSort()
{
	Sort(dane, lew, pra);
}