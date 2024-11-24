#include "MergeSort.h"


MergeSort Sortowanie(int tb[])
{

	int roz = sizeof(tb) / 4;

	MergeSort A(tb, roz, 0, roz - 1);

	return A;

}

int main()
{
	srand(time(NULL));

    int tab[102];
    int x = 0;
    for (int i = 0; i < 101; ++i) {
        x = -abs(rand());
        tab[i] = x;
        if (i < 101)
            i++;
        tab[i] = x;
        if (i < 101)
            i++;
        x = abs(rand());
        tab[i] = x;
        if (i < 101)
            i++;
        tab[i] = x;
    }
	int roz = sizeof(tab) / sizeof(tab[0]);
	
	cout << "Nieposortowana tablica : \n";
	MergeSort A(tab, roz, 0, roz - 1);
	A.Wypisz();
	cout << "\n";
	A.StartSort();
	cout << "Posortowana tablica : \n";
	A.Wypisz();
}
