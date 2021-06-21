#pragma once

/// @file 

/** \brief Glowne menu programu
 *
*/
void menu_tab();

/** \brief Funkcja sluzaca do wpisywania danych do programu
 *
 */
void arkusz_dane(struct Tablica* arkusz);

/** \brief Funckja sluzaca do zmiany wielkosci tablicy
 *
 */
void zmiana_tablicy(int* szerokosc_a_n, int* wysokosc_a_n);

/** \brief Funkcja sluzaca do wpisywania danych do programu
 *
 */
void zmiana_wart(int* x, int* y, int* wartosc);

/** \brief Funkcja s?u?aca do wyswietlania menu
 *
 */
void wstep();