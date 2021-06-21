#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void wyswietlenie_arkusza(Tablica tab) {

    //cout << Tablica::height; nie 

    for (int i = 0; i < tab.height_setter(); i++) {

        for (int z = 0; z < tab.width_setter(); z++) {

            cout << tab.value_setter(i, z) << " ";
        }
        cout << endl;
    }
}
