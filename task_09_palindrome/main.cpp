#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::string t = "";

    for (char ch : s) {
        if (isalnum(ch)) {
            t += tolower(ch);
        }
    }

    bool ok = true;

    for (int i = 0; i < t.length() / 2; i++) {
        if (t[i] != t[t.length() - 1 - i]) {
            ok = false;
        }
    }

    if (ok) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}