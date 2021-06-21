#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void tworzenie_arkusza(Tablica* tab)
{
    (*tab).Arkusz = new double* [(*tab).szerokosc];

    for (int i = 0; i < (*tab).szerokosc; i++){

        (*tab).Arkusz[i] = new double[(*tab).wysokosc];
    }

    for (int i = 0; i < (*tab).szerokosc; i++){

        for (int z = 0; z < (*tab).wysokosc; z++){

            (*tab).Arkusz[i][z] = 0;
        }
        cout << endl;
    };
}

void zmian_kom(Tablica* tab, int x, int y, int wartosc){

    (*tab).Arkusz[y][x] = wartosc;
}

int zmien_tab(Tablica* tab, int new_x, int new_y){

    if (new_x < 1 || new_y < 1){

        return 1;
    }

    double** tablica_po_zmianie = new double* [new_y];

    for (int k = 0; k < new_y; k++){

        tablica_po_zmianie[k] = new double[new_x];
    }
    if (new_x < (*tab).szerokosc){

        (*tab).szerokosc = new_x;
    }

    if (new_y < (*tab).wysokosc){

        (*tab).wysokosc = new_y;
    }

    
    for (int i = 0; i < (*tab).wysokosc; i++){

        for (int j = 0; j < (*tab).szerokosc; j++){

            tablica_po_zmianie[i][j] = (*tab).Arkusz[i][j];
            }
        }
    
    (*tab).Arkusz = tablica_po_zmianie;

    (*tab).szerokosc = new_x; (*tab).wysokosc = new_y;
    return 0;

}
