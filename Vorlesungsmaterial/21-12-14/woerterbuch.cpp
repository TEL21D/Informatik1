#include "../header.hpp"



int main(int argc, char const *argv[])
{
   vector<string> deutsch  = {"Auto", "Haus", "Boot"};
   vector<string> englisch = {"Car", "House", "Boat"};
   string wort;
   int index;
   cout << "Bitte Deutsches Wort eingeben: \n";
   cin >> wort;
   index = suche(wort, deutsch);
   cout << "Englisches Wort: " << englisch[index];

   return 0;
}
