#include "header.hpp"


int main(int argc, char const *argv[])
{
   /* Rechenoperation */
   int z1 = 6, z2 = 3;
   int z3 = 2;

   cout << "z1 + z2: " << z1 + z2 << endl;
   cout << "z1 - z2: " << z1 - z2 << endl;
   cout << "z1 * z2: " << z1 * z2 << endl;
   cout << "z1 / z2: " << z1 / z2 << endl;
   cout << "8%5: " << 8%5 << endl;  // Modulo berechnen
   cout << "z1%z2 " << z1%z2 << endl;
   cout << "z1%z2 " << z1%z2 << endl;
   cout << "2*z1%3*z2 " << 2*z1%3*z2 << endl;

   cout << "z3*3 * z3+z3: \n" << z3*3 * z3+z3 << endl;
   cout << "z3*3 * (z3+z3): " << endl << z3*3 * (z3+z3) << endl;
   cout << z3 << "*3\n";
   /* Operation wie Wurzel ziehen (sqrt) oder Potenz (pow) sind teil der
   * Mathebibliothek der STL (Standard Library)
   * https://en.cppreference.com/w/cpp/numeric/math
   */

   return 0;
}
