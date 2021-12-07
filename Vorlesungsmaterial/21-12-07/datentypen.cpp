#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[])
{
   int ganz_zahl, zahl2;    // 2 Variablen von Typ int deklarieren
   ganz_zahl = 5;           // Variable initialisieren mit 5
   zahl2 = -10;

   cout << "ganz_zahl: " << ganz_zahl << "\n";
   cout << "zahl2: " << zahl2 << "\n";

   float gleitkomma_zahl_pi = 3.14, gleitkomma_2 = 5.0; // Variable vom Typ float deklarieren und intiliasieren

   cout << "gleitkomma_zahl_pi: " << gleitkomma_zahl_pi << "\n";

   char c = 'b';
   cout << "c: " << c <<  endl;

   unsigned int unsigned_int = -10;
   cout << "unsigned_int: " << unsigned_int << "\n";

   char char_arr[] = "Hello World!\n";
   cout << "char_arr: " << char_arr << endl;
   string str = "Hello World!";

   for(int i = 0; i < str.size(); i++) {
      cout << str[i] << endl;
   }

   return 0;
}
