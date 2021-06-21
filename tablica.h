#pragma once

using namespace std;

/// @file

class Cell {
public:
    
    virtual string getter() = 0;
    virtual void setter(string sett_val) = 0;

};


class Tablica {
private:

    int width;
    int height;
    Cell*** sheet;
    int* type;

public:


    /** \brief Funkcja tworzy arkusz kozystajac ze struktury Tablica
    *
    * @param[in,out] Struktura tablica zawierajaca arkusz
    *
    * @throws \Exception Funkcja wypisuje podanie blednych argumentow tablicy
    */
    int tworzenie_arkusza(int width, int height);

    /** \brief Funkcja zmienia wartosci komorek na te podane przez uzytkownika
    *
    * @param[in,out] Struktura tablica przekazuje arkusz do manipulacji
    *
    * @throws \Exception Funkcja wypisuje błąd w przypadku wybrania nie istniejacej komorki
    */
    void zmian_kom(int x, int y, string wartosc);

    /** \brief Funkcja zmienia wielkosc arkusza wedle parametrow podanych przez uzytkownika
    *
    *  @param[in,out] Struktura zmienia arkusz wedle upodoban uzytkownika
     *  @param[in] new_x jest parametrem wedlog ktorego arkusz zmienia ilosc kolumn
    *  @param[in] new_y jest parametrem wedlog ktorego arkusz zmienia ilosc wierszy
     *
     *  @throws \Exception Funkcja wypisuje podanie blednych argumentow tablicy
     */
    int zmien_tab(int new_x, int new_y);
   /* int write();
    int read();*/
    //void wyswietlenie_arkusza();
    //friend void arkusz_dane(class Tablica* arkusz);

    int width_setter();

    int height_setter();

    //double value_setter(int width, int height);

    Cell* return_cell(int width, int height);

    int type_getter(int width);
    void type_setter(int* new_type);

    void column_change(int width, int type);

    double column_addition(int width);

    double row_addition(int height);

    double column_min(int width);

    double column_max(int width);

    double row_min(int height);

    double row_max(int height);

    double row_mean(int height);

    double column_mean(int width);
};

class Cell_double :public Cell {

    double val = 0;

public:   
    string getter();
    void setter(string sett_val);

};

class Cell_string :public Cell {

    string val = "0";

public:
    string getter();
    void setter(string sett_val);

};

//class Cell {
//public:
//    double value;
//
//};



