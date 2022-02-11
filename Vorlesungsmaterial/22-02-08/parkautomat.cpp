#include <iostream>
#include <string>

// Zustände des Parkautomaten
enum struct zustaende {
    frei,
    besetzt,
    wartung
};

int main(int argc, char const *argv[])
{
    // Anfangszustand --> frei
    zustaende zustand = zustaende::frei;
    unsigned long int nAutos = 0;
    const int parkplaetze = 5;
    int in;
    bool not_valid = true;

    while (true)
    {
        switch (zustand)
        {
        case zustaende::frei:
            /*
            Ausfahren
            Einfahren
            wehcseln nach besetzt */
            std::cout << "\nParkhaus ist frei:\n Anzahl der Autos: " << nAutos
            << "\n 1. Einfahren\n 2. Aufahren\n";
            not_valid = true;
            while (not_valid)
            {
                not_valid = false;
                std::cin >> in;
                if ( in != 1 && in != 2) {
                    not_valid = true;
                    std::cout << "Bitte 1 oder 2 eingeben!\n";
                }
                if (in == 1) {
                    nAutos++;
                }
                if (in == 2) {
                    nAutos--;
                }
                if (nAutos == parkplaetze) {
                    zustand = zustaende::besetzt;
                }
            }
            break;
        case zustaende::besetzt:
            /* Ausfahren */
            std::cout << "\nParkhaus ist besetzt:\n Anzahl der Autos: " << nAutos
            << "\n 1. Einfahren\n 2. Aufahren\n";
            std::cin >> in;
            if (in == 1) {
                std::cout << "Einfahrt nicht möglich!\n";
            }
            else {
                nAutos--;
            }
            if (nAutos < parkplaetze) {
                zustand = zustaende::frei;
            }
            break;
        case zustaende::wartung:
            /* code */
            break;

        default:
            break;
        }
    }

    return 0;
}
