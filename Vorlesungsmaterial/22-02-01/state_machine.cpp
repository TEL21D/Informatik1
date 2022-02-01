#include "../header.hpp"


// gescopte enums mit struct
// bieten mehr typsicherheit, da es zu keinem Namenskonflikt kommen kann
// da man auf sie über den namen des enums zugreifen muss
// z.B. zustand::init
enum struct zustand {
    init,   // = 0
    frei,   // = 1
    besetzt,
    exit
};


int main(int argc, char const *argv[])
{
    // Zustandsautomat initialisieren
    zustand state = zustand::init;
    // Hilfsvariablen
    int init_zaehler = 0;
    string in = "";
    int anzahl_autos = 0;

    // Programm läuft solange zustand::exit nicht betreten wird
    while (state != zustand::exit)
    {
        switch (state)
        {
        case zustand::init:
            cout << "Initialisieren .... \n";
            if (init_zaehler == 5) {
                state = zustand::frei;
            }
            init_zaehler++;
            break;
        case zustand::frei:
            cout << "\nParkhaus ist frei... \n";
            cout << anzahl_autos << " Autos im Parkhaus\n1 drückem zum reinfahren\n";
            cin >> in;
            if (in == "1")
            {
                anzahl_autos++;
            }
            if (in == "e")
            {
                // in Zustand exit wechseln wenn der Buchstabe "e" eingegeben wird
                state = zustand::exit;
            }
            if (anzahl_autos >=  3)
            {
                // nach zustand::besetzt wechseln wenn Variable anzahl_autos größer oder gleich 3
                state = zustand::besetzt;
            }
            break;
        case zustand::besetzt:
            cout << "\nParkhaus ist besetzt... \n";
            cout << anzahl_autos << " Autos im Parkhaus\n2 drückem zum rausfahren\n";
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
