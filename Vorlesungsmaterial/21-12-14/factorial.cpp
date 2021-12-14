// includes von Bibliotheken
#include <iostream>
#include <vector>
#include <string>

// eventuell Macros

// globale Variablen

// Funktionsprototypen
// return Typ -- Funktionsname -- (Paramter)
int faktor(int n);

int main(int argc, char const *argv[])
{
   int fac = 1;
   fac = fac * 2;
   fac = fac * 3;
   fac *= 4;
   fac *= 5;

   int fak0 = faktor(0);
   int fak2 = faktor(2);
   int fak4 = faktor(4);
   int fak5 = faktor(5);

   std::cout << "fak(0) == 1: " << fak0 << std::endl;
   std::cout << "fak(2) == 2: " << fak2 << std::endl;
   std::cout << "fak(4) == 24: " << fak4 << std::endl;
   std::cout << "fak(5) == 120: " << fak5 << std::endl;

   std::string check_fak0 = faktor(0) == 1 ? "true\n" : "false\n";
   std::cout << "fak(0) == 1: " << check_fak0 << std::endl;

   return 0;
}


// Funktionsimplementierung
int faktor(int n) {
   int fac = 1;
   for (int i = 2; i <= n; i++)
   {
      fac *= i;
   }
   return fac;
}