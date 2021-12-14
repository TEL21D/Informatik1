#include "../header.hpp"

enum zahlen {
   eins,
   zwei,
   drei
};

int main()
{
   int z;
   zahlen zahl = eins;
   cout << "Zahl zwischen 1 und 4 eingeben\n";
   bool exit = false;

   while (!exit)
   {
      cin >> z;
      switch (z)
      {
      case 1:
         cout << "1 ausgewählt\n";
         break;
      case 2:
         cout << "2 ausgewählt\n";
         break;
      case 3:
         cout << "3 ausgewählt\n";
         break;
      case 4:
         cout << "4 ausgewählt\n";
         break;
      case 0:
         cout << "Programm beendet\n";
         exit = true;
         break;
      default:
         cout << "zahl nicht im bereich\n";
         break;
      }
   }
   return 0;
}