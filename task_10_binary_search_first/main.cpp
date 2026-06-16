#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    long long x;
    std::cin >> x;

    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r) {
        int m = (l + r) / 2;

        if (a[m] == x) {
            ans = m;
            r = m - 1; // hľadáme prvý výskyt
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    std::cout << ans;

    return 0;
}