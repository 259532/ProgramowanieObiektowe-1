#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
#include <fstream>
using namespace std;

int read(Tablica* tab) {

    string temp_val;
    Tablica tab_zap;

    int height;
    int width;

    ifstream plik("Arkusz kalkulacyjny.txt");

    if (plik.good()) {

        plik >> height;
        plik >> width;

        int* new_type = new int[width];

        tab_zap.tworzenie_arkusza(width, height);

        for (int i = 0; i < width; i++) {

            plik >> new_type[i];

            if (new_type[i] == 0) {

                tab_zap.column_change(i, 0);
            }
        }

        plik.ignore(10000, '\n');
        
        for (int i = 0; i < height; i++) {

            for (int j = 0; j < width; j++) {

                plik >> temp_val;
                tab_zap.zmian_kom(j, i, temp_val);

                plik.clear();

                plik.ignore(10000, '\t');
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

    string value;

    ofstream plik("Arkusz kalkulacyjny.txt");

    if (plik.good()) {

        plik << tab.height_setter() << endl;
        plik << tab.width_setter() << endl;

        for (int i = 0; i < tab.width_setter(); i++) {

            plik << tab.type_getter(i) << "\t";
        }

        plik << endl;

        for (int i = 0; i < tab.height_setter(); i++) {

            for (int j = 0; j < tab.width_setter(); j++) {

                value = (tab.return_cell(j, i)->getter());
                plik << value << "\t";
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

