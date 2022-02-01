#include <iostream>
#include <vector>
#include <string>

// Funktionsprotoypen
/*
* Felder prüfen und bei Bedarf Gewinner ausgaben
*/
bool gameover(const std::vector<std::string> &feld);
void print_board(const std::vector<std::string> &feld);
void insert_move(std::vector<std::string> &feld , char player);

int main(int argc, char const *argv[])
{
   // Datentypen
   // 2d Array/Vector
   std::vector<std::string> feld = {
      "123",
      "456",
      "789"
   };

   // Anzahl der Züge
   int zuege = 0;
   // Spieler
   char player = 'X'; // 'X' bzw. 'O'

   do {
      std::cout << " Spieler " << player << " ist am Zug\n";
      // Feld ausgaben
      print_board(feld);
      // Eingabe vom Spieler
      insert_move(feld, player);
      // Spieler wechseln
      if(player == 'X') {
         player = 'O';
      }
      else {
         player = 'X';
      }
      zuege++;
   }
   while (!gameover(feld));

   return 0;
}



bool gameover(const std::vector<std::string> &feld) {
   return true;
}
// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(std::vector<std::string> &feld) {
   // std::cout << "feld[0][0]-" << feld[0][0] << "-" << std::endl;
   // std::cout << "feld[2][2]:-" << feld[2][2] << "-" << std::endl;
   // for (size_t i = 0; i < feld.size(); i++)
   std::cout << "------------\n";
   for (std::string zeile: feld)
   {
      std::cout << "-" << zeile[0] << " | " << zeile[1]
      << " | " << zeile[2] << "-" << std::endl;
      std::cout << "------------\n";
   }
}

void insert_move(std::vector<std::string> &feld , char player) {

}