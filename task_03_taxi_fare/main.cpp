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

    std::cout << cena;

    return 0;
}