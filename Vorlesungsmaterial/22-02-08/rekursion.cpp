#include <iostream>

// 0 1 2 3 4 5 6 7  8
// 0 1 1 2 3 5 8 13 21
int fib(int n);
int rest(int n, int k);
bool teilbar(int n, int k);

int main(int argc, char const *argv[])
{
    std::cout << "Fibonacci: \n";
    std::cout << "fib(2): " << fib(2) << "\n";
    std::cout << "fib(3): " << fib(3) << "\n";
    std::cout << "fib(6): " << fib(6) << "\n";
    std::cout << "fib(8): " << fib(8) << "\n";
    return 0;
}

int rest(int n, int k)
{
    if(n < k) {
        return n;
    }

    return rest(n-k,k);

    /* Oder als einzeiler
    * return n < k ? n : rest(n-k,k);
    */
}

bool teilbar(int n, int k)
{
  return rest(n,k) == 0;
}

int fib(int n) {
    /* Basisfall 1
    * Anfang der Rekursion, vergleichbar mit Schleifenabbruch
    */
    if (n == 0) {
        return 0;
    }
    /* Basisfall 2
    * Anfang der Rekursion, vergleichbar mit Schleifenabbruch
    */
    if (n < 2)
    {
        return 1;
    }
    /* Rekursionsschritt(e)
    * Die Funktion ruft sich selber wieder auf bis einer der Basisfälle erreicht ist
    * Vergleich mit dem Schleifenrumpf einer while Schleife
    */
    return fib(n-2) + fib(n-1);
}
