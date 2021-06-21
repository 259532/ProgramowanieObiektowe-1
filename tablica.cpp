#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void tworzenie_arkusza(Tablica* tab)
{
    (*tab).sheet = new double* [(*tab).width];

    for (int i = 0; i < (*tab).width; i++) {

        (*tab).sheet[i] = new double[(*tab).height];
    }

    for (int i = 0; i < (*tab).width; i++) {

        for (int z = 0; z < (*tab).height; z++) {

            (*tab).sheet[i][z] = 0;
        }
        cout << endl;
    };
}

void zmian_kom(Tablica* tab, int x, int y, int wartosc) {

    (*tab).sheet[y][x] = wartosc;
}

int zmien_tab(Tablica* tab, int new_x, int new_y) {

    if (new_x < 1 || new_y < 1) {

        return 1;
    }

    double** tablica_po_zmianie = new double* [new_y];

    for (int k = 0; k < new_y; k++) {

        tablica_po_zmianie[k] = new double[new_x];
    }
    if (new_x < (*tab).width) {

        (*tab).width = new_x;
    }

    if (new_y < (*tab).height) {

        (*tab).height = new_y;
    }


    for (int i = 0; i < (*tab).height; i++) {

        for (int j = 0; j < (*tab).width; j++) {

            tablica_po_zmianie[i][j] = (*tab).sheet[i][j];
        }
    }

    (*tab).sheet = tablica_po_zmianie;

    (*tab).width = new_x; (*tab).height = new_y;
    return 0;

}
