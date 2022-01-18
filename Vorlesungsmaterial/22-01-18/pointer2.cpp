#include <iostream>

int main(int argc, char const *argv[])
{

   int x = 3;
   int *y = &x;
   std::cout << x << *y << std::endl;
   x = 4;
   std::cout << x << *y << std::endl;
   *y = 5;
   std::cout << x << *y << std::endl;

   std::cout << "Speicheraddresse von x: " << &x
   << "\nSpeicheraddresse von *y: " << &y << std::endl;

   y++;
   std::cout << x << *y << std::endl;
   return 0;
}
