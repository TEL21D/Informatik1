#include <iostream>

int main(int argc, char const *argv[])
{
   int x = 42;
   for (int y = 0; y < 5; y++)
   {
      int x = y * 2;
      std::cout << x << std::endl;
   }
   std::cout << x << std::endl;
   return 0;
}
