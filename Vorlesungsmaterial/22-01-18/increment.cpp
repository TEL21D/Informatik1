#include <iostream>

int main(int argc, char const *argv[])
{
   int i = 1;
   int d = 20;

   std::cout << "i++: " << i++ << "\ti: " << i << "\t++i: " << ++i << std::endl;
   std::cout << "d--: " << d-- << "\td: " << d << "\t--d: " << --d << std::endl;
   return 0;
}
