#include "../header.hpp"

int main(int argc, char const *argv[])
{
   char c_str[] = "c_string";
   int i_arr[] = {1,2,3};  // c-style array vom Typ in
   int i_arr2[3];

   cout << "sizeof(int)" << sizeof(int) << endl;   // Größe in Byte
   cout << "sizeof(char)" << sizeof(char) << endl;
   cout << "sizeof(float)" << sizeof(float) << endl;
   cout << "sizeof(double)" << sizeof(double) << endl;

   cout << "sizeof(i_arr)" << sizeof(i_arr) << endl;
   cout << "sizeof(i_arr[0])" << sizeof(i_arr[0]) << endl;
   cout << "sizeof(c_str)" << sizeof(c_str) << endl;

   for (int i = 0; i < sizeof(i_arr)/sizeof(i_arr[0]); i++)
   {
      i_arr2[i] = i_arr[i];
   }
   for (int i = 0; i < sizeof(i_arr2)/sizeof(i_arr2[0]); i++)
   {
      cout << i_arr2[i] <<  endl;
   }


   char c = 'A';
   int z2 = 123;
   char c2[] = "123";
   int z = c;
   cout << "z: " << z << endl;
   cout << "c2: " << c2 << endl;
   cout << "int(c): " << int(c) << endl;

   for (char i = 'A'; i <= 'z'; i++)
   {
      cout << i;
   }
   cout << endl;


   return 0;
}
