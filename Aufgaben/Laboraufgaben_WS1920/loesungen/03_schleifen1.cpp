/*** AUFGABE: ***/
/*** PUNKTE: 6 ***/

#include "pruefung.h"

/*** AUFGABENSTELLUNG:

   Schreiben Sie eine Funktion, die als Parameter zwei Zahlen n und m erwartet.
   Die Funktion soll alle Vielfachen von n auf der Konsole ausgeben, die kleiner als m sind.
***/
void vielfache(int n, int m);
void vielfache_rek(int n, int m, int i);

/*** TESTCODE/MAIN: ***/
int main()
{
    vielfache(10, 100);   // Soll 10 20 30 40 50 60 70 80 90 ausgeben
    vielfache(3, 25);     // Soll 3 6 9 12 15 18 21 24 ausgeben

	vielfache_rek(10, 100, 10);   // Soll 10 20 30 40 50 60 70 80 90 ausgeben
    vielfache_rek(3, 25, 3);     // Soll 3 6 9 12 15 18 21 24 ausgeben
    return 0;
}

/*** LOESUNG: ***/
void vielfache(int n, int m)
{
	int i = n;
	while(i<m)
	{
		cout << i << " ";
		i+=n;
	}
	cout << endl;
}

void vielfache_rek(int n, int m, int i) {
    if (n < m)
    {
        cout << n  << " ";
        vielfache_rek(n+i, m, i);
    }
    else {
        cout << endl;
    }
}