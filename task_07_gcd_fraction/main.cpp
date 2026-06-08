#include <iostream>

int main() {
    long long p, q;
    std::cin >> p >> q;

    long long a = p;
    long long b = q;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    p = p / a;
    q = q / a;

    if (q < 0) {
        p = -p;
        q = -q;
    }

    std::cout << p << " " << q;

    return 0;
}