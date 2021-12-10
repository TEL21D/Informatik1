#include "../header.hpp"

string vertauschen(string str) {
   string neu;
   for (int i = str.size() - 1; i >= 0 ; i--)
   {
      neu += str[i];
   }
   return neu;
}

int main(int argc, char const *argv[])
{
   // C-string ist ein char array cstr[]
   char c_str[] = "Hallo C-string\n";
   string str1 = "Hallo";
   str1 += " ";
   str1 =  str1 + "Welt";

   cout << "str1: " << str1 << endl;
   cout << "c_str: " << c_str << endl;

   string zahl = "1011";
   int z = stoi(zahl);
   cout << "z: " << z <<  endl;
   char c = '1';
   // cout << " '1'\"" << atoi(c) << endl;

   cout << "z vertauscht: " << vertauschen(zahl) << endl;
   return 0;
}
