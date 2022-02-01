#include "../header.hpp"

struct s_addresse
{
    int haus_nr;
    string strasse;
    int plz;

    void print() {
        cout << "Addresse: " << strasse << " " << haus_nr << "\nPLZ: " << plz << endl;
    }
};

struct s_kontakt
{
    string name;
    string vorname;
    s_addresse addresse;
    int geburtsjahr;

    void print() {
        cout <<  "Name: " << vorname << " " << name << "\nGeburtsjahr: " << geburtsjahr << "\n";
        addresse.print();
    }
};



int main(int argc, char const *argv[])
{
    s_addresse addresse;
    addresse.haus_nr = 6;
    addresse.plz = 69167;
    addresse.strasse = "Coblitzallee";

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

    return 0;
}
