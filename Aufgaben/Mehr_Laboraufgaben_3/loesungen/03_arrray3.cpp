#include "pruefung.h"

/*** AUFGABE: Arrays ***/

/*** AUFGABENSTELLUNG:
 * Schreiben Sie eine Funktion reverse, die eine Liste von Zahlen umkehrt.
 * Nachfolgendes Listen wurden fälschlicherweise in absteigender Reihenfolge sortiert,
 * sie sollten aber in aufsteigender Reihenfolge vorliegen.
 *
 * Die Funktion soll in place sein, also das übergebene Array ändern und schließen zurückgeben.
 * Wir wollen kein neues Array anlegen.
***/
vector<int> reverse(vector<int> liste);


/*** TESTCODE/MAIN ***/
int main() {
  print(reverse({3, 2, 1})); // soll 1 2 3 ausgeben
  print(reverse({})); // soll  ausgeben
  print(reverse({2, 1})); // soll 2 1 ausgeben
  print(reverse({1})); // soll 1 ausgeben
  print(reverse({4, 3, 2, 1})); // soll 1 2 3 4 ausgeben

  return 0;
}

/*** LOESUNG ***/
vector<int> reverse(vector<int> liste)
{
  int temp;
  for (int i = 0; i < liste.size()/2; i++)
  {
    temp = liste[i];
    liste[i] = liste[liste.size()-i-1];
    liste[liste.size()-i-1] = temp;
  }

  return liste;
}
