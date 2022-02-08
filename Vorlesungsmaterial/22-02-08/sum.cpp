#include <iostream>
#include <vector>

int sum(std::vector<int> &vec, int n);
int sum_bis_n(int n);

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {1,2,4,6,9,12};
    std::cout << "sum(vec, 3): " << sum(vec, 3) << std::endl;
    std::cout << "sum_bis_n(3): " << sum_bis_n(3) << std::endl;
    std::cout << "sum_bis_n(10): " << sum_bis_n(10) << std::endl;
    return 0;
}

int sum_bis_n(int n) {
    if(n==1) return 1;
    return sum_bis_n(n-1) + n;
}
int sum(std::vector<int> &vec, int n) {
    if(n==1) return vec[0];
    return sum(vec, n-1) + vec[n-1];
}