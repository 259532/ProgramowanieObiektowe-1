#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void wyswietlenie_arkusza(Tablica tab){

    for (int i = 0; i < tab.wysokosc; i++){

        for (int z = 0; z < tab.szerokosc; z++){

            cout << tab.Arkusz[i][z] << " ";
        }
        cout << endl;
    }
}
