#include "../header.hpp"


/*
Anlegen einer eigenen Datenstruktur (struct)
mit den bekannten Basis Datentypen (int, string, etc)
*/
struct s_addresse
{
    int haus_nr;
    string strasse;
    int plz;

    void print() {
        cout << "Addresse: " << strasse << " " << haus_nr << "\nPLZ: " << plz << endl;
    }
};

/*
Anlegen einer Datenstruktur mit zuvor erstellten erweiterten Datenstrukturen (struct s_addresse)
und den bekannten Basis Datentypen (int, string, etc)
*/
struct s_kontakt
{
    string name;
    string vorname;
    s_addresse addresse;
    int geburtsjahr;

    void print() {
        cout <<  "Name: " << vorname << " " << name << "\nGeburtsjahr: " << geburtsjahr << "\n";
        addresse.print();
        cout << endl;
    }
};



int main(int argc, char const *argv[])
{
    // Initialisieren von structs
    // Variante 1
    s_addresse addresse;
    addresse.haus_nr = 6;
    addresse.plz = 69167;
    addresse.strasse = "Coblitzallee";

    // Initialisieren von structs
    // Variante 2
    // Ähnlich wie bei Vectoren { .... , ... , ...}
    s_addresse addresse2 = {
        10,
        "A3",
        12345
    };

    s_kontakt student1 = {
        "Musterstudent",
        "Max",
        addresse,
        2000
    };
    s_kontakt student2 = {
        "Musterstudent",
        "Max",
        {10, "A3", 12345},
        2000
    };

    cout << "Addresse DHBW: " << addresse.strasse << " " << addresse.haus_nr << endl;
    // cout << "Addresse Engelhorn: " << addresse2.strasse << " " << addresse.haus_nr << endl;
    addresse2.print();


    // cout << "\nStudent: " << student1.name << "\nAddresse: " << student1.addresse.strasse << endl;
    // cout << "\nStudent2: " << student2.name << "\nAddresse: " << student2.addresse.strasse << endl;
    student1.print();
    student2.print();


    vector<s_kontakt> kontakte;

    for (size_t i = 0; i < 3; i++)
    {
        s_kontakt tmp;
        cout << "Bitte Namen Eingeben:\n";
        cin >> tmp.name;
        cout << "Geburtsjahr:\n";
        cin >> tmp.geburtsjahr;

        kontakte.push_back(tmp);
    }


    for(auto el: kontakte){
        el.print();
    }
    return 0;
}
