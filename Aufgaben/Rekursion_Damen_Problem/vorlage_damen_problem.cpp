#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Prototypen
bool freie_spalte(int neu_reihe, int neue_spalte, /* spielfeld */);
<typ> platziere_dame();
<typ> damen_problen();
void print_board(spielfeld);

int main(int argc, char *argv[]) {

   return EXIT_SUCCESS;
}

// Diese Funktion soll prüfen ob ein bestimmtes Feld frei ist
// Erwartet die Reihe und Spalte und soll auf dem Brett prufen
// ob auf dem Feld eine Dame gesetzt werden kann
bool freie_spalte(int neu_reihe, int neue_spalte, /* spielfeld */) {

}

// Diese Funktion soll in einer Reihe pruefen in welcher Spalte
// eine Dame in einer Reihe platziert werden kann
<typ> platziere_dame_in_reihe() {
   //for -  laufe alle spalten von reihe x ab

}

// Die rekursive Funktion die durch die Reihen des Feldes läuft
<typ> damen_problen(int n) {
   // Abbruch Bedingung / Base case
   if(n == 0)
      return feld;
   // Rekursion
   platziere_dame_in_reihe(n-1, n, damen_problem(n-1));

}

// Ausgabe der Spielfeld Möglichkeiten
void print_board(spielfeld){

}
