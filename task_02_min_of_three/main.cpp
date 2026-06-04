#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long a, b, c;
    if (!(std::cin >> a >> b >> c))
        return 0;

    long long minimum = a;

    if (b < minimum) {
        minimum = b;
    }

    if (c < minimum) {
        minimum = c;
    }

    std::cout << minimum;

    return 0;
}