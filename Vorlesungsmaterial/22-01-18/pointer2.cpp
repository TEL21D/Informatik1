#include <iostream>

int main(int argc, char const *argv[])
{

   int x = 3;
   // Deklarieren von einem Pointer auf Typ int
   // Datentyp (int), Sternchen (*), Variablenname (y)
   // Mit '&' die Speicheraddresse der Variable x übergeben
   int *y = &x;
   // Um den Inhalt eines Pointers auszugeben muss dieser dereferenziert werden.
   // Dazu wird das Sternchen (*) vor die Variable gestellt --> *y
   // Wenn nicht dereferenziert wird wird die Addresse ausgegeben auf die der Pointer zeigt (also &x)
   std::cout << x << *y << std::endl;
   x = 4;
   std::cout << x << *y << std::endl;
   *y = 5;
   std::cout << x << *y << std::endl;

   std::cout << "Speicheraddresse von der Variable x: " << &x
   << "\nSpeicheraddresse die der Pointer y speicher: " << y
   << "\nSpeicheraddresse von Pointer y selber (*y): " << &y << std::endl;

   y++;
   std::cout << x << *y << std::endl;
   return 0;
}
