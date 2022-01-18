#include <iostream>

int main(int argc, char const *argv[])
{
   int x = 18;
   std::cout << "Oktal: \x6f :" << std::oct  << x << std::endl;
   std::cout << "Oktal: " << std::oct  << x << std::endl;
   std::cout << "HEX: " << std::hex  << x << std::endl;
   return 0;
}
