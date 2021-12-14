#include "../header.hpp"
#include <cmath>


// int to_dez_convert(string binaer) {

// }

int main(int argc, char const *argv[])
{
   string binaerzahl = "";
   int dezimal = 0, auswahl = 0;
   cout << "1. Binäerzahl wandeln\n2. Dezimalzahl wandeln\n";
   cin >> auswahl;
   if(auswahl == 1) {
      cout <<  "Bitte eine Binärzahl eingeben: ";
      cin >> binaerzahl;

      for (int i = 0; i < binaerzahl.size(); i++)
      {
         int potenz = binaerzahl.size() - i - 1;
         char digit = binaerzahl[i];    // zeichen in einer temp char Variable speichern
         // if(binärzahl[i] == '1')
         //    dezimal += pow(2, potenz);
         dezimal += atoi(&digit) * pow(2, potenz);    // char zu int wandeln und mit 2er Basis multiplizieren
      }
      cout << "Dezimahlzahl: " << dezimal << endl;
   }
   else {
      cout <<  "Bitte eine Dezimalzahl eingeben: ";
      cin >> dezimal;
      string temp = "";
      while(dezimal != 0) {
         temp += to_string(dezimal % 2); // in string konvertieren und anhängen
         dezimal /= 2;
      }
      // Reihenfolge von binaerzahl umkehren
      for (int i = temp.size() - 1; i >= 0; i--)
      {
         binaerzahl += temp[i];
      }
      cout << "Binärzahl: " << binaerzahl << endl;
   }

   return 0;
}
