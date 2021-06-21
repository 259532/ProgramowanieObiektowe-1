#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
#include <fstream>
using namespace std;

int read(Tablica* tab) {

    int temp_val;
    Tablica tab_zap;

    int height;
    int width;

    ifstream plik("Arkusz kalkulacyjny.txt");

    if (plik.good()) {

        plik >> height;
        plik >> width;

        tab_zap.tworzenie_arkusza(width, height);
        
        for (int i = 0; i < height; i++) {

            for (int j = 0; j < width; j++) {

                plik >> temp_val;
                tab_zap.zmian_kom(j, i, temp_val);
            }
        }
        (*tab) = tab_zap;
        plik.close();
        return 1;
    }
    else {

        plik.close();
        return 0;
    }
};

int write(Tablica tab) {      

    ofstream plik("Arkusz kalkulacyjny.txt");

    if (plik.good()) {

        plik << tab.height_setter();
        plik << tab.width_setter();

        for (int i = 0; i < tab.height_setter(); i++) {

            for (int j = 0; j < tab.width_setter(); j++) {

                plik << tab.value_setter(j, i) << "\t";
            }
            plik << "\n";
        }
        plik.close();
        return 1;
    }
    else {

        plik.close();
        return 0;
    }
};
