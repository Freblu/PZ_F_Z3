#include "MergeSort.h"

int main()
{
	int tab[] = { 42, 64, 12, 24, 75, 3, 64, 8 };
	int roz = sizeof(tab) / 4;
	cout << "Nieposortowana tablica : \n";
	MergeSort A(tab, roz, 0, roz - 1);
	A.Wypisz();
	cout << "\n";
}