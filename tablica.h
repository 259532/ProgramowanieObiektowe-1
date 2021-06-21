#pragma once

/// @file
class Tablica {
private:
    int width;
    int height;
    double** sheet;

public:
    void tworzenie_arkusza(int width, int height);
    void zmian_kom(class Tablica* tab, int x, int y, int wartosc);
    int zmien_tab(class Tablica* tab, int new_x, int new_y);
    int write(class Tablica tab);
    int read(class Tablica* tab);
    void wyswietlenie_arkusza(class Tablica tab);
    void arkusz_dane(class Tablica* arkusz);
    int get_height();
};

/** \brief Funkcja tworzy arkusz kozystajac ze struktury Tablica
*
 * @param[in,out] Struktura tablica zawierajaca arkusz
 *
 * @throws \Exception Funkcja wypisuje podanie blednych argumentow tablicy
*/
//void tworzenie_arkusza(class Tablica* tab);

/** \brief Funkcja zmienia wartosci komorek na te podane przez uzytkownika
*
 * @param[in,out] Struktura tablica przekazuje arkusz do manipulacji
 *
 * @throws \Exception Funkcja wypisuje błąd w przypadku wybrania nie istniejacej komorki
*/
void zmian_kom(class Tablica* tab, int x, int y, int wartosc);

/** \brief Funkcja zmienia wielkosc arkusza wedle parametrow podanych przez uzytkownika
*
 *  @param[in,out] Struktura zmienia arkusz wedle upodoban uzytkownika
 *  @param[in] new_x jest parametrem wedlog ktorego arkusz zmienia ilosc kolumn
 *  @param[in] new_y jest parametrem wedlog ktorego arkusz zmienia ilosc wierszy
 * 
 *  @throws \Exception Funkcja wypisuje podanie blednych argumentow tablicy
 */
int zmien_tab(class Tablica* tab, int new_x, int new_y);

