///@file
/**
 *  Funkcja "utworzenie_tabeli" odpowiada za stworzenie tablicy wypelnionej zerami, o wymiarach podanych przez uzytkownika.
 *
 * @param[out] utworzenie_tabeli Po pobraniu wymiarow tabeli tworzy ja i zapisuje w pamieci. 
 * @param[in] rozmiar1 Liczba wierszy tabeli
 * @param[in] rozmiar2 Liczba kolumn tabeli
 */
double** utworzenie_tabeli(int rozmiar1, int rozmiar2);
/**
 *  Funkcja "zmiana_wartosci_tablicy" pozwala na zmiane dowolnego elementu tablicy, ktora zostala wczesniej utworzona przez uzytkownika.
 * 
 * @param[in,out] arkusz Pobieranie z pamieci rozmiaru oraz zawartosci tablicy.
 * 
 */
void zmiana_wartosci_tablicy(double** arkusz);
/**
 *  Funkcja "rozmiar_1" pozwala na podanie uzytkownikowi pierwszego wymiaru tablicy - wiersze.
 * 
 * @param[out] rozmiar_1 Zwraca liczbe podana przez uzytkownika.
 * 
 */
int rozmiar_1();
/**
 *  Funkcja "rozmiar_2" pozwala na podanie uzytkownikowi pierwszego wymiaru tablicy - kolumny.
 * 
 * @param[out] rozmiar_2 Zwraca liczbe podana przez uzytkownika.
 * 
 */
int rozmiar_2();
