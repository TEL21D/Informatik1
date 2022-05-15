#include "pruefung.h"

/*** AUFGABE: Sieb des Eratosthenes ***/

/*** AUFGABENSTELLUNG:
 * Schreiben Sie eine rekursive Funktion summe_von_bis,
 * welche die Summe der Zahlen von n1 bis n2 liefert.
***/

int summe_von_bis(int n1, int n2);

/*** TESTCODE/MAIN: ***/
int main() {
  cout << summe_von_bis(3, 5)   << "\n"; // Soll 12 ausgeben
  cout << summe_von_bis(0, 5)   << "\n"; // Soll 15 ausgeben
  cout << summe_von_bis(8, 12)  << "\n"; // Soll 50 ausgeben
  cout << summe_von_bis(20, 30) << "\n"; // Soll 275 ausgeben

  return 0;
}

/*** LOESUNG: ***/
int summe_von_bis(int n1, int n2) {
  return 0;
}