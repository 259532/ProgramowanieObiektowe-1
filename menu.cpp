#include <iostream>
#include "zestaw.h"

using namespace std;

void interfejs()
{	
	int x = 0;
	double **arkusz;
	cout << "\t INSTRUKCJA PROGRAMU" << endl;
	cout << "--------------------------------------" << endl;
	
while(x!=7)
	{	
	cout << "\n 1.Utworzenie tablicy" << endl;
	cout << "2. Zmiana rozmiaru tablicy" << endl;
	cout << "3. Aktualizowanie zawartosci tablicy" << endl;
	cout << "4. Zmiana wartosci calej tabeli" << endl;
	cout << "5. Zmiana wartosci jednego elementu tabeli" << endl;
	cout << "6. Wyswietlenie tablicy" << endl;
	cout << "7. Wyjdz z programu" << endl;
	cout << "Wpisz numer zadania, do ktorego chcesz sie przedostac: "; cin >> x;
	system("cls");
	
	switch(x){
	
		case 1:
			{
				cout << "Podaj liczbe wierszy: "; 
				
				cin >> rozmiar1; 
				
				cout << "\n Podaj liczbe kolumn: "; 
				
				cin >> rozmiar2;
				
				arkusz = utworzenie_tabeli(rozmiar1,rozmiar2);
		
			}break;
	
		case 2:
			{
			
				//zmiana_rozmiaru();
			
			}break;
		
		case 3:
			{
			
			
			
			}break;
		
		case 4:
			{
			
			
			
			}break;
		
		case 5: 
			{
		
				
		
			}break;
		
		case 6: 
			{
			
				wyswietlenie(arkusz, rozmiar1, rozmiar2);
			
			}break;
			
			
		case 7: 
			{
			
				exit;
			
			}break;
			
		default:
			{
				cout << "Nie ma takiej mozliwosci, wybierz z zakresu 1-4" << endl;
			}
		}
	}
}
