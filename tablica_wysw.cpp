#include <iostream>
#include "zestaw.h"

using namespace std;

void wyswietlenie(double **arkusz, int rozmiar1, int rozmiar2)
{

	for(int i = 0; i < rozmiar1; i++)
	{
		for(int j = 0; j < rozmiar2; j++)
		{
			cout << arkusz[i][j] << " ";
		}
			cout << endl;
	}
}		
