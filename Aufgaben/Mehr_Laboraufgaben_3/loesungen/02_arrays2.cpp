#include "pruefung.h"

/*** AUFGABE: Permutationen eines Arrays ***/

/*** AUFGABENSTELLUNG:
 * Am Ende eines Monats bekommt Captain CiaoCiao die Umsätze gemeldet, die er und seine Crew
 *  — sagen wir mal — erwirtschaftet haben. In der monatlichen Liste ist vermerkt, wie der
 * Gewinn an einem Tag ausfiel.
 *
 * Captain CiaoCiao ist mit den Zahlen zufrieden, und er möchte eine Belohnung zahlen,
 * wenn Gewinne über 5 % gestiegen sind. Von 1000 auf 2000 ist ein satter Sprung um 100 %,
 * von 500 auf 9000 ebenso, doch definitiv nicht von 2000 auf 500 und auch nicht von 9000 auf 9010.
 *
 * Schreiben Sie eine Methode int anzahl5ProzentSpruenge(vector<int> liste), die die Anzahl der Umsatzsprünge liefert.
 * Ein Umsatzsprung ist dann gegeben, wenn der Umsatz 5 % über dem des Vortags lag.
***/
int anzahl5ProzentSpruenge(vector<int> liste);


/*** TESTCODE/MAIN: ***/
int main() {

                    // Tag     1,    2,    3,   4,    5 ... bis maximal 31
  vector<int> tagesGewinne1 = { 1000, 2000, 500, 9000, 9010 };
  vector<int> tagesGewinne2 = { 1000, 1050, 800, 3000, 4500, 7000 };

  cout << anzahl5ProzentSpruenge(tagesGewinne1) << "\n"; // solll 2 ausgeben
  cout << anzahl5ProzentSpruenge(tagesGewinne2) << "\n"; // solll 3 ausgeben
  return 0;
}

/*** LOESUNG: ***/
int anzahl5ProzentSpruenge(vector<int> liste)
{
  int result = 0;
  for (int i = 1; i < liste.size(); i++)
  {
    if (liste[i] > 1.05*liste[i-1])
    {
      result++;
    }
  }
  return result;
}
