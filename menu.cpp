#include <iostream>
#include <cstdlib>
#include "menu.h"
#include "tablica.h"
#include "tablica_wysw.h"

using namespace std;

void interfejs()
{	
	int x = 0, a, b, r1, r2;
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
                a = rozmiar_1();
                b = rozmiar_2();
                arkusz = utworzenie_tabeli(a, b);
            
			}break;
	
		case 2:
			{
				
				
			
			}break;
		
		case 3:
			{
			
				zmiana_wartosci_tablicy(arkusz);
				
			
			}break;
		
		case 4: 
			{
            
				wyswietlenie(arkusz, a, b);
			
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
