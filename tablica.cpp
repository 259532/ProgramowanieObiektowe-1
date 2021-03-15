#include <iostream>
#include "zestaw.h"

using namespace std;


double** utworzenie_tabeli(int rozmiar1, int rozmiar2)
{

	double** tab = new double*[rozmiar1];

	for(int i = 0; i < rozmiar1; i++) tab[i] = new double[rozmiar2];
	
	return tab;
	
}

int rozmiar1, rozmiar2;


