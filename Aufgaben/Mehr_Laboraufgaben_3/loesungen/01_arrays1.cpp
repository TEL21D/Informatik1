#include "pruefung.h"

/*** AUFGABE: Arrays ***/

/*** AUFGABENSTELLUNG:
 * Schreiben Sie eine Funktion addEven, die eine Liste von Zahlen erwartet.
 * Die Funktion soll die Summe aller gerade (durch 2 teilbaren) Zahlen in der Liste liefern.
 * Tipp: Negative Zahlen werden auch gezählt
***/
int addEven(vector<int> liste);


/*** TESTCODE/MAIN: ***/
int main() {

    vector<int> v1 = {1,-2,3,-4,5};
    cout << addEven(v1) << endl;         // Soll -6 ausgeben

    vector<int> v2 = {-5,4,-3,-2,1};
    cout << addEven(v2) << endl;         // Soll 2 ausgeben

    vector<int> v3 = {3,29,0,-42,2,38};
    cout << addEven(v3) << endl;         // Soll -2 ausgeben

    vector<int> v4 = {38};
    cout << addEven(v4) << endl;         // Soll 38 ausgeben
    return 0;
}

/*** LOESUNG: ***/
int addEven(vector<int> liste)
{
  int result = 0;
  for (auto el : liste)
  {
    if (el % 2 == 0) { result += el; }
  }
  return result;
}
