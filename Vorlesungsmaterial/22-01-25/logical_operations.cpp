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

   std::cout << "und Gatter und oder Gatter Funktionen testen:\n\n";

   std::cout << "und_gatter(false, false, false): "<< und_gatter(false, false, false) << std::endl;
   std::cout << "und_gatter(true, true, false): "<< und_gatter(true, true, false) << std::endl;
   std::cout << "und_gatter(0, 0, 1): " << und_gatter(0, 0, 1) << std::endl;
   std::cout << "und_gatter(1, 1, 1): " << und_gatter(1, 1, 1) << std::endl;

   std::cout << "oder_gatter(false, false, false): "<< oder_gatter(false, false, false) << std::endl;
   std::cout << "oder_gatter(true, true, false): "<< oder_gatter(true, true, false) << std::endl;
   std::cout << "oder_gatter(0, 0, 1): " << oder_gatter(0, 0, 1) << std::endl;
   std::cout << "oder_gatter(1, 1, 1): " << oder_gatter(1, 1, 1) << std::endl;


   if (und_gatter(1,0,0)) {
      std::cout << "Ausgang ist 1\n";
   }
   else {
      std::cout << "Ausgang ist 0\n";
   }

   // arr[0][0] == 'X' && arr[1][1] == 'X'
   // In den Klammern eingeschlossene Ausdrücke werdeb zuerst interpretiert
   // '==' wird vor dem '&&' oder '||' ausgewertet
   // Ansonsten werden die Ausdrücke von links nach rechts interpretiert
   // (arr[0][0] == arr[1][1]  && arr[0][0] == arr[2][2]) ||

   return 0;
}


bool und_gatter(bool s1, bool s2, bool s3) {
   bool result = false;
   if(s1 && s2 && s3) {
      result = true;
   }
   return result;
}
bool oder_gatter(bool s1, bool s2, bool s3){
   if(s1 || s2 || s3) {
      return true;
   }
   else {
      return false;
   }
}