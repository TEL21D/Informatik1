#include "header.hpp"
#define HIGH 1
#define LOW 0

int main(int argc, char const *argv[])
{
   bool wahr = true, falsch = false;
   int input = 0;
   while (wahr)
   {
      if (HIGH)
      {
         cout << "if \n";
      }
      else
      {
         cout << "else \n";
      }
      cout << "1. Zum beenden\n2. Weiterlaufen\n";
      cin >> input;
      if(input == 1) {
         cout << "Programm beendet\n";
         wahr = !wahr;
      }
   }

   return EXIT_SUCCESS;
}
