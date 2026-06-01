
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a,b,c;
    if (!(std::cin >> a >> b >> c)) return 0;
    
    if (a <= b && a <= c) {
        std::cout << a;
    }

    if (b <= a && b <= c) {
        std::cout << b;
    }

    if (c <= a && c <= b) {
        cout << c;
    }

    return 0;
}
