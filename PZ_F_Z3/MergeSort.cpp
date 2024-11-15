#pragma once
#include "MergeSort.h"

MergeSort::MergeSort(int r, int tab[], int p, int k)
{
	poc = p;
	kon = k;
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

void MergeSort::Split()
{

};

void MergeSort::Merge()
{

};

void MergeSort::Mk_Pivot()
{
};