#include <iostream> // Bib für input und output laden
#include <string>   // String Klasse laden
#include "../header.hpp"

using namespace std; // std namespace laden
/*
* Haupt Programm
* Gibt int zurück
* Kommentare werden vom compiler gefiltert und hab
....
*/
int main(int argc, char const *argv[]) // Hauptprogramm
{
   cout << "Hello World!\n" << endl;        // Konsolen Ausgabe
   string name;                             // Variable deklarieren
   cout << "Bitte Namen eingeben:" << endl; // Konsolen Ausgabe
   cin >> name;                             // String von der Konsole in variable name speichern
   cout << "Hallo " << name << endl; // String name auf Konsole ausgeben
   cerr << "Fehler\n";

   return EXIT_SUCCESS; // 0 zurückgeben --> Programm erfolgreich ausgeführt
}
