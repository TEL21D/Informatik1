#include <iostream>     // Bib für input und output laden
#include <string>       // String Klasse laden

/*
* Haupt Programm
* Gibt int zurück
* Kommentare werden vom compiler gefiltert und hab
....
*/
int main(int argc, char const *argv[])  // Hauptprogramm
{
   std::cout << "Hello World!\n";      // Konsolen Ausgabe
   std::string name;                   // Variable deklarieren
   std::cout << "Bitte Namen eingeben:" << std::endl; // Konsolen Ausgabe
   std::cin >> name;                   // String von der Konsole in variable name speichern
   std::cout << "Hallo " << name << std::endl;  // String name auf Konsole ausgeben

   return EXIT_SUCCESS;    // 0 zurückgeben --> Programm erfolgreich ausgeführt
}
