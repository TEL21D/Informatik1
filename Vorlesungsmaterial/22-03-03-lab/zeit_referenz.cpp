#include "../header.hpp"
#include <ctime>

void ref_param(vector<int> &ref);
void wert_param(vector<int> ref);

int main(int argc, char const *argv[])
{
    clock_t t = clock(); // Programmlaufzeit zum start
    vector<int> vec(100000000);
    t = clock();
    cout << t << " ticks und " << (float)t/CLOCKS_PER_SEC
        << " sekunden um den vector zu erstellen\n";

    t = clock();
    wert_param(vec);
    cout << clock() - t << " ticks und " << (float)(clock() - t)/CLOCKS_PER_SEC
        << " sekunden um wert param aufzurufen\n";

    t = clock();
    ref_param(vec);
    cout << clock() - t << " ticks und " << (float)(clock() - t)/CLOCKS_PER_SEC
        << " sekunden um ref param aufzurufen\n";
    return 0;
}

void ref_param(vector<int> &ref) {
    int var;
    cout << "ref param aufgerufen\n";
    cin >> var;
}
void wert_param(vector<int> ref) {
    int var;
    cout << "wert param aufgerufen\n";
    cin >> var;
}