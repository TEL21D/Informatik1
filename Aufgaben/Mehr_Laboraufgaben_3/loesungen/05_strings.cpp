#include "pruefung.h"

/*** AUFGABE: Arrays, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
 * Schreiben Sie eine Funktion mix, die zwei Strings erwartet.
 *
 * Der erste Parameter enthält den zu bearbeiteden String und
 * der Zweite ein Füllzeichen.
 * Die Funktion mix soll den String aufspreizen und die einzelnen
 * Zeichen mit den Füllzeichen trennen
 *
 * Die Funktion soll das Ergebnis als String zurückliefern.
***/
string mix(string s1, string s2);


/*** TESTCODE/MAIN: ***/
int main() {
  cout << mix("We are out of rum!", "-") << "\n"; // → "W-e-'-r-e- -o-u-t- -o-f- -r-u-m-!"
  cout << mix("Blimey", "👻") << "\n"; // → "B👻l👻i👻m👻e👻y"
  cout << mix("", "👻") << "\n"; // → ""

  return 0;
}

/*** LOESUNG: ***/
string mix(string s1, string s2)
{
  string result;

  for (int i=0; i<s1.size(); i++)
  {
    result += s1[i] + s2;
  }
  return result;
}
