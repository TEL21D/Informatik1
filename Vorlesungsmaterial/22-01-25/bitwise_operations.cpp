#include <iostream>

int main(int argc, char const *argv[])
{
   // 1000
   int a = 8;
   // 0100
   int b = 4;
   // 1100
   int c = 12;
   int d = a & b;
   int e = a & c;
   int f = b & c;
   std::cout << "1000 & 0100: " << d << std::endl;
   std::cout << "1000 & 1100: " << e << std::endl;
   std::cout << "0100 & 1100: " << f << std::endl;

   d = a | b;
   std::cout << "1000 | 0100: " << d << std::endl;

   return 0;
}
