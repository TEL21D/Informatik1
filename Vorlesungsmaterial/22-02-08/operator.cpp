#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    // ternärer Operator
    bool var1 = 2 < 3 ? true : false;
    bool var2 = 3 < 2 ? true : false;

    bool var3;
    if (2 < 3)
    {
        var3 = true;
    }
    else {
        var3 = false;
    }

    std::string str1 = var1 ? "True" : "False";
    std::string str2 = var2 ? "True" : "False";
    std::string str3 = var3 ? "True" : "False";

    std::cout << "var1: " << str1 << "\n";
    std::cout << "var2: " << str2 << "\n";
    std::cout << "var3: " << str3 << "\n";

    return 0;
}
