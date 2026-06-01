
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long k;
    if (!(std::cin >> k)) return 0;
       if (k <= 2) {
        cena = 4;
    } else {
        cena = 4 + (k - 2) * 1.5;
    }

    cout << cena;

    return 0;
}
