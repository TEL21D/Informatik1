#include <iostream>
#include <string>

std::string reverse2(std::string str1) {
    if(str1.size() == 0) return "";

    std::string temp (1, str1.back());
    str1.pop_back();
    return temp + reverse2(str1);
}
std::string reverse(std::string str1) {
    if(str1.size() > 0)
        return str1[str1.size()-1] + reverse(str1.erase(str1.size()-1) );
    else
        return str1;
}
int main(int argc, char const *argv[])
{
    std::string str = "abcd";
    std::cout << reverse(str) << std::endl;
    std::cout << reverse2(str) << std::endl;
    return 0;
}
