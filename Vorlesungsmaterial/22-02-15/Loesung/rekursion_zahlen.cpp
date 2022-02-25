#include <iostream>
using namespace std;

/// Liefert die Summe der Zahlen von 1 bis n.
int summe_bis(int n);
int summe_bis_i(int n);

/// Liefert die Summe der Zahlen von n1 bis n2.
int summe_von_bis(int n1, int n2);

/// Liefert das Ergebnis der ganzzahligen Division von n durch k.
int geteilt(int n, int k);

/// Liefert den Rest der ganzzahligen Division von n durch k.
int rest(int n, int k);

/// Liefert true, falls n durch k teilbar ist.
bool teilbar(int n, int k);

/// Liefert den größten gemeinsamen Teiler von a und b.
/// Hinweis: Es gilt immer ggT(a,b) = ggT(b, a-b)
int ggT(int a, int b);
int ggT_euklid(int a, int b);

/// Liefert die Anzahl der Teiler von n, die zwischen 1 und i liegen.
int anzahl_teiler(int n, int i);

/// Liefert true, wenn n eine Primzahl ist.
bool prim(int n);

int main() {

  cout << summe_bis(5) << endl; // Soll 1+2+3+4+5 == 15 ausgeben.
  cout << summe_bis_i(5) << endl; // Soll 1+2+3+4+5 == 15 ausgeben.
  cout << summe_von_bis(3, 5) << endl; // Soll 3+4+5 == 12 ausgeben.
  cout << geteilt(17, 4) << endl; // Soll 4 ausgeben.
  cout << rest(17, 4) << endl; // Soll 1 ausgeben.
  cout << teilbar(17, 4) << endl; // Soll 0 ausgeben.
  cout << ggT(60,24) << endl; // Soll 12 ausgeben.
  cout << ggT_euklid(60,24) << endl; // Soll 12 ausgeben.
  cout << anzahl_teiler(12,10) << endl; // Soll 5 ausgeben.
  cout << "\nPrimzahltest:" << endl; // Soll 0 ausgeben.
  cout << prim(4) << endl; // Soll 0 ausgeben.
  cout << prim(3) << endl; // Soll 1 ausgeben.
  cout << prim(0) << endl; // Soll 0 ausgeben.
  cout << prim(1) << endl; // Soll 0 ausgeben.
}

int summe_bis_i(int n) {
    int summe = 0;

    while (n > 0)
    {
        summe += n;
        n--;
    }
    /*
    summe = 0;
    for (int i = n; i > 0; i--)
    {
        summe += i;
    }
    */
    return summe;
}
int summe_bis(int n) {
    // Basisfall / Abbruchbedindung
    if (n > 0)
        return  summe_bis(n-1) + n; // 5 + 4 + 3 + 2 + 1 + 0

    return 0;
}

int summe_von_bis(int n1, int n2) {
    if (n1 == n2) return n1;
    return summe_von_bis(n1, n2-1) + n2; // 5 + 4 + 3
}

int geteilt(int n, int k) {
    return n < k ? 0 : geteilt(n-k, k) +1;
    /*
    if (n < k)
    {
        return 0;
    }
    else {
        return geteilt(n-k, k) + 1;
    }
    */
}

int rest(int n, int k) {
    return n < k ? n : rest(n-k, k);
}

bool teilbar(int n, int k) {
    if(rest(n, k) == 0)
        return true;
    else
        return false;
}

int ggT(int a, int b)
{
  if (a<b) { return ggT(b,a); }
  if (a==b) { return a; }
  return ggT(b,a-b);
}

int ggT_euklid(int a, int b) {
    if(a < b) return ggT(b, a);
    if(rest(a, b) == 0) {
        return b;
    }
    else {
        return ggT(b, rest(a, b));
    }
}

int anzahl_teiler(int n, int i)
{
  if (i > n) { return anzahl_teiler(n,n); }
  if (i <= 0) { return 0; }
  return anzahl_teiler(n,i-1) + (teilbar(n,i) ? 1 : 0);
}

bool prim(int n) {
    return anzahl_teiler(n, n) == 2;
}