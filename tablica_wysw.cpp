#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void wyswietlenie_arkusza(Tablica tab) {

    for (int i = 0; i < tab.height; i++) {

        for (int z = 0; z < tab.width; z++) {

            cout << tab.sheet[i][z] << " ";
        }
        cout << endl;
    }
}
