#include <iostream>
#include <cstdlib>
#include "tablica_wysw.h"
#include "menu.h"
#include "tablica.h"
#include "plik.h"
using namespace std;

void menu_tab()
{
    Tablica tab;
    int wybor;


    while (1) {

        wstep();
        cin >> wybor;
        switch (wybor) {

        case 1: {

            int height = arkusz_dane_height();
            int width = arkusz_dane_width();

            tab.tworzenie_arkusza(width, height);
            break;
        }
        case 2: {

            int szerokosc_a_n, wysokosc_a_n;
            zmiana_tablicy(&szerokosc_a_n, &wysokosc_a_n);

            if (tab.zmien_tab(szerokosc_a_n, wysokosc_a_n)) {

                cout << "Bledna wartosc rozmiaru!" << endl;
            }
            else {

                cout << "Zmiana przebiegla pomyslnie" << endl;
            }
            break;
        }
        case 3: {

            int x, y;
            string i;

            zmiana_wart(&x, &y);
            cin >> i;
            /*if (tab.return_cell(x, y)->check()) {

                string i;
                cin >> i;
                undefined = &(i);
            }
            else {

                double i;
                cin >> i;
                undefined = &(i);
            }*/

            tab.return_cell(x, y)->setter(i);
            break;
        }
        case 4: {

            wyswietlenie_arkusza(tab);
            break;
        }
        case 5: {


            write(tab);

            cout << "Tabela zosta?a zapisana" << endl;

            break;
        }
        case 6: {

            read(&tab);

            cout << "Tabela zosta?a wczytana" << endl;

            break;

        }
        case 7: {

            int width = 0;

            cout << "Wpisz kolumne w ktorej chcesz dodac liczby: " << endl;

            tab.column_addition(width); //doda? cin jaka kolumna wariacie?

            break;
        }
        case 8: {

            int height = 0;

            cout << "Wpisz wiersz w ktorym chcesz dodac liczby: " << endl;

            tab.row_addition(height); //doda? cin jaka kolumna wariacie?

            break;
        }
        case 9: {

            break;
        }
        case 10: {

            break;
        }
        case 11: {

            break;
        }
        case 12: {

            break;
        }
        case 13: {

            break;
        }
        case 14: {

            break;
        }
        case 15: {

            exit(0);
        }
        default: {

            cout << "Wprowadz poprawna liczbe" << endl;
        }
        }
    }
}

void wstep() {

    cout << endl;
    cout << "Witam w Exel Light" << endl;
    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Stworzenie tablicy." << endl;
    cout << "2. Zmienienie rozmiaru tablicy." << endl;
    cout << "3. Zmiana liczbai tablicy." << endl;
    cout << "4. Wyswietlenie calej tablicy." << endl;
    cout << "5. Zapisanie tablicy do pliku." << endl;
    cout << "6. Odczytanie tablicy z pliku." << endl;

    cout << "7. Dodawanie liczb w kolumnie." << endl;
    cout << "8. Dodawanie liczb w wierszu." << endl;

    cout << "9. Minimalna wartosc kolumny." << endl;
    cout << "10. Minimalna wartosc wiersza." << endl;

    cout << "11. Odczytanie tablicy z pliku." << endl;
    cout << "12. Odczytanie tablicy z pliku." << endl;
    cout << "13. Odczytanie tablicy z pliku." << endl;
    cout << "14. Odczytanie tablicy z pliku." << endl;
    cout << "15. Zakonczenie pracy programu" << endl;
    cout << "Wybierz numer zeby zainicjowac funkcje: ";
}

int arkusz_dane_width() {

    int width;

    cout << "Podaj szerokosc arkusza: " << endl;
    cin >> width;

    return (width);

}

int arkusz_dane_height() {

    int height;

    cout << "Podaj wysokosc arkusza: " << endl;
    cin >> height;

    return (height);
}

void zmiana_tablicy(int* szerokosc_a_n, int* wysokosc_a_n) {

    cout << "Podaj nowa szerokosc arkusza :" << endl;
    cin >> *szerokosc_a_n;
    cout << "Podaj nowa wysokosc arkusza :" << endl;
    cin >> *wysokosc_a_n;
}

void zmiana_wart(int* x, int* y) {

    cout << "Podaj numer wiersza komorki" << endl;
    cin >> *x;
    cout << "Podaj numer kolumny komorki" << endl;
    cin >> *y;
    cout << "Podaj wartosc jaka chcesz przypisac komorce: " << endl;
    
}

