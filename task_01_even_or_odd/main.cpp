
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
   if (!(std::cin >> n)) return 0;
    if (n % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
    return 0;
}
