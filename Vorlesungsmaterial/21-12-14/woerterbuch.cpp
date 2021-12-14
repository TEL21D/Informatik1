#include "../header.hpp"

// Eingenen Datentyp anlegen
struct s_woerterbuch
{
   string deutsch;
   string englisch;
};

enum struct zustand
{
   menu = 1,
   eingabe,
   exit = 10,
   exit2 // --> 11
};

// Funktions Prototypen
int suche(string wort, vector<string> vektor);
string suche_wb(string wort, vector<s_woerterbuch> vektor);

int main(int argc, char const *argv[])
{
   zustand state = zustand::menu;
   int input;
   vector<string> deutsch = {"Auto", "Haus", "Boot"};
   vector<string> englisch = {"Car", "House", "Boat"};
   vector<s_woerterbuch> woerterbuch = {
       {"Auto", "Car"},
       {"Haus", "House"},
       {"Boot", "Boat"}};
   bool exit = false;
   while (!exit)
   {
      switch (state)
      {
      case zustand::menu:
         cout << "1. Wort suchen\n2.Beenden\n";
         cin >> input;
         if (input == 1)
         {
            state = zustand::eingabe;
         }
         if (input == 2)
         {
            state = zustand::exit;
         }
         break;
      case zustand::eingabe:
         cout << "Bitte Deutsches Wort eingeben: \n";
         // cin >> ;
         // index = suche(wort, deutsch);
         // if (index >= 0)
         //    cout << "Englisches Wort: " << englisch[index] << endl;
         // else
         //    cout << "Wort nicht im Wörterbuch gefunden\n";
         // cout << "Suche in eigener Datenstruktur: " << suche_wb(wort, woerterbuch) << endl;
         state = zustand::menu;
         break;
      case zustand::exit:
         exit = true;
         break;
      default:
         break;
      }
   }

   return 0;
}

string suche_wb(string wort, vector<s_woerterbuch> vektor)
{
   for (int i = 0; i < vektor.size(); i++)
   {
      if (vektor[i].deutsch == wort)
      {
         return vektor[i].englisch;
      }
   }
   return "";
}
int suche(string wort, vector<string> vektor)
{
   int index = -1;
   for (int i = 0; i < vektor.size(); i++)
   {
      if (vektor[i] == wort)
      {
         index = i;
         break;
      }
   }
   return index;
}