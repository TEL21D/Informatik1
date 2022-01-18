#include <iostream>

#define PI 3.141  // macro
const float C_PI = 3.141;

int main(int argc, char const *argv[])
{
   // C_PI = 2345.678; --> nicht erlaubt da Konstante
   std::cout << "macro PI: " << PI << std::endl;
   std::cout << "Variable pi: " << C_PI << std::endl;
   for (size_t C_PI = 0; C_PI < 5; C_PI++)
   {

      std::cout << "macro PI: " << PI << std::endl;
      std::cout << "Variable pi: " << C_PI << std::endl;
   }

   int x = 5;
   int y = 10;
   int * const c_ptr = &x; // equivalent zu einer Referenz
   int * ptr = &y;

   std::cout << "*c_ptr: " << *c_ptr << ", *ptr: " << *ptr << std::endl;
   *c_ptr = 20;
   *ptr = 15;
   std::cout << "*c_ptr: " << *c_ptr << ", *ptr: " << *ptr << std::endl;
   // c_ptr = &y; //--> da konstanter pointer
   ptr = &x;
   std::cout << "*c_ptr: " << *c_ptr << ", *ptr: " << *ptr << std::endl;

   // konstanter pointer von konstantem int
   const int * const cc_ptr = &x;
   std::cout << "*cc_ptr: " << *cc_ptr << std::endl;
   // *cc_ptr = 555; --> equivalent zu kontaner Referenz: const &ref = &x
   x = 22;
   std::cout << "*cc_ptr: " << *cc_ptr << std::endl;

   return 0;
}
