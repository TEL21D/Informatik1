#include "../header.hpp"
#include <cmath>

int main(int argc, char const *argv[])
{
   string binärzahl = "";
   int dezimal = 0;
   cout <<  "Bitte eine Binärzahl eingeben: ";
   cin >> binärzahl;

   for (int i = 0; i < binärzahl.size(); i++)
   {
      int potenz = binärzahl.size() - i - 1;
      if(binärzahl[i] == '1')
         dezimal += pow(2, potenz);
   }
   cout << "Dezimahlzahl: " << dezimal << endl;

   return 0;
}
