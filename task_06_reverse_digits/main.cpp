#include <iostream>
int main() {
    unsigned long long n;
    std::cin >> n;

    unsigned long long r = 0;

    while (n > 0) {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }

    std::cout << r;

    return 0;
}