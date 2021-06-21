#include <iostream>
#include <string>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void wyswietlenie_arkusza(Tablica tab) {

    //cout << Tablica::height; nie 
    string val;

    for (int i = 0; i < tab.height_setter(); i++) {

        for (int z = 0; z < tab.width_setter(); z++) {

            val = (tab.return_cell(z, i)->getter());
            cout << val << "\t";
            /*if (tab.return_cell(z, i)->check()) {

                val = *((string*)(tab.return_cell(z, i))->getter());
            }
            else {
                val = to_string(*((double*)(tab.return_cell(z, i)->getter())));
            }
            cout << val << "\t";*/
        }
        cout << endl;
    }
}

