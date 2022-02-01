#include "../header.hpp"


// gescopte enums mit struct
// bieten mehr typsicherheit, da es zu keinem Namenskonflikt kommen kann
// da man auf sie über den namen des enums zugreifen muss
// z.B. zustand::init
enum struct zustand {
    init,
    frei,
    besetzt,
    exit
};


int main(int argc, char const *argv[])
{
    // Zustandsautomat initialisieren
    zustand state = zustand::init;
    // Hilfsvariablen
    int zaehler = 0;
    string in = "";
    int anzahl_autos = 0;

    // Programm läuft solange zustand::exit nicht betreten wird
    while (state != zustand::exit)
    {
        switch (state)
        {
        case zustand::init:
            cout << "Initialisieren .... \n";
            if (zaehler == 5) {
                state = zustand::frei;
            }
            zaehler++;
            break;
        case zustand::frei:
            cout << "\nParkhaus ist frei... \n";
            cin >> in;
            if (in == "1")
            {
                anzahl_autos++;
            }
            if (in == "e")
            {
                state = zustand::exit;
            }
            if (anzahl_autos >=  3)
            {
                state = zustand::besetzt;
            }
            break;
        case zustand::besetzt:
            cout << "\nParkhaus ist besetzt... \n";
            cin >> in;
            if (in == "2")
            {
                anzahl_autos--;
            }
            if (anzahl_autos < 3)
            {
                state = zustand::frei;
            }
            if (in == "e")
            {
                state = zustand::exit;
            }
            break;
        case zustand::exit:
            cout << "\nProgramm wird beendet\n";
            break;
        default:
            break;
        }
    }


    return 0;
}
