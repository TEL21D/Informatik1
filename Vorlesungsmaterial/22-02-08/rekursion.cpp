#include <iostream>

// 0 1 2 3 4 5 6 7  8
// 0 1 1 2 3 5 8 13 21
int fib(int n);

int main(int argc, char const *argv[])
{
    std::cout << "Fibonacci: \n";
    std::cout << "fib(2): " << fib(2) << "\n";
    std::cout << "fib(3): " << fib(3) << "\n";
    std::cout << "fib(6): " << fib(6) << "\n";
    std::cout << "fib(8): " << fib(8) << "\n";
    return 0;
}

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 2)
    {
        return 1;
    }

    return fib(n-2) + fib(n-1);
}