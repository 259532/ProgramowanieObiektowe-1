#include <iostream>
#include "menu.h"
#include "tablica.h"
#include "tablica_wysw.h"

using namespace std;


int rozmiar_1()
{
    
    int rozmiar1;
    
    cout << "Podaj liczbe wierszy: "; 

    cin >> rozmiar1;
    
    return rozmiar1;
    
}

int rozmiar_2()
{
    
    int rozmiar2;
    
    cout << "\nPodaj liczbe kolumn: "; 

    cin >> rozmiar2;
    
    return rozmiar2;
    
}

double** utworzenie_tabeli(int rozmiar1, int rozmiar2)
{
    
	double** tab = new double*[rozmiar1];

	for(int i = 0; i < rozmiar1; i++) tab[i] = new double[rozmiar2];
	
	return tab;
	
}

void zmiana_wartosci_tablicy(double** arkusz)
{
    
    int r1, r2;
    
	cout << "Wybierz element ktory chcesz zmienic" << endl;
    
    cout << "Wybierz wiersz: "; cin >> r1;
    
    cout << "\nWybierz kolumne: "; cin >> r2;
    
    cout << "\nPodaj nowa wartosc w wybranym miejscu: ";
    
	cin >> arkusz[r1][r2];
	
}
