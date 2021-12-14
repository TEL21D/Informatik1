#include <iostream>
enum struct zahlen {
   eins=1,
   zwei,
   drei
};

int main(int argc, char const *argv[])
{
   zahlen zahl = zahlen::eins;
   zahlen zahl2 = zahlen::zwei;

   std::cout << "zahl: " << zahl <<  std::endl;
   std::cout << "zahl2: " << zahl2 <<  std::endl;
   return 0;
}
