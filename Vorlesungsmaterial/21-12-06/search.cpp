#include <iostream>
#include <vector>

using namespace std;

vector L = {3, 10, 5, 1, 2, 6};


int main(int argc, char const *argv[])
{
   int suchvariable;
   cout << "Welche Zahl?:\n";
   cin >> suchvariable;
   int i = 0;     // Laufvariable
   bool var_gefunden = false;
   while (i < L.size()) {
      if (L[i] == suchvariable)
      {
         var_gefunden = true;
         break;
      }
      i++;
   }

   if (var_gefunden)
   {
      cout << "Suchvariable " << suchvariable << " gefunden\n";
   }
   else
   {
      cout << "Suchvariable " << suchvariable << " nicht gefunden\n";
   }



   return 0;
}
