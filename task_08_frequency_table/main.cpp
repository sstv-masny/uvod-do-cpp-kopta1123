#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int freq[101] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        freq[x]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            std::cout << i << " " << freq[i] << "\n";
        }
    }

    return 0;
}