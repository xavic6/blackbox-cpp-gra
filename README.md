# blackbox-cpp-gra
Black Box to klasyczna gra logiczna napisana w C++, symulujaca strzelanie promieniami do "czarnej skrzynki", by zlokalizować ukryte atomy. Gracz analizuje odbicia i trafienia promieni, by przejść poziom.

OPIS PROJEKTU
-------------
Gra realizuje projekt z Podstaw Programowania. Plansze o rozmiarach 5x5 (3 atomy), 8x8 (5 atomow) i 10x10 (8 atomow) generowane losowo. Gracz strzela z krawedzi (H=trafienie, R=odbicie), oznacza przypuszczenia ('o') i sprawdza wynik.

Konsolowa aplikacja z menu, poziomami trudnosci i punktacją. Sterowanie klawiaturą (WASD=poruszanie, spacja=strzał, k=koniec, p=poddanie, h=podpowiedz).

GŁÓWNE FUNKCJE
--------------
- Menu gówne z wyborem poziomów (1-3) i opcjami (sterowanie, wyjście)
- Losowe rozmieszczenie atomów bez kolizji (losowanieatomow())
- Symulacja promieni z 4 krawedzi (strzelanie()) z wizualizacja trajektorii
- Zaznaczanie/usuwanie przypuszczen ('o'), punktacja za poprawne (zgadywanie())
- Grafika konsolowa z ramkami ASCII, kursorem (^v<>) i historia strzałów (grafika())
- Pomoc (h=podpowiedz chwilowa, p=poddanie z rozwiazaniem)

STEROWANIE
----------
W/w, S/s, A/a, D/d - poruszanie kursorem po krawedziach
Spacja             - strzal z aktualnej pozycji (tylko krawedz)
o                  - zaznacz/odznacz przypuszczenie atomu
k                  - zakoncz etap, pokaz wynik/punkty
p                  - poddaj sie, pokaz rozwiazanie
h                  - chwilowa podpowiedz (ukryte atomy)
q                  - powrot do menu

TECHNOLOGIE I WYMAGANIA
-----------------------
Język:     C++ (standardowa biblioteka: iostream, iomanip, cstdlib, time.h)
Srodowisko: Dowolny kompilator g++/clang++ (Windows/Linux)
Interfejs: Konsolowy z ASCII art i tabelami
Brak zaleznosci zewnetrznych - czysta C++98/03

INSTALACJA I URUCHOMIENIE
-------------------------
1. git clone https://github.com/xavic6/blackbox-cpp-gra.git
2. g++ blackbox.cpp -o blackbox
3. ./blackbox    (Linux/Mac)
   blackbox.exe  (Windows)

Rozdzielczosc konsoli: min 80x25 kolumn.

ZAWARTOŚĆ REPO
--------------
├── blackbox.cpp          # Główny plik zródlony gry
├── README.md             # Dokumentacja
└── screenshots/          # Zruty ekranu plansz/menu

ŹRÓDŁA I SPECYFIKACJA
---------------------
- Instrukcja projektowa Podstawy Programowania 23/24
- Inspiracja: Oryginalna gra Black Box (Eric Solomon, 1977)
- Wikipedia: https://en.wikipedia.org/wiki/Black_Box_(video_game)
