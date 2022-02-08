#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
   std::vector<std::string> vec1 = {
       "Zeile1",
       "Zeile2",
       "Zeile3"};

   // Range basierte loops
   // auto vergibt automatisch den Typ
   for (auto zeile : vec1)
   {
      // 0: zeile = vec[0]
      // 1: zeile = vec[1]
      // 2: zeile = vec[2]
      // .....
      // n-1: zeile = vec[n-1]
      std::cout << zeile << std::endl;
      for (auto c : zeile)
      {
         std::cout << c << std::endl;
      }
   }

   std::cout << std::endl;

   // Manuell der Typ auf String setzen
   // for (<Typ> Element :  vector, string, map, etc (Container Klassen))
   for (std::string zeile : vec1)
   {
      std::cout << zeile << std::endl;
   }
   // den typ automatisch bestimmt
   for (auto zeile : vec1)
   {
      std::cout << zeile << std::endl;
      std::cout << "Größe der Zeile: " << zeile.size() << std::endl;
   }

   return 0;
}
