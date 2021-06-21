#include <iostream>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
#include <string>
using namespace std;

int Tablica::tworzenie_arkusza(int width, int height){

    type = new int[width];

    Tablica::width = width;
    Tablica::height = height;

    Tablica::sheet = new Cell** [Tablica::width];

    for (int i = 0; i < width; i++) {

        type[i] = 1;
    }

    if (Tablica::width < 1 || Tablica::height < 1) {

        return 0;
    }
        else {
            for (int i = 0; i < Tablica::width; i++) {

                Tablica::sheet[i] = new Cell*[Tablica::height];
        }
    }

    for(int i = 0; i < Tablica::width; i++) {
        
        for (int z = 0; z < Tablica::height; z++) {
            Tablica::sheet[i][z] = new Cell_string;
        }

    }
    //for (int i = 0; i < Tablica::width; i++) {

    //    for (int z = 0; z < Tablica::height; z++) {

    //        Tablica::sheet[i][z].value = 0;
    //    }
    //    cout << endl;
    //};
}

void Tablica::zmian_kom(int x, int y, string wartosc) {

    Tablica::return_cell(x, y)->setter(wartosc);
    //Tablica::sheet[x][y].value = wartosc;
}

void Tablica::column_change(int width, int type) {
    
        switch (type)
        {
        case 0:
        {
            if (Tablica::type[width] == 0);
            else
            {
                for (int i = 0; i < Tablica::height; i++)
                {
                    sheet[width][i] = new Cell_double;
                }
                Tablica::type[width] = 0;
            }
            break;
        }

        case 1:
        {
            if (Tablica::type[width] == 1);
            else
            {
                for (int i = 0; i < Tablica::height; i++)
                {
                    sheet[width][i] = new Cell_string;
                }
                Tablica::type[width] = 1;
            }
            break;
        }

        default:
        {
            break;
        }
        }
    
}

int Tablica::zmien_tab(int new_x, int new_y) {

    Cell*** new_sheet = new Cell** [new_x];

    for (int i = 0; i < new_x; i++)
    {
        new_sheet[i] = new Cell * [new_y];
    }

    int* new_type = new int[new_x];

    for (int j = 0; j < new_x; j++)
    {
        if (this-> width > j)
        {
            new_type[j] = type[j];
        }
        else
        {
            new_type[j] = 1;
        }
    }

    for (int i = 0; i < new_x; i++)
    {
        for (int j = 0; j < new_y; j++)
        {
            if (i < this -> width && j < this -> height)
            {
                new_sheet[i][j] = sheet[i][j];
            }
            else if (new_type[i] == 0)
            {
                new_sheet[i][j] = new Cell_double;
            }
            else if (new_type[i] == 1) // single else if
            {
                new_sheet[i][j] = new Cell_string;
            }
        }
    };

    Tablica::sheet = new_sheet;
    this -> type = new_type;
    Tablica::width = new_x;
    Tablica::height = new_y;



    //if (new_x < 1 || new_y < 1) {

    //    return 1;
    //}

    //Cell** tablica_po_zmianie = new Cell* [new_y];

    //for (int k = 0; k < new_y; k++) {

    //    tablica_po_zmianie[k] = new Cell[new_x];
    //}
    //if (new_x < Tablica::width) {

    //    Tablica::width = new_x;
    //}

    //if (new_y < Tablica::height) {

    //    Tablica::height = new_y;
    //}


    //for (int i = 0; i < Tablica::height; i++) {

    //    for (int j = 0; j < Tablica::width; j++) {

    //        tablica_po_zmianie[i][j].value = Tablica::sheet[i][j].value;
    //    }
    //}

    //Tablica::sheet = tablica_po_zmianie;

    //Tablica::width = new_x; Tablica::height = new_y;
    //return 0;

    return 0;
}

Cell* Tablica::return_cell(int width, int height) {

    return Tablica::sheet[width][height];
}

int Tablica::height_setter() {

    return Tablica::height;
}

int Tablica::width_setter(){

    return Tablica::width;
}

//double Tablica::value_setter(int width, int height){ 
//    
//    return Tablica::sheet[width][height].value;
//}

string Cell_double::getter() {

    return to_string(val);
}

void Cell_double::setter(string sett_val) {
     
    try {

        this -> val = stod(sett_val);

    }
    catch (...) {

        this -> val = 0; //poprawic!!

    }  
}

string Cell_string::getter() {

    return val;
}

void Cell_string::setter(string sett_val) {

    val = sett_val; // !
}

int Tablica::type_getter(int width) {

    return type[width];
}

void Tablica::type_setter(int* new_type) {

    type = new_type;
}

double Tablica::column_addition(int width) {

    double score = 0;

    if (type[width] == 0) {

        for (int i = 0; i < Tablica::height; i++) {
            score += stod(Tablica::return_cell(width, i)->getter());

        }
        return score;

    }
}

double Tablica::column_min(int width) {

    double score = 0;


    if (type[width] == 0) {

        score = stod(Tablica::return_cell(width, 0)->getter());

        for (int i = 0; i < Tablica::height; i++) {

            if(score > stod(Tablica::return_cell(width, i)->getter()))

            score = stod(Tablica::return_cell(width, i)->getter());

        }
        return score;

    }
}

double Tablica::column_max(int width) {

    double score = 0;


    if (type[width] == 0) {

        score = stod(Tablica::return_cell(width, 0)->getter());

        for (int i = 0; i < Tablica::height; i++) {

            if (score < stod(Tablica::return_cell(width, i)->getter()))

                score = stod(Tablica::return_cell(width, i)->getter());

        }
        return score;

    }
}

double Tablica::column_mean(int width) {

    double score = 0;

    if (type[width] == 0) {

        for (int i = 0; i < Tablica::height; i++) {
            score += stod(Tablica::return_cell(width, i)->getter());

        }
        return score/Tablica::height;

    }
}

double Tablica::row_max(int heaight) {

    double score = 0;
    double check = 0;
    
    for (int i = 0; i < Tablica::width; i++) {

        if (type[i] == 0) {

            score = stod(Tablica::return_cell(i, height)->getter());
        }
    }

    for (int i = 0; i < Tablica::width; i++) {

        if (type[i] == 0) {

            if (score < stod(Tablica::return_cell(i, height)->getter())) {

                score = stod(Tablica::return_cell(i, height)->getter());
            }
        }
    }

    return score;
}

double Tablica::row_min(int heaight) {

    double score = 0;
    double check = 0;

    for (int i = 0; i < Tablica::width; i++) {

        if (type[i] == 0) {

            score = stod(Tablica::return_cell(i, height)->getter());
        }
    }

    for (int i = 0; i < Tablica::width; i++) {

        if (type[i] == 0) {

            if (score > stod(Tablica::return_cell(i, height)->getter())) {

                score = stod(Tablica::return_cell(i, height)->getter());
            }
        }
    }

    return score;
}

//double Tablica::row_mean(int height) {
//
//    
//    double score;
//    double check = 0;
//
//    for (int i = 0; i < Tablica::width; i++) {
//
//        if (type[i] == 0) {
//
//            score = stod(Tablica::return_cell(i, height)->getter());
//        }
//    }
//
//    for (int i = 0; i < Tablica::width; i++) {
//
//        if (type[i] == 0) {
//
//            if (score > stod(Tablica::return_cell(i, height)->getter())) {
//
//                score = stod(Tablica::return_cell(i, height)->getter());
//            }
//        }
//    }
//}

double Tablica::row_addition(int height) {
    
    double score = 0;
    double check = 0;

    //if (type[height] == 0) {

        for (int i = 0; i < Tablica::width; i++) {

            if (type[i] == 0) {

                score += stod(Tablica::return_cell(height, i)->getter());

            }
            else {

                check++;
            }
            //score += stod(Tablica::return_cell(height, i)->getter());

        }

        // if (check == Tablica::height) {

        //     cout << "Brak liczb" << endl;

        // }
        // else {

             return score;
        }
        
    //}
}

double Tablica::row_mean(int height) {

    double score = 0;
    double check = 0;

    //if (type[i] == 0) {

        for (int i = 0; i < Tablica::width; i++) {

            if (type[i] == 0) {

                score += stod(Tablica::return_cell(height, i)->getter());

            }
            else {

                check++;
            }
            //score += stod(Tablica::return_cell(height, i)->getter());

        }

        if (check == Tablica::width) {

            //cout << "Brak liczb" << endl;    return !!!!!

        }
        else {

            return score / (Tablica::width - check);
        }

    //}
}