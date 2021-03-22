1. Interfejs 

  - Działanie interfesju za pomocą switcha i przypisanych numerów do case'ów
  - Krótkie przedstawienie programu
  - Wyświetla się menu
  - Wyswietlnie jakie możliwosci ma program

2. Mozliwosci programu

  - Tworzenie tablicy wielowymiarowej:
        - utworzenie dwóch funkcji pomocniczych:
            - wewnątrz funkcji podajemy rozmiar tabeli - cin >> rozmiar1; cin >> rozmiar2;
                - obie funkcje odpowiednio zwracaja rozmiar wierszy i kolumn, które zostają przypisane do zmiennych w menu.
  - Zmiana rozmiaru tablicy wielowymiarowej:
        - nadpisanie parametrow tablicy podanych case'sie pierwszym
            - uzycie cin>>; 
  - Zmienianie wartosci elementów w tablicy:
        - podanie miejsca do zmiany za pomocą podanego przez użytkownika miejsca, cin >> r1; cin >> r2; 
            - nastepnie po wskazaniu, wpisanie wartości, które ma zastąpić domyślne 0.
  - Wyswietlenie tablicy
        - Wykorzystanie przypisanych zmiennych z pierwszego case'a
            - użycie cout << arkusz[z][y];
        - Wykorzystanie nadpisanych zmiennych z drugiego case'a
            - wyswielenie tablicy za pomoca cout<<arkusz[z][y]
  - Zakonczenie pracy programu:
        - zakonczenie programu za pomoca funkcji exit(0);
