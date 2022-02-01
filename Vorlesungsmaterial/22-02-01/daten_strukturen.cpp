#include "../header.hpp"

struct s_addresse
{
    int haus_nr;
    string strasse;
    int plz;
};

struct s_kontakt
{
    string name;
    string vorname;
    s_addresse addresse;
    int geburtsjahr;
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
    cout << "Addresse Engelhorn: " << addresse2.strasse << " " << addresse.haus_nr << endl;


    cout << "\nStudent: " << student1.name << "\nAddresse: " << student1.addresse.strasse << endl;
    cout << "\nStudent2: " << student2.name << "\nAddresse: " << student2.addresse.strasse << endl;

    return 0;
}
