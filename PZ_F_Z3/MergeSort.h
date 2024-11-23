#pragma once
#include <iostream>


using namespace std;

/*! \brief Klasa sortowania tablicy.
 *         Klasa sluzy do przechowywania i sortowania tablice.
 *
 *  Klasa sortuje tablice z uzyciem rekursywnej meody Sort oraz metody Merge, pozostale metody sluza do testowania i obslugi klasy.
 */
class MergeSort

{
private:
	//! Zmienna pzechowujaca rozmiar tablicy
	int roz;
	//! Wskaznik przechowujacy adres do tablicy
	int* dane;
	//! Zmienna przechowujaca index poczatku tablicy
	int lew; 
	//! Zmienna przechowujaca index konca tablicy
	int pra;
public:
<<<<<<< Updated upstream
	//! Deklaracja kontruktora klasy
	MergeSort(int tab[], int r, int p, int k); 
	//! Deklaracja destruktora klasy
	~MergeSort();
	//! Deklaracja metody laczacej i sortujacej tablice przekazane do niej. 
	void Merge(int tab[], int l, int pivot, int p); 
	//! Deklaracja metody dzielacej i przekazujacej tablice do odpowiednich metod
	void Sort(int tab[], int l, int p);
	//! Deklaracja metody wypisujacej tablice
	void Wypisz(); 
	//! Deklaracja metody rozpoczynajacej sortowanie zapisanej tablicy      
	void StartSort(); 
=======

	MergeSort(int tab[], int r, int p, int k); //! Deklaracja kontruktora klasy
	~MergeSort(); //! Deklaracja destruktora klasy
	void Merge(int tab[], int l, int pivot, int p); //! Deklaracja metody laczacej i sortujacej tablice przekazane do niej. 
	void Sort(int tab[], int l, int p); //! Deklaracja metody dzielacej i przekazujacej tablice do odpowiednich metod
	void Wypisz(); //! Deklaracja metody wypisujacej tablice
	void StartSort(); //! Deklaracja  rozpoczynajace sortowanie zapisanej tablicy      
>>>>>>> Stashed changes
};

