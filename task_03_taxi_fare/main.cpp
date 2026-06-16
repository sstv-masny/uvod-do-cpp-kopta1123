#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
    long long k;
    double cena;

    std::cin >> k;

    if (k <= 2) {
        cena = 4;
    } else {
        cena = 4 + (k - 2) * 1.5;
    }

    std::cout << std::fixed << std::setprecision(2) << cena;

    return 0;
}