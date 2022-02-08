#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 5;
    do {
        std::cout << i++ << std::endl;
    }
    while (i < 5);

    i = 5;
    while (i < 5)
    {
        std::cout << i++ << std::endl;
    }

    i = 0;
    for (; i < 5;)
    {
        std::cout << i++ << std::endl;
    }


    return 0;
}
