#pragma once

using namespace std;

/// @file

class Cell {
public:

    /**
     * @brief  Funkcja odbiera wartosci z komorki
     * @param[out] Wartosc powbierana z komorki
    */
    virtual string getter() = 0;

    /**
     * @brief Funkcja nadajaca wartosc
     * @param[in] Wartosc nadawana komorce
    */
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
 
    /**
     * @brief Funkcja zwraca szerokosc
     * @param[out] Zwraca szerokosc
    */
    int width_setter();

    /**
     * @brief Funkcja zwraca wysokosc
     * @param[out] Zwraca wysokosc
    */
    int height_setter();

    Cell* return_cell(int width, int height);

    /**
    * \brief Funkcja sprawdza rodzaj komorek w kolumnie
    * @param[in] Nadawany rodzaj
    */
    int type_getter(int width);

    /**
    * \brief Funkcja nadaje rodzaj
    * @param[in] Typ nadany komorce
    */
    void type_setter(int* new_type);


    void column_change(int width, int type);

    /**
    * \brief Funkcja sumujaca wartosci w kolomnie
    * @param[in] Szerokosc
    * @param[out] Suma wartosci w kolomnie
    */
    double column_addition(int width);

    /**
    * \brief Funkcja sumujaca wartosc w kolomnie
    * @param[in] Wysokosc
    * @param[out] Suma wartosci w kolomnie
    */
    double row_addition(int height);

    /**
    * \brief Funkcja pokazuje najmniejsza wartosc w kolomnie
    * @param[in] Szerokosc
    * @param[out] Najmniejsza wartosc w kolomnie
    */
    double column_min(int width);

    /**
    * \brief Funkcja pokazuje najweksza wartosc w kolumnie
    * @param[in] Szerokosc
    * @param[out] Najwieksza wartosc w kolomnie
    */
    double column_max(int width);

    /**
    * \brief Funkcja pokazuje najmniesza wartosc w rzedzie
    * @param[in] Wysokosc
    * @param[out] Wartoscnajmniejsza w rzedzie
    */
    double row_min(int height);

    /**
    * \brief Funkcja pokazuje najwieksza wartosc w rzedzie
    * @param[in] Wysokosc
    * @param[out] Wartosc najwieksza rzedu
    */
    double row_max(int height);

    /**
    * \brief Funkcja pokazuje srednia sumy wartosci w rzedzie
    * @param[in] wysokosc
    * @param[out] Warttosc srenia sumy wartosci w rzedzie
    */
    double row_mean(int height);

    /**
    * \brief Funkcja pokazuje srednia sumy wartosci w kolumnie
    * @param[in] Szerokosc
    * @param[out] Warttosc srenia sumy wartosci w kolomnie
    */
    double column_mean(int width);
};

class Cell_double :public Cell {

    double val = 0;

public:   

    /**
    * \brief Funkcja zwracaja wartosc komorki
    * @param[out] Wartosc danej komorki
    */
    string getter();

    /**
    * \brief Funkcja nadaje wartosc kommorki
    * @param[in] Wartosc nadawanej komorce
    */
    void setter(string sett_val);

};

class Cell_string :public Cell {

    string val = "0";

public:

    /**
   * \brief Funkcja zwracaja wartosc komorki
   * @param[out] Wartosc danej komorki
   */
    string getter();

    /**
    * \brief Funkcja nadaje wartosc kommorki
    * @param[in] Wartosc nadawanej komorce
    */
    void setter(string sett_val);

};


