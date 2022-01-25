#include<iostream>


bool und_gatter(bool s1, bool s2, bool s3);
bool oder_gatter(bool s1, bool s2, bool s3);

int main(int argc, char const *argv[])
{
   std::cout << "Logische Operatoren!\n";
   bool wahr = true;
   bool falsch = false;

   // logisches UND wird in C++ mit && dargestellt
   if(wahr && wahr) {
      std::cout << "wahr && wahr\n";
   }
   if(wahr && falsch) {
      std::cout << "wahr && falsch\n";
   }
   // logisches ODER wird in C++ mit || dargestellt
   if(wahr || falsch) {
      std::cout << "wahr || falsch\n";
   }

   return 0;
}


bool und_gatter(bool s1, bool s2, bool s3) {
}
bool oder_gatter(bool s1, bool s2, bool s3){

}