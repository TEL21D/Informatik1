#include <iostream>
#include <vector>

int add(int a, int b);
int mult(int a, int b);
std::vector<int> vec(int n);

int main(int argc, char const *argv[])
{
    int a = 5, b = 4;
    int result = add(a, b);
    result = mult(result, 10);
    std::cout << "Multiplikation: " << result << std::endl;
    // Alles in einer Zeile
    std::cout << "Multiplikation: " << mult(add(5,5), add(10, 10)) << std::endl;

    for (auto el : vec(10))
    {
        std::cout << el << std::endl;
    }

    return 0;
}

std::vector<int> vec(int n) {
    std::vector<int> vec;
    for (size_t i = 0; i < n; i++)
    {
        vec.push_back(i);
    }
    return vec;
}

int add(int a, int b) {
    return a + b;
}
int mult(int a, int b) {
    return a * b;
}