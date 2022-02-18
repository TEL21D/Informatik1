#include <iostream>
#include <vector>

int sum(std::vector<int> &vec, int n);
int sum_bis_n(int n);
int sum_bis_n_interativ_while(int n);
int sum_bis_n_interativ_for(int n);

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {1,2,4,6,9,12};
    std::cout << "sum(vec, 3): " << sum(vec, 3) << std::endl;
    std::cout << "sum_bis_n(3): " << sum_bis_n(3) << std::endl;
    std::cout << "sum_bis_n_interativ_for(3): " << sum_bis_n_interativ_for(3) << std::endl;
    std::cout << "sum_bis_n_interativ_while(3): " << sum_bis_n_interativ_while(3) << std::endl;
    std::cout << "sum_bis_n(10): " << sum_bis_n(10) << std::endl;
    return 0;
}

int sum_bis_n(int n) {
    // Basisfall
    // Entspricht Schleifenabbruch
    if(n==1) return 1;
    // Rekursionsschritt
    // Entspricht dem Schleifenrumpf
    return sum_bis_n(n-1) + n;
}

int sum_bis_n_interativ_while(int n) {
    int sum = 0;

    while (n >= 1)
    {
        sum += n--;
    }
    return sum;
}
int sum_bis_n_interativ_for(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sum(std::vector<int> &vec, int n) {
    if(n==1) return vec[0];
    return sum(vec, n-1) + vec[n-1];
}
