#pragma once
#pragma once

/// @file

/** \brief Funkcja wczytuje plik z pliku
*
 *  @param[in,out] Struktura jest uzupelniana o informacje w pliku
 */
int read(class Tablica* tab);

/** \brief Funkcja "write" zapisuje do pliku tekstowego wielko?? arkusza oraz zawartosc ca?ego arkusza
*
 *  @param[in] Arkusz zapisuje tablice do pliku
 */
int write(class Tablica tab);
