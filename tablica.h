#pragma once

/// @file
class Tablica {

    int width;
    int height;
    double** sheet;

    friend void tworzenie_arkusza(class Tablica* tab);
    friend void zmian_kom(class Tablica* tab, int x, int y, int wartosc);
    friend int zmien_tab(class Tablica* tab, int new_x, int new_y);
    friend int write(class Tablica tab);
    friend int read(class Tablica* tab);
    friend void wyswietlenie_arkusza(class Tablica tab);
    friend void arkusz_dane(class Tablica* arkusz);
};

/** \brief Funkcja tworzy arkusz kozystajac ze struktury Tablica
*
 * @param[in,out] Struktura tablica zawierajaca arkusz
 *
*/
void tworzenie_arkusza(class Tablica* tab);

/** \brief Funkcja zmienia wartosci komorek na te podane przez uzytkownika
*
 * @param[in,out] Struktura tablica przekazuje arkusz do manipulacji
 *
*/
void zmian_kom(class Tablica* tab, int x, int y, int wartosc);

/** \brief Funkcja zmienia wielkosc arkusza wedle parametrow podanych przez uzytkownika
*
 *  @param[in,out] Struktura zmienia arkusz wedle upodoban uzytkownika
 *  @param[in] new_x jest parametrem wedlog ktorego arkusz zmienia ilosc kolumn
 *  @param[in] new_y jest parametrem wedlog ktorego arkusz zmienia ilosc wierszy
 *
 */
int zmien_tab(class Tablica* tab, int new_x, int new_y);

