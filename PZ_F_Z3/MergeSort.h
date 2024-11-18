#pragma once
#include <iostream>


using namespace std;

class MergeSort/*! \brief Klasa sortowania tablicy.
 *         Klasa sluzy do przechowywania i sortowania tablice.
 *
 *  Klasa sortuje tablice z uzyciem rekursywnej meody Sort oraz metody Merge, pozostale metody sluza do testowania i obslugi klasy.
 */

{
private:
	int roz; //! Zmienna pzechowujaca rozmiar tablicy
	int* dane; //! Wskaznik przechowujacy adres do tablicy
	int lew; //! Zmienna przechowujaca index poczatku tablicy
	int pra; //! Zmienna przechowujaca index konca tablicy
public:

	MergeSort(int tab[], int r, int p, int k); //! Deklaracja kontruktora klasy
	~MergeSort(); //! Deklaracja destruktora klasy
	void Merge(int tab[], int l, int pivot, int p); //! Deklaracja metody laczacej i sortujacej tablice przekazane do niej. 
	void Sort(int tab[], int l, int p);//! Deklaracja metody dzielacej i przekazujacej tablice do odpowiednich metod
	void Wypisz(); //! Deklaracja metody wypisujacej tablice
	void StartSort(); //! Deklaracja  rozpoczynajace sortowanie zapisanej tablicy      
};

