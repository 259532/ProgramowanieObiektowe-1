#include <iostream>
#include <cstdlib>
#include "zestaw.h"

using namespace std;

void interfejs()
{	
	int x = 0;
	double **arkusz;
	cout << "\t INSTRUKCJA PROGRAMU" << endl;
	cout << "--------------------------------------" << endl;
	
while(x!=5)
	{	
	cout << "1. Utworzenie tablicy" << endl;
	cout << "2. Zmiana rozmiaru tablicy" << endl;
	cout << "3. Zmiana wartosci jednego elementu tabeli" << endl;
	cout << "4. Wyswietlenie tablicy" << endl;
	cout << "5. Wyjdz z programu" << endl;
	cout << "Wpisz numer zadania, do ktorego chcesz sie przedostac: "; cin >> x;
	system("clear");
	
	switch(x){
	
		case 1:
			{
				cout << "Podaj liczbe wierszy: "; 
				
				cin >> rozmiar1; 
				
				cout << "\nPodaj liczbe kolumn: "; 
				
				cin >> rozmiar2;
				
				arkusz = utworzenie_tabeli(rozmiar1,rozmiar2);
		
			}break;
	
		case 2:
			{
				
				
			
			}break;
		
		case 3:
			{
			
				int x,y;
				
				cout << "Wybierz element ktory chcesz zmienic" << endl;
				cout << "Wybierz wiersz: "; cin >> y;
				cout << "Wybierz kolumne: "; cin >> x;
				
				zmiana_wartosci_tablicy(arkusz, x, y);
				
			
			}break;
		
		case 4: 
			{
			
				wyswietlenie(arkusz, rozmiar1, rozmiar2);
			
			}break;
			
		case 5: 
			{
			
				exit(0);
			
			}break;
		
		default:
			{
				cout << "Nie ma takiej mozliwosci, wybierz z zakresu 1-4" << endl;
			}
		}
	}
}
