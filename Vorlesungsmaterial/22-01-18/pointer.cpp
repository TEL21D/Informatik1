#include <iostream>

int main(int argc, char const *argv[])
{
   int a = 42;
   int  *b = &a;
   b++;
   std::cout << *b << std::endl;

   int *c = nullptr;
   std::cout << c << std::endl;
   return 0;
}
