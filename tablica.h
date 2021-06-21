#pragma once

/// @file
class Tablica {
private:
    int width;
    int height;
    double** sheet;

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
    void zmian_kom(int x, int y, int wartosc);

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
    double value_setter(int width, int height);
};




