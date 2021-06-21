#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

int Tablica::tworzenie_arkusza(int width, int height){

    Tablica::width = width;
    Tablica::height = height;

    Tablica::sheet = new double* [Tablica::width];

    if (Tablica::width < 1 || Tablica::height < 1) {

        return 0;
    }
        else {
            for (int i = 0; i < Tablica::width; i++) {

                Tablica::sheet[i] = new double[Tablica::height];
        }
    }

    for (int i = 0; i < Tablica::width; i++) {

        for (int z = 0; z < Tablica::height; z++) {

            Tablica::sheet[i][z] = 0;
        }
        cout << endl;
    };
}

void Tablica::zmian_kom(int x, int y, int wartosc) {

    Tablica::sheet[y][x] = wartosc;
}

int Tablica::zmien_tab(int new_x, int new_y) {

    if (new_x < 1 || new_y < 1) {

        return 1;
    }

    double** tablica_po_zmianie = new double* [new_y];

    for (int k = 0; k < new_y; k++) {

        tablica_po_zmianie[k] = new double[new_x];
    }
    if (new_x < Tablica::width) {

        Tablica::width = new_x;
    }

    if (new_y < Tablica::height) {

        Tablica::height = new_y;
    }


    for (int i = 0; i < Tablica::height; i++) {

        for (int j = 0; j < Tablica::width; j++) {

            tablica_po_zmianie[i][j] = Tablica::sheet[i][j];
        }
    }

    Tablica::sheet = tablica_po_zmianie;

    Tablica::width = new_x; Tablica::height = new_y;
    return 0;

}

int Tablica::height_setter() {

    return Tablica::height;
}

int Tablica::width_setter(){

    return Tablica::width;
}

double Tablica::value_setter(int width, int height){ //zajebiscie
    
    return Tablica::sheet[width][height];
}
