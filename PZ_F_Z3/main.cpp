#include "MergeSort.h"


MergeSort Sortowanie(int tb[])
{

	int roz = sizeof(tb) / 4;

	MergeSort A(tb, roz, 0, roz - 1);

	return A;

}

int main()
{
	int tab[] = { 42, 53, 12, 24, 75, 3, 64, 8 };
	int roz = sizeof(tab) / 4;
	
	cout << "Nieposortowana tablica : \n";
	MergeSort A(tab, roz, 0, roz - 1);
	A.Wypisz();
	cout << "\n";
	A.StartSort();
	cout << "Posortowana tablica : \n";
	A.Wypisz();
	

	
}
