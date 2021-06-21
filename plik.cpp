#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
#include <fstream>
using namespace std;

int read(Tablica* tab) {

    (*tab).sheet = nullptr;
    ifstream plik("Arkusz kalkulacyjny.txt");

    if (plik.good()) {

        /*int width = arkusz_dane_height();
        int height = arkusz_dane_width();

        tworzenie_arkusza(int width, int height);

        for (int i = 0; i < tab -> get_height(); i++) {

            for (int j = 0; j < (*tab).width; j++) {

                plik >> (*tab).sheet[i][j];
            }
        }
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


        for (int i = 0; i < tab.height; i++) {

            for (int j = 0; j < tab.width; j++) {

                plik << tab.sheet[i][j] << "\t";
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