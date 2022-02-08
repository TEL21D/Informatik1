#include <iostream>

void foo(int n);
void foo_while(int n);

int main(int argc, char const *argv[])
{
    // foo(42);
    foo_while(42);
    return 0;
}


void foo_while(int n) {
    while (true)
    {
        std::cout << n << std::endl;
        if (n == 0)
        {
            break;
        }

        n--;
    }
}
void foo(int n) {
    if (n == 0)
    {
        return;
    }
    std::cout << n << std::endl;
    foo(n-1);
}