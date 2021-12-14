// #include "../header.hpp"
#include<iostream>
#include<vector>
#include<string>


int main(int argc, char const *argv[])
{
   std::vector<int> vek1, vek2 = {8,9,10};
   std::vector<std::string> vek_str;


   std::cout << "Größe vek1: " << vek1.size() << std::endl;
   vek1.push_back(1);
   vek1.push_back(2);
   vek1.push_back(5);
   vek_str.push_back("eins");
   vek_str.push_back("zwei");
   vek_str.push_back("fünf");

   for (int i = 0; i < vek1.size(); i++)
   {
      std::cout << vek1[i] << std::endl;
      std::cout << vek2[i] << std::endl;
      std::cout << vek_str[i] << std::endl;
   }

   return 0;
}
