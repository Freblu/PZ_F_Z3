#include "MergeSort.h"

/*!Deklaracja \brief Definicja konstruktora klasy.
* Definicja konstruktora klasy slzacego do zapisania przekazanych argumentow do zmiennych klasy
*/
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

/*! \brief Definicja destruktora klasy.
* Definicja destruktora klasy sluzacego do zwolnienia wskaznika do tablicy gdy nie jest juz potrzebny
*/
MergeSort::~MergeSort()
{
	delete[] dane; 
};

/*! \brief Metoda klasy Merge sluzacej do polaczenia tablic.
* Metoda klasy Merge sluzacej do polaczenia dwoch tablic, ktore zostaly przekazane to tej metody przez metode Sort, w odpowiedniej kolejnosci.
*/
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


 /*! \brief Metoda ktora rekursywnie dzieli tablice i przekazuja ja do metody Merge
* Metoda ktora rekursywnie dzieli tablice, wedlug punktu zapisanego w zmiennej pivot, i przekazuja ja do metody Merge gdzie tablice sa odpowiednio laczone.
*/
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

/*! Metoda wypisujaca zapisana w klasie tablice. */
void MergeSort::Wypisz()
{
	for (int i = 0; i < roz; i++)
	{
		cout << dane[i] << " | " << i << " \n";
	}
}
/*! Metoda inicjujaca sortowanie zapisanej tablicy. */
void MergeSort::StartSort()
{
	Sort(dane, lew, pra);
}

int MergeSort::DajDane(int x)
{

    return dane[x];
}