#include "../header.hpp"

// Eine neue Funktion deklarieren
void string_ausgeben(string parameter1) {
   cout <<  parameter1 << endl;
}

int main(int argc, char const *argv[])
{
   string binärzahl;
   int dezimal;
   cout <<  "Bitte Zahl eingeben: ";
   cin >> binärzahl;
   string_ausgeben(binärzahl);
   return 0;
}
