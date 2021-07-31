#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool all = true;
    bool next = true;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s.at(i) != s.at(i + 1)) {
            all = false;
        }
        int t = s.at(i) - '0';
        t = t == 9 ? -1 : t;
        int n = s.at(i + 1) - '0';
        if (n - t != 1) {
            next = false;
        }
    }

    cout << (all || next ? "Weak" : "Strong") << endl;
}
