#pragma once

/// @file
struct Tablica{

    double** Arkusz;
    int szerokosc;
    int wysokosc;
};

/** \brief Funkcja tworzy arkusz kozystajac ze struktury Tablica
* 
 * @param[in,out] Struktura tablica zawierajaca arkusz
 * 
*/
void tworzenie_arkusza(struct Tablica* tab);

/** \brief Funkcja zmienia wartosci komorek na te podane przez uzytkownika
* 
 * @param[in,out] Struktura tablica przekazuje arkusz do manipulacji
 * 
*/
void zmian_kom(struct Tablica* tab, int x, int y, int wartosc);

/** \brief Funkcja zmienia wielkosc arkusza wedle parametrow podanych przez uzytkownika
* 
 *  @param[in,out] Struktura zmienia arkusz wedle upodoban uzytkownika
 *  @param[in] new_x jest parametrem wedlog ktorego arkusz zmienia ilosc kolumn
 *  @param[in] new_y jest parametrem wedlog ktorego arkusz zmienia ilosc wierszy
 * 
 */
int zmien_tab(struct Tablica* tab, int new_x, int new_y);
