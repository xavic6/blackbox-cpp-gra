#include<iostream>
#include<iomanip>
#include<time.h>
#include<cstdlib>
using namespace std;

const int MAX_1 = 7;
const int MAX = 12;
const int RUCH = 200;

void tytul();
void settings(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void main_menu(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void tworzenie_poziomow(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void level_1(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void level_2(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void level_3(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void inicjalizacja_tablicy(char Tab[MAX][MAX], int m);
void losowanie_atomow(int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int m);
void generuj_tab(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], int x, int y, int m);
void grafika(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH] , int x, int y, int m);
void zerowanie_kursora(char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], int m);
void inicjalizacja_tab_ruch(char Ruch[RUCH]);
void w_prawo(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int&, int&, int m);
void w_lewo(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int&, int&, int m);
void w_gore(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int&, int&, int m);
void w_dol(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int&, int&, int m);
char strzelanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int&, int m);
char zgadywanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int&, int m);
void koniec(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void poddanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);
void podpowiedz(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m);

int main(){
	
	char Kursor_gora[MAX][MAX], Kursor_lewo[MAX][MAX], Kursor_dol[MAX][MAX], Kursor_prawo[MAX][MAX], Ruch[RUCH];
	char Tab[MAX][MAX];
	int x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x = 1, y = 1, m=MAX;
	
	main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	
	return 0;	
}

void tytul(){
cout << "8 888888888o   8 8888                  .8.          ,o888888o.    8 8888     ,88'           8 888888888o       ,o888888o.  `8.`8888.      ,8' " << endl;
cout << "8 8888    `88. 8 8888                 .888.        8888     `88.  8 8888    ,88'            8 8888    `88.  . 8888     `88. `8.`8888.    ,8'  " << endl;
cout << "8 8888     `88 8 8888                :88888.    ,8 8888       `8. 8 8888   ,88'             8 8888     `88 ,8 8888       `8b `8.`8888.  ,8'   " << endl;
cout << "8 8888     ,88 8 8888               . `88888.   88 8888           8 8888  ,88'              8 8888     ,88 88 8888        `8b `8.`8888.,8'    " << endl;
cout << "8 8888.   ,88' 8 8888              .8. `88888.  88 8888           8 8888 ,88'               8 8888.   ,88' 88 8888         88  `8.`88888'     " << endl;
cout << "8 8888888888   8 8888             .8`8. `88888. 88 8888           8 8888 88'                8 8888888888   88 8888         88  .88.`8888.     " << endl;
cout << "8 8888    `88. 8 8888            .8' `8. `88888.88 8888           8 888888<                 8 8888    `88. 88 8888        ,8P .8'`8.`8888.    " << endl;
cout << "8 8888      88 8 8888           .8'   `8. `88888`8 8888       .8' 8 8888 `Y8.               8 8888      88 `8 8888       ,8P .8'  `8.`8888.   " << endl;
cout << "8 8888    ,88' 8 8888          .888888888. `88888. 8888     ,88'  8 8888   `Y8.             8 8888    ,88'  ` 8888     ,88' .8'    `8.`8888.  " << endl;
cout << "8 888888888P   8 888888888888 .8'       `8. `88888. `8888888P'    8 8888     `Y8.           8 888888888P       `8888888P'  .8'      `8.`8888. " << endl << endl << endl << endl;                                                                                                                                                                                                                           	
};

void settings(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
	char cokolwiek[120];
	system("cls");
	cout << "Sterowanie w grze: " << endl;
	cout << "w, W - poruszanie sie po planszy w gore" << endl;
	cout << "s, S - poruszanie sie po planszy w dol" << endl;	
	cout << "a, A - poruszanie sie po planszy w lewo" << endl;
	cout << "d, D - poruszanie sie po planszy w prawo" << endl;
	cout << "q, Q - wyjscie do menu glownego" << endl;
	cout << "spacja - oddanie strzalu (gdy kursor jest na dowolnej scianie)" << endl;
	cout << "o - na planszy umozliwia zaznaczenie przypuszczalnego polozenia atomu (jesli na danym polu jest juz 'o' - zostanie odznaczone)" << endl;
	cout << "k, K - konczy rozgrywke i umozliwia wyswietlenie rozwiazania oraz liczby uzyskanych punktow (poprawnie znalezionych atomow)" << endl;
	cout << "p, P - umozliwia wyswietlenie rozwiazania (przerywa etap gry, brak mozliwosci kontynuowania tego etapu gry)" << endl;
	cout << "h, H - pokazuje na chwile umieszczenie atomow na planszy" << endl << endl << endl;
	cout << "Wcisnij dowolny klawisz, by wrocic do menu glownego" << endl;
	cin >> cokolwiek; 
	main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void main_menu(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
		char wybor[20];
	
	do{
		system("cls");
		tytul();
		cout << "1 - Rozpocznij gre od pierwszego etapu" << endl;
		cout << "2 - Rozpocznij gre od drugiego etapu" << endl;
		cout << "3 - Rozpocznij gre od trzeciego etapu" << endl << endl;
		cout << "s,S - Sterowanie" << endl;
		cout << "e,E - Wyjscie z gry (Exit)" << endl << endl;
	
		cin >> wybor;
		
	}while((wybor[0] != 'e' && wybor[0] != 'E' && wybor[0] != 's' && wybor[0] != 'S' && wybor[0] != '1' && wybor[0] != '2' && wybor[0] != '3') || wybor[1] != 0);
	
	system("cls");

	if (wybor[0] == 'e' || wybor[0] == 'E'){		
	cout <<"Koniec Gry";
	exit(0);
	}	
	
	else if (wybor[0] == 's' || wybor[0] == 'S') settings(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	
	else if (wybor[0] == '1') level_1(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);

	else if (wybor[0] == '2') level_2(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	
	else if (wybor[0] == '3') level_3(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void tworzenie_poziomow(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
	
	x = 1; y = 1;
	
	inicjalizacja_tablicy(Tab, m);
	
	inicjalizacja_tab_ruch(Ruch);
	
	losowanie_atomow(x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	
	zerowanie_kursora(Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, m);
		
	Kursor_gora[x][y] = '_';
	Kursor_lewo[x][y] = '|';
	Kursor_dol[x][y] = '-';
	Kursor_prawo[x][y] = '|';
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	
	char a;
	int r = 1;
	
	while(1==1){
	
	a = getchar();
	
	if (a == 'D' || a == 'd') w_prawo(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	if (a == 'A' || a == 'a') w_lewo(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	if (a == 'W' || a == 'w') w_gore(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	if (a == 'S' || a == 's') w_dol(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	if (a == char(32)){
		strzelanie(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, r, m);
		grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	}
	if (a == 'o'){
		zgadywanie(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, r, m);
		grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	}
	if(a == 'k' || a == 'K') koniec(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	if(a == 'q' || a == 'Q') main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	if(a == 'H' || a == 'h') podpowiedz(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	if(a == 'p' || a == 'P') poddanie(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	}
}


void level_1(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){

	m=7;
	tworzenie_poziomow(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void level_2(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){

	m=10;
	tworzenie_poziomow(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void level_3(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){

	m=12;
	tworzenie_poziomow(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void inicjalizacja_tablicy(char Tab[MAX][MAX], int m){

	for(int i = 1; i < m - 1; i++){
		for(int j = 1; j < m - 1; j++){
			Tab[i][j] = '.';
		}
	}
	
	for(int i = 0; i < m; i++){
		Tab[i][0] = '-';
		Tab[i][m-1] = '-';
		Tab[0][i] = '-';
		Tab[m-1][i] = '-';
	}
}

void losowanie_atomow(int &x0, int &y0, int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int m){
	
	if (m == 7){
		int x[3];
		int y[3];
	
		srand(time(NULL));
		
		for ( int i = 0 ; i < 3 ; i++){
			x[i] = rand() % 5;
			y[i] = rand() % 5;
			}
		
		for (int i = 0; i < 4; i++){
		
			if (x[0] * 10 +  y[0] == x[1] * 10 +  y[1]){
				x[0] = rand() % 5;
				y[0] = rand() % 5;
			}
			if (x[0] * 10 +  y[0] == x[2] * 10 +  y[2]){
				x[2] = rand() % 5;
				y[2] = rand() % 5;
		
			} 	
			if (x[2] * 10 +  y[2] == x[1] * 10 +  y[1]){
				x[1] = rand() % 5;
				y[1] = rand() % 5;		
			}
		}
	
		x0 = x[0];
		y0 = y[0];
		x1 = x[1];
		y1 = y[1];
		x2 = x[2];
		y2 = y[2];
		x3 = 30;
		y3 = 30;
		x4 = 30;
		y4 = 30;
		x5 = 30;
		y5 = 30;
		x6 = 30;
		y6 = 30;
		x7 = 30;
		y7 = 30;
	}
	
	else if(m == 10){
		int x[5];
		int y[5];
	
		srand(time(NULL));
		
		for ( int i = 0 ; i < 5 ; i++){
			x[i] = rand() % 8;
			y[i] = rand() % 8;
			}
		
		for (int i = 0; i < 4; i++){
		
			if (x[0] * 10 +  y[0] == x[1] * 10 +  y[1] || x[0] * 10 +  y[0] == x[2] * 10 +  y[2] || x[0] * 10 +  y[0] == x[3] * 10 +  y[3] || x[0] * 10 +  y[0] == x[4] * 10 +  y[4]){
				x[0] = rand() % 8;
				y[0] = rand() % 8;
			}
			if (x[1] * 10 +  y[1] == x[2] * 10 +  y[2] || x[1] * 10 +  y[1] == x[3] * 10 +  y[3] || x[1] * 10 +  y[1] == x[4] * 10 +  y[4]){
				x[1] = rand() % 8;
				y[1] = rand() % 8;
		
			} 	
			if (x[2] * 10 +  y[2] == x[3] * 10 +  y[3] || x[2] * 10 +  y[2] == x[4] * 10 +  y[4]){
				x[2] = rand() % 8;
				y[2] = rand() % 8;		
			}
			if (x[3] * 10 +  y[3] == x[4] * 10 +  y[4]){
				x[3] = rand() % 8;
				y[3] = rand() % 8;	
			}		
		};
	
		x0 = x[0];
		y0 = y[0];
		x1 = x[1];
		y1 = y[1];
		x2 = x[2];
		y2 = y[2];
		x3 = x[3];
		y3 = y[3];
		x4 = x[4];
		y4 = y[4];
		x5 = 30;
		y5 = 30;
		x6 = 30;
		y6 = 30;
		x7 = 30;
		y7 = 30;	
	}
	
	else if(m == 12){
		int x[8];
		int y[8];
	
		srand(time(NULL));
		
		for ( int i = 0 ; i < 8 ; i++){
			x[i] = rand() % 10;
			y[i] = rand() % 10;
			}
		
		for (int i = 0; i < 4; i++){
		
			if (x[0] * 10 +  y[0] == x[1] * 10 +  y[1] || x[0] * 10 +  y[0] == x[2] * 10 +  y[2] || x[0] * 10 +  y[0] == x[3] * 10 +  y[3] || x[0] * 10 +  y[0] == x[4] * 10 +  y[4] || x[0] * 10 +  y[0] == x[5] * 10 +  y[5] || x[0] * 10 +  y[0] == x[6] * 10 +  y[6] || x[0] * 10 +  y[0] == x[7] * 10 +  y[7]){
				x[0] = rand() % 10;
				y[0] = rand() % 10;
			}
			if (x[1] * 10 +  y[1] == x[2] * 10 +  y[2] || x[1] * 10 +  y[1] == x[3] * 10 +  y[3] || x[1] * 10 +  y[1] == x[4] * 10 +  y[4] || x[1] * 10 +  y[1] == x[5] * 10 +  y[5] || x[1] * 10 +  y[1] == x[6] * 10 +  y[6] || x[1] * 10 +  y[1] == x[7] * 10 +  y[7]){
				x[1] = rand() % 10;
				y[1] = rand() % 10;
		
			} 	
			if (x[2] * 10 +  y[2] == x[3] * 10 +  y[3] || x[2] * 10 +  y[2] == x[4] * 10 +  y[4] || x[2] * 10 +  y[2] == x[5] * 10 +  y[5] || x[2] * 10 +  y[2] == x[6] * 10 +  y[6] || x[2] * 10 +  y[2] == x[7] * 10 +  y[7]){
				x[2] = rand() % 10;
				y[2] = rand() % 10;		
			}
			if (x[3] * 10 +  y[3] == x[4] * 10 +  y[4] || x[3] * 10 +  y[3] == x[5] * 10 +  y[5] || x[3] * 10 +  y[3] == x[6] * 10 +  y[6] || x[3] * 10 +  y[3] == x[7] * 10 +  y[7]){
				x[3] = rand() % 10;
				y[3] = rand() % 10;	
			}
			if (x[4] * 10 +  y[4] == x[5] * 10 +  y[5] || x[4] * 10 +  y[4] == x[6] * 10 +  y[6] || x[4] * 10 +  y[4] == x[7] * 10 +  y[7]){
				x[4] = rand() % 10;
				y[4] = rand() % 10;
			}
			if (x[5] * 10 +  y[5] == x[6] * 10 +  y[6] || x[5] * 10 +  y[5] == x[7] * 10 +  y[7]){
				x[5] = rand() % 10;
				y[5] = rand() % 10;
			}
			if (x[6] * 10 +  y[6] == x[7] * 10 +  y[7]){
				x[6] = rand() % 10;
				y[6] = rand() % 10;
			}
		};
	
		x0 = x[0];
		y0 = y[0];
		x1 = x[1];
		y1 = y[1];
		x2 = x[2];
		y2 = y[2];
		x3 = x[3];
		y3 = y[3];
		x4 = x[4];
		y4 = y[4];			
		x5 = x[5];
		y5 = y[5];
		x6 = x[6];
		y6 = y[6];
		x7 = x[7];
		y7 = y[7];	
		
	}
}

void generuj_tab(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], int x, int y, int m){
	
	if(m == 7){
	cout << setw(14) << Kursor_gora[0][1] << setw(11) << Kursor_gora[0][2] << setw(11) << Kursor_gora[0][3] << setw(11) << Kursor_gora[0][4] << setw(11) << Kursor_gora[0][5] << endl;
	cout << setw(13) << Kursor_lewo[0][1] << Tab[0][1] << Kursor_prawo[0][1] << setw(9) << Kursor_lewo[0][2] << Tab[0][2] << Kursor_prawo[0][2] << setw(9) << Kursor_lewo[0][3] << Tab[0][3] << Kursor_prawo[0][3] << setw(9) << Kursor_lewo[0][4] << Tab[0][4] << Kursor_prawo[0][4] << setw(9) << Kursor_lewo[0][5] << Tab[0][5] << Kursor_prawo[0][5] << endl;
	cout << setw(14) << Kursor_dol[0][1] << setw(11) << Kursor_dol[0][2] << setw(11) << Kursor_dol[0][3] << setw(11) << Kursor_dol[0][4] << setw(11) << Kursor_dol[0][5] << endl;
	cout << "     -------------------------------------------------------------    " << endl;
	
	for(int i = 1; i < 6; i++){
		cout << " " << Kursor_gora[i][0] << "   |       " << Kursor_gora[i][1] << "          " << Kursor_gora[i][2] << "          " << Kursor_gora[i][3] << "          " << Kursor_gora[i][4] << "          " << Kursor_gora[i][5] << "       |   " << Kursor_gora[i][6] << endl;
		cout << Kursor_lewo[i][0] << Tab[i][0] << Kursor_prawo[i][0] << "  |  ";
		
		for(int j = 1; j < 6; j++){
			cout << "    " << Kursor_lewo[i][j] << Tab[i][j] << Kursor_prawo[i][j] << "    ";
			}
		
		cout << "  |  " << Kursor_lewo[i][6] << Tab[i][6] << Kursor_prawo[i][6] << endl;
		cout << " " << Kursor_dol[i][0] << "   |       " << Kursor_dol[i][1] << "          " << Kursor_dol[i][2] << "          " << Kursor_dol[i][3] << "          " << Kursor_dol[i][4] << "          " << Kursor_dol[i][5] << "       |   " << Kursor_dol[i][6] << endl;
			
	}
	cout << "     -------------------------------------------------------------    " << endl;	
	cout << setw(14) << Kursor_gora[6][1] << setw(11) << Kursor_gora[6][2] << setw(11) << Kursor_gora[6][3] << setw(11) << Kursor_gora[6][4] << setw(11) << Kursor_gora[6][5] << endl;
	cout << setw(13) << Kursor_lewo[6][1] << Tab[6][1] << Kursor_prawo[6][1] << setw(9) << Kursor_lewo[6][2] << Tab[6][2] << Kursor_prawo[6][2] << setw(9) << Kursor_lewo[6][3] << Tab[6][3] << Kursor_prawo[6][3] << setw(9) << Kursor_lewo[6][4] << Tab[6][4] << Kursor_prawo[6][4] << setw(9) << Kursor_lewo[6][5] << Tab[6][5] << Kursor_prawo[6][5] << endl;
	cout << setw(14) << Kursor_dol[6][1] << setw(11) << Kursor_dol[6][2] << setw(11) << Kursor_dol[6][3] << setw(11) << Kursor_dol[6][4] << setw(11) << Kursor_dol[6][5] << endl;	
	}
	
	else if(m == 10){
	cout << setw(14) << Kursor_gora[0][1] << setw(11) << Kursor_gora[0][2] << setw(11) << Kursor_gora[0][3] << setw(11) << Kursor_gora[0][4] << setw(11) << Kursor_gora[0][5] << setw(11) << Kursor_gora[0][6] << setw(11) << Kursor_gora[0][7] << setw(11) << Kursor_gora[0][8] << endl;
	cout << setw(13) << Kursor_lewo[0][1] << Tab[0][1] << Kursor_prawo[0][1] << setw(9) << Kursor_lewo[0][2] << Tab[0][2] << Kursor_prawo[0][2] << setw(9) << Kursor_lewo[0][3] << Tab[0][3] << Kursor_prawo[0][3] << setw(9) << Kursor_lewo[0][4] << Tab[0][4] << Kursor_prawo[0][4] << setw(9) << Kursor_lewo[0][5] << Tab[0][5] << Kursor_prawo[0][5] << setw(9) << Kursor_lewo[0][6] << Tab[0][6] << Kursor_prawo[0][6] << setw(9) << Kursor_lewo[0][7] << Tab[0][7] << Kursor_prawo[0][7] << setw(9) << Kursor_lewo[0][8] << Tab[0][8] << Kursor_prawo[0][8]<< endl;
	cout << setw(14) << Kursor_dol[0][1] << setw(11) << Kursor_dol[0][2] << setw(11) << Kursor_dol[0][3] << setw(11) << Kursor_dol[0][4] << setw(11) << Kursor_dol[0][5] << setw(11) << Kursor_dol[0][6] << setw(11) << Kursor_dol[0][7] << setw(11) << Kursor_dol[0][8] << endl;
	cout << "     ----------------------------------------------------------------------------------------------    " << endl;
	
	for(int i = 1; i < 9; i++){
		cout << " " << Kursor_gora[i][0] << "   |       " << Kursor_gora[i][1] << "          " << Kursor_gora[i][2] << "          " << Kursor_gora[i][3] << "          " << Kursor_gora[i][4] << "          " << Kursor_gora[i][5] << "          " << Kursor_gora[i][6] << "          " << Kursor_gora[i][7] << "          " << Kursor_gora[i][8] <<"       |   " << Kursor_gora[i][9] << endl;
		cout << Kursor_lewo[i][0] << Tab[i][0] << Kursor_prawo[i][0] << "  |  ";
		
		for(int j = 1; j < 9; j++){
			cout << "    " << Kursor_lewo[i][j] << Tab[i][j] << Kursor_prawo[i][j] << "    ";
			}
		
		cout << "  |  " << Kursor_lewo[i][9] << Tab[i][9] << Kursor_prawo[i][9] << endl;
		cout << " " << Kursor_dol[i][0] << "   |       " << Kursor_dol[i][1] << "          " << Kursor_dol[i][2] << "          " << Kursor_dol[i][3] << "          " << Kursor_dol[i][4] << "          " << Kursor_dol[i][5] << "          " << Kursor_dol[i][6] << "          " << Kursor_dol[i][7] << "          " << Kursor_dol[i][8]  << "       |   " << Kursor_dol[i][9] << endl;
	};
	cout << "     ----------------------------------------------------------------------------------------------    " << endl;	
	cout << setw(14) << Kursor_gora[9][1] << setw(11) << Kursor_gora[9][2] << setw(11) << Kursor_gora[9][3] << setw(11) << Kursor_gora[9][4] << setw(11) << Kursor_gora[9][5] << setw(11) << Kursor_gora[9][6] << setw(11) << Kursor_gora[9][7] << setw(11) << Kursor_gora[9][8] << endl;
	cout << setw(13) << Kursor_lewo[9][1] << Tab[9][1] << Kursor_prawo[9][1] << setw(9) << Kursor_lewo[9][2] << Tab[9][2] << Kursor_prawo[9][2] << setw(9) << Kursor_lewo[9][3] << Tab[9][3] << Kursor_prawo[9][3] << setw(9) << Kursor_lewo[9][4] << Tab[9][4] << Kursor_prawo[9][4] << setw(9) << Kursor_lewo[9][5] << Tab[9][5] << Kursor_prawo[9][5] << setw(9) << Kursor_lewo[9][6] << Tab[9][6] << Kursor_prawo[9][6] << setw(9) << Kursor_lewo[9][7] << Tab[9][7] << Kursor_prawo[9][7] << setw(9) << Kursor_lewo[9][8] << Tab[9][8] << Kursor_prawo[9][8]<< endl;
	cout << setw(14) << Kursor_dol[9][1] << setw(11) << Kursor_dol[9][2] << setw(11) << Kursor_dol[9][3] << setw(11) << Kursor_dol[9][4] << setw(11) << Kursor_dol[9][5] << setw(11) << Kursor_dol[9][6] << setw(11) << Kursor_dol[9][7] << setw(11) << Kursor_dol[9][8] << endl;
	}
	
	else if(m == 12){
	cout << setw(14) << Kursor_gora[0][1] << setw(11) << Kursor_gora[0][2] << setw(11) << Kursor_gora[0][3] << setw(11) << Kursor_gora[0][4] << setw(11) << Kursor_gora[0][5] << setw(11) << Kursor_gora[0][6] << setw(11) << Kursor_gora[0][7] << setw(11) << Kursor_gora[0][8] << setw(11) << Kursor_gora[0][9] << setw(11) << Kursor_gora[0][10] << endl;
	cout << setw(13) << Kursor_lewo[0][1] << Tab[0][1] << Kursor_prawo[0][1] << setw(9) << Kursor_lewo[0][2] << Tab[0][2] << Kursor_prawo[0][2] << setw(9) << Kursor_lewo[0][3] << Tab[0][3] << Kursor_prawo[0][3] << setw(9) << Kursor_lewo[0][4] << Tab[0][4] << Kursor_prawo[0][4] << setw(9) << Kursor_lewo[0][5] << Tab[0][5] << Kursor_prawo[0][5] << setw(9) << Kursor_lewo[0][6] << Tab[0][6] << Kursor_prawo[0][6] << setw(9) << Kursor_lewo[0][7] << Tab[0][7] << Kursor_prawo[0][7] << setw(9) << Kursor_lewo[0][8] << Tab[0][8] << Kursor_prawo[0][8] << setw(9) << Kursor_lewo[0][9] << Tab[0][9] << Kursor_prawo[0][9] << setw(9) << Kursor_lewo[0][10] << Tab[0][10] << Kursor_prawo[0][10] << endl;
	cout << setw(14) << Kursor_dol[0][1] << setw(11) << Kursor_dol[0][2] << setw(11) << Kursor_dol[0][3] << setw(11) << Kursor_dol[0][4] << setw(11) << Kursor_dol[0][5] << setw(11) << Kursor_dol[0][6] << setw(11) << Kursor_dol[0][7] << setw(11) << Kursor_dol[0][8] << setw(11) << Kursor_dol[0][9] << setw(11) << Kursor_dol[0][10] << endl;
	cout << "     --------------------------------------------------------------------------------------------------------------------    " << endl;
	
	for(int i = 1; i < 11; i++){
		cout << " " << Kursor_gora[i][0] << "   |       " << Kursor_gora[i][1] << "          " << Kursor_gora[i][2] << "          " << Kursor_gora[i][3] << "          " << Kursor_gora[i][4] << "          " << Kursor_gora[i][5] << "          " << Kursor_gora[i][6] << "          " << Kursor_gora[i][7] << "          " << Kursor_gora[i][8] << "          " << Kursor_gora[i][9] << "          " << Kursor_gora[i][10] <<  "       |   " << Kursor_gora[i][11] << endl;
		cout << Kursor_lewo[i][0] << Tab[i][0] << Kursor_prawo[i][0] << "  |  ";
		
		for(int j = 1; j < 11; j++){
			cout << "    " << Kursor_lewo[i][j] << Tab[i][j] << Kursor_prawo[i][j] << "    ";
			}
		
		cout << "  |  " << Kursor_lewo[i][11] << Tab[i][11] << Kursor_prawo[i][11] << endl;
		cout << " " << Kursor_dol[i][0] << "   |       " << Kursor_dol[i][1] << "          " << Kursor_dol[i][2] << "          " << Kursor_dol[i][3] << "          " << Kursor_dol[i][4] << "          " << Kursor_dol[i][5] << "          " << Kursor_dol[i][6] << "          " << Kursor_dol[i][7] << "          " << Kursor_dol[i][8]  << "          " << Kursor_dol[i][9]  << "          " << Kursor_dol[i][10]  << "       |   " << Kursor_dol[i][11] << endl;
	};
	cout << "     --------------------------------------------------------------------------------------------------------------------    " << endl;	
	cout << setw(14) << Kursor_gora[11][1] << setw(11) << Kursor_gora[11][2] << setw(11) << Kursor_gora[11][3] << setw(11) << Kursor_gora[11][4] << setw(11) << Kursor_gora[11][5] << setw(11) << Kursor_gora[11][6] << setw(11) << Kursor_gora[11][7] << setw(11) << Kursor_gora[11][8] << setw(11) << Kursor_gora[11][9] << setw(11) << Kursor_gora[11][10] << endl;
	cout << setw(13) << Kursor_lewo[11][1] << Tab[11][1] << Kursor_prawo[11][1] << setw(9) << Kursor_lewo[11][2] << Tab[11][2] << Kursor_prawo[11][2] << setw(9) << Kursor_lewo[11][3] << Tab[11][3] << Kursor_prawo[11][3] << setw(9) << Kursor_lewo[11][4] << Tab[11][4] << Kursor_prawo[11][4] << setw(9) << Kursor_lewo[11][5] << Tab[11][5] << Kursor_prawo[11][5] << setw(9) << Kursor_lewo[11][6] << Tab[11][6] << Kursor_prawo[11][6] << setw(9) << Kursor_lewo[11][7] << Tab[11][7] << Kursor_prawo[11][7] << setw(9) << Kursor_lewo[11][8] << Tab[11][8] << Kursor_prawo[11][8] << setw(9) << Kursor_lewo[11][9] << Tab[11][9] << Kursor_prawo[11][9] << setw(9) << Kursor_lewo[11][10] << Tab[11][10] << Kursor_prawo[11][10] << endl;
	cout << setw(14) << Kursor_dol[11][1] << setw(11) << Kursor_dol[11][2] << setw(11) << Kursor_dol[11][3] << setw(11) << Kursor_dol[11][4] << setw(11) << Kursor_dol[11][5] << setw(11) << Kursor_dol[11][6] << setw(11) << Kursor_dol[11][7] << setw(11) << Kursor_dol[11][8] << setw(11) << Kursor_dol[11][9] << setw(11) << Kursor_dol[11][10] << endl;
	}
}

void grafika(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH] , int x, int y, int m){
	
	system("cls");
	
	if (m == 7) cout << "Na planszy znajduja sie 3 atomy" << endl << endl;
	if (m == 10) cout << "Na planszy znajduje sie 5 atomow" << endl << endl;
	if (m == 12) cout << "Na planszy znajduje sie 8 atomow" << endl << endl;
	
	generuj_tab(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, x, y, m);
	
	for(int i = 1; i < 200; i++){
		if(Ruch[i] != ' '){
			if (Ruch[i] == 'o') cout << i << ". Zaznaczenie potencjalnej pozycji atomu" << endl;
			if (Ruch[i] == 'c') cout << i << ". Anulowanie zaznaczenia potencjalnej pozycji atomu" << endl;
			if (Ruch[i] == 'H') cout << i << ". Trafienie atomu (H)" << endl;
			if (Ruch[i] == 'R') cout << i << ". Odbicie promienia od atomu (R)" << endl;
			if (Ruch[i] == '!') cout << i << ". Strzal ani nie trafil, ani nie odbil sie od atomu (!)" << endl;
		}
		
	};
	
}

void zerowanie_kursora(char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], int m){

	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			Kursor_gora[i][j] = ' ';
			Kursor_lewo[i][j] = ' ';
			Kursor_dol[i][j] = ' ';
			Kursor_prawo[i][j] = ' ';
		}
	}
}

void inicjalizacja_tab_ruch(char Ruch[RUCH]){
	for(int i = 0; i < 200; i++){
		Ruch[i] = ' ';
	};
	
}

void w_prawo(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int &x, int &y, int m){
	
	zerowanie_kursora(Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, m);
	
	if(x == 0 && y == m-2 || x == m-1 && y == m-2 || y == m-1){
		x=x;
		y=y;
	}
	else{
		y++;
		x=x;
	}
	
	Kursor_gora[x][y] = '_';
	Kursor_lewo[x][y] = '|';
	Kursor_dol[x][y] = '-';
	Kursor_prawo[x][y] = '|';
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
}

void w_lewo(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int &x, int &y, int m){
	
	zerowanie_kursora(Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, m);
	
	if(x == 0 && y == 1 || x == m-1 && y == 1 || y == 0){
		x=x;
		y=y;
	}
	else{
		y--;
		x=x;
	}
	
	Kursor_gora[x][y] = '_';
	Kursor_lewo[x][y] = '|';
	Kursor_dol[x][y] = '-';
	Kursor_prawo[x][y] = '|';
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
}

void w_gore(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int &x, int &y, int m){
	
	zerowanie_kursora(Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, m);
	
	if(x == 1 && y == 0 || x == 1 && y == m-1 || x == 0){
		x=x;
		y=y;
	}
	else{
		x--;
		y=y;
	}
	
	Kursor_gora[x][y] = '_';
	Kursor_lewo[x][y] = '|';
	Kursor_dol[x][y] = '-';
	Kursor_prawo[x][y] = '|';
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
}

void w_dol(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int &x, int &y, int m){	
	
	zerowanie_kursora(Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, m);
	
	if(x == m-2 && y == 0 || x == m-2 && y == m-1 || x == m-1){
		x=x;
		y=y;
	}
	else{
		x++;
		y=y;
	}
	
	Kursor_gora[x][y] = '_';
	Kursor_lewo[x][y] = '|';
	Kursor_dol[x][y] = '-';
	Kursor_prawo[x][y] = '|';
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
}

char strzelanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int &r, int m){
	if (Tab[x][y] == '-'){
		if (x == 0){
			for(int i = x+1; i < m-1; i++){
				if ((i == x0+1) && (y == y0+1) || (i == x1+1) && (y == y1+1) || (i == x2+1) && (y == y2+1) || (i == x3+1) && (y == y3+1) || (i == x4+1) && (y == y4+1) || (i == x5+1) && (y == y5+1) || (i == x6+1) && (y == y6+1) || (i == x7+1) && (y == y7+1)){
					Tab[x][y] = 'H';
					Ruch[r] = 'H';
					r++;
					i = m-1;
				}
				else if ((i == x0+1) && (y-1 == y0+1) || (i == x1+1) && (y-1 == y1+1) || (i == x2+1) && (y-1 == y2+1) || (i == x3+1) && (y-1 == y3+1) || (i == x4+1) && (y-1 == y4+1) || (i == x5+1) && (y-1 == y5+1) || (i == x6+1) && (y-1 == y6+1) || (i == x7+1) && (y-1 == y7+1) || (i == x0+1) && (y+1 == y0+1) || (i == x1+1) && (y+1 == y1+1) || (i == x2+1) && (y+1 == y2+1) || (i == x3+1) && (y+1 == y3+1) || (i == x4+1) && (y+1 == y4+1) || (i == x5+1) && (y+1 == y5+1) || (i == x6+1) && (y+1 == y6+1) || (i == x7+1) && (y+1 == y7+1)){
					Tab[x][y] = 'R';
					Ruch[r] = 'R';
					r++;
					i = m-1;	
				}
			}
			if(Tab[x][y] == '-'){
				Tab[x][y] = '!';
				Ruch[r] = '!';
				r++;
			}
		}
		if (x == m-1){
			for(int i = x-1; i > 0; i--){
				if ((i == x0+1) && (y == y0+1) || (i == x1+1) && (y == y1+1) || (i == x2+1) && (y == y2+1) || (i == x3+1) && (y == y3+1) || (i == x4+1) && (y == y4+1) || (i == x5+1) && (y == y5+1) || (i == x6+1) && (y == y6+1) || (i == x7+1) && (y == y7+1)){
					Tab[x][y] = 'H';
					Ruch[r] = 'H';
					r++;
					i = 0;
				}
				else if ((i == x0+1) && (y-1 == y0+1) || (i == x1+1) && (y-1 == y1+1) || (i == x2+1) && (y-1 == y2+1) || (i == x3+1) && (y-1 == y3+1) || (i == x4+1) && (y-1 == y4+1) || (i == x5+1) && (y-1 == y5+1) || (i == x6+1) && (y-1 == y6+1) || (i == x7+1) && (y-1 == y7+1) || (i == x0+1) && (y+1 == y0+1) || (i == x1+1) && (y+1 == y1+1) || (i == x2+1) && (y+1 == y2+1) || (i == x3+1) && (y+1 == y3+1) || (i == x4+1) && (y+1 == y4+1) || (i == x5+1) && (y+1 == y5+1)|| (i == x6+1) && (y+1 == y6+1) || (i == x7+1) && (y+1 == y7+1)){
					Tab[x][y] = 'R';	
					Ruch[r] = 'R';
					r++;	
					i = 0;
				}			
			}
			if(Tab[x][y] == '-'){
				Tab[x][y] = '!';
				Ruch[r] = '!';
				r++;
			}
		}
		if (y == 0){
			for(int i = y+1; i < m-1; i++){
				if ((x == x0+1) && (i == y0+1) || (x == x1+1) && (i == y1+1) || (x == x2+1) && (i == y2+1) || (x == x3+1) && (i == y3+1) || (x == x4+1) && (i == y4+1) || (x == x5+1) && (i == y5+1) || (x == x6+1) && (i == y6+1) || (x == x7+1) && (i == y7+1)){
					Tab[x][y] = 'H';
					Ruch[r] = 'H';	
					r++;	
					i = m-1;		
				}
				else if ((x+1 == x0+1) && (i == y0+1) || (x+1 == x1+1) && (i == y1+1) || (x+1 == x2+1) && (i == y2+1) || (x+1 == x3+1) && (i == y3+1) || (x+1 == x4+1) && (i == y4+1) || (x+1 == x5+1) && (i == y5+1) || (x+1 == x6+1) && (i == y6+1) || (x+1 == x7+1) && (i == y7+1) || (x-1 == x0+1) && (i == y0+1) || (x-1 == x1+1) && (i == y1+1) || (x-1 == x2+1) && (i == y2+1) || (x-1 == x3+1) && (i == y3+1) || (x-1 == x4+1) && (i == y4+1) || (x-1 == x5+1) && (i == y5+1) || (x-1 == x6+1) && (i == y6+1) || (x-1 == x7+1) && (i == y7+1)){
					Tab[x][y] = 'R';
					Ruch[r] = 'R';
					r++;	
					i = m-1;
				}
			}
			if(Tab[x][y] == '-'){
				Tab[x][y] = '!';
				Ruch[r] = '!';
				r++;
			}
		}
		if (y == m-1){
			for(int i = y-1; i > 0; i--){
				if ((x == x0+1) && (i == y0+1) || (x == x1+1) && (i == y1+1) || (x == x2+1) && (i == y2+1) || (x == x3+1) && (i == y3+1) || (x == x4+1) && (i == y4+1) || (x == x5+1) && (i == y5+1) || (x == x6+1) && (i == y6+1) || (x == x7+1) && (i == y7+1)){
					Tab[x][y] = 'H';
					Ruch[r] = 'H';
					r++;
					i = 0;
				}
				else if ((x-1 == x0+1) && (i == y0+1) || (x-1 == x1+1) && (i == y1+1) || (x-1 == x2+1) && (i == y2+1) || (x-1 == x3+1) && (i == y3+1) || (x-1 == x4+1) && (i == y4+1) || (x-1 == x5+1) && (i == y5+1) || (x-1 == x6+1) && (i == y6+1) || (x-1 == x7+1) && (i == y7+1) || (x+1 == x0+1) && (i == y0+1) || (x+1 == x1+1) && (i == y1+1) || (x+1 == x2+1) && (i == y2+1) || (x+1 == x3+1) && (i == y3+1) || (x+1 == x4+1) && (i == y4+1) || (x+1 == x5+1) && (i == y5+1) || (x+1 == x6+1) && (i == y6+1) || (x+1 == x7+1) && (i == y7+1)){
					Tab[x][y] = 'R';
					Ruch[r] = 'R';
					r++;
					i = 0;
				}
			}
			if(Tab[x][y] == '-'){
				Tab[x][y] = '!';
				Ruch[r] = '!';
				r++;
			} 
		}	
	}		
}

char zgadywanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int &r, int m){
	int u = 0, p;
	if (m == 7) p = 3;
	else if (m == 10) p = 5;
	else if (m == 12) p = 8;
	
	if (x > 0 && x < m-1 && y > 0 && y < m-1){
		if(Tab[x][y] == '.'){
			for(int i = 1; i < m-1; i++){
				for(int j = 1; j < m-1; j++){
					if (Tab[i][j] == 'o') u++;
				}
			}
				if(u < p){
					Tab[x][y] = 'o';
					Ruch[r] = 'o';	
					r++;
				}
				
		}
		else if(Tab[x][y] == 'o'){
			Tab[x][y] = '.';
			Ruch[r] = 'c';
			r++;
		}
	}
}

void koniec(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
	int a = 0;
	char b;
	if(m == 7){
		if (x > 0 && x < 6 && y > 0 && y < 6){
			for(int i = 1; i < 6; i++){
				for(int j = 1; j < 6; j++){
					if (Tab[i][j] == 'o'){
						if (i == x0+1 && j == y0+1 || i == x1+1 && j == y1+1 || i == x2+1 && j == y2+1){
							a++;	
						}
						else Tab[i][j] = 'X';
					}
				}
			}
		}
		Tab[x0+1][y0+1] = Tab[x1+1][y1+1] = Tab[x2+1][y2+1] = 'O';
	}
	
	else if(m == 10){
		if (x > 0 && x < 9 && y > 0 && y < 9){
			for(int i = 1; i < 9; i++){
				for(int j = 1; j < 9; j++){
					if (Tab[i][j] == 'o'){
						if (i == x0+1 && j == y0+1 || i == x1+1 && j == y1+1 || i == x2+1 && j == y2+1 || i == x3+1 && j == y3+1 || i == x4+1 && j == y4+1){
							a++;	
						}
						else Tab[i][j] = 'X';
					}
				}
			}
		}
		Tab[x0+1][y0+1] = Tab[x1+1][y1+1] = Tab[x2+1][y2+1] = Tab[x3+1][y3+1] = Tab[x4+1][y4+1] = 'O';
	}
	
	else if(m == 12){
		if (x > 0 && x < 11 && y > 0 && y < 11){
			for(int i = 1; i < 11; i++){
				for(int j = 1; j < 11; j++){
					if (Tab[i][j] == 'o'){
						if (i == x0+1 && j == y0+1 || i == x1+1 && j == y1+1 || i == x2+1 && j == y2+1 || i == x3+1 && j == y3+1 || i == x4+1 && j == y4+1 || i == x5+1 && j == y5+1 || i == x6+1 && j == y6+1 || i == x7+1 && j == y7+1){
							a++;	
						}
						else Tab[i][j] = 'X';
					}
				}
			}
		}
		Tab[x0+1][y0+1] = Tab[x1+1][y1+1] = Tab[x2+1][y2+1] = Tab[x3+1][y3+1] = Tab[x4+1][y4+1] = Tab[x5+1][y5+1] = Tab[x6+1][y6+1] = Tab[x7+1][y7+1] = 'O';		
	}
	
	grafika(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	
	if(a == 0 || a == 5 || a == 6 || a == 7 || a == 8) cout << endl << endl << "Zdobyles " << a << " punktow!" << endl;
	if(a == 1)cout << endl << endl << "Zdobyles " << a << " punkt!" << endl;
	if(a == 2 || a == 3 || a == 4)cout << endl << endl << "Zdobyles " << a << " punkty!" << endl;
	
	if(m == 7){
		cout << endl << "1 - Zagraj ponownie w 1. poziom" << endl << "2 - Przejdz do 2. poziomu" << endl << "q, Q - powrot do menu" << endl;
		do{
		cin >> b;
		}while(b != 'Q' && b != 'q' && b != '1' && b != '2');
		if(b == 'Q' || b == 'q') main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
		else if(b == '1') level_1(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
		else if(b == '2') level_2(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	}
	if(m == 10){
		cout << endl << "2 - Zagraj ponownie w 2. poziom" << endl << "3 - Przejdz do 3. poziomu" << endl << "q, Q - powrot do menu" << endl;
		do{
		cin >> b;
		}while(b != 'Q' && b != 'q' && b != '3' && b != '2');
		if(b == 'Q' || b == 'q') main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
		else if(b == '3') level_3(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
		else if(b == '2') level_2(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	}
	if(m == 12){
		cout << endl << "3 - Zagraj ponownie w 3. poziom" << endl << "q, Q - powrot do menu" << endl;
		do{
		cin >> b;
		}while(b != 'Q' && b != 'q' && b != '3');
		if(b == 'Q' || b == 'q') main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
		else if(b == '3') level_3(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
	}
	
}

void poddanie(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
	char Poddanie[MAX][MAX], a;
	
	inicjalizacja_tablicy(Poddanie, m);
	
	if (m == 7) Poddanie[x0+1][y0+1] = Poddanie[x1+1][y1+1] = Poddanie[x2+1][y2+1] = 'O';
	else if (m == 10) Poddanie[x0+1][y0+1] = Poddanie[x1+1][y1+1] = Poddanie[x2+1][y2+1] = Poddanie[x3+1][y3+1] = Poddanie[x4+1][y4+1] = 'O';
	else if (m == 12) Poddanie[x0+1][y0+1] = Poddanie[x1+1][y1+1] = Poddanie[x2+1][y2+1] = Poddanie[x3+1][y3+1] = Poddanie[x4+1][y4+1] = Poddanie[x5+1][y5+1] = Poddanie[x6+1][y6+1] = Poddanie[x7+1][y7+1] = 'O';
	
	grafika(Poddanie, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	
	cout << endl << "Poddales sie, nacisnij" << endl << "q, Q - powrot do menu" << endl;
	
	do{
		cin >> a;
	}while(a != 'Q' && a != 'q');
	
	main_menu(Tab, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, x0, y0, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, m);
}

void podpowiedz(char Tab[MAX][MAX], char Kursor_gora[MAX][MAX], char Kursor_lewo[MAX][MAX], char Kursor_dol[MAX][MAX], char Kursor_prawo[MAX][MAX], char Ruch[RUCH], int x, int y, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int m){
	char Podpowiedz[MAX][MAX];
	
	inicjalizacja_tablicy(Podpowiedz, m);
	
	if (m == 7) Podpowiedz[x0+1][y0+1] = Podpowiedz[x1+1][y1+1] = Podpowiedz[x2+1][y2+1] = 'O';
	else if (m == 10) Podpowiedz[x0+1][y0+1] = Podpowiedz[x1+1][y1+1] = Podpowiedz[x2+1][y2+1] = Podpowiedz[x3+1][y3+1] = Podpowiedz[x4+1][y4+1] = 'O';
	else if (m == 12) Podpowiedz[x0+1][y0+1] = Podpowiedz[x1+1][y1+1] = Podpowiedz[x2+1][y2+1] = Podpowiedz[x3+1][y3+1] = Podpowiedz[x4+1][y4+1] = Podpowiedz[x5+1][y5+1] = Podpowiedz[x6+1][y6+1] = Podpowiedz[x7+1][y7+1] = 'O';
	
	grafika(Podpowiedz, Kursor_gora, Kursor_lewo, Kursor_dol, Kursor_prawo, Ruch, x, y, m);
	
}
