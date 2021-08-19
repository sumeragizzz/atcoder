#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool ok = false;
    for (int i = 1; i <= b; i++) {
        if (a * i % b == c) {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}
