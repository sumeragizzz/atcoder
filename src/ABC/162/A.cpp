#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool ok = false;
    for (int i = 0; i < n.length(); i++) {
        if (n.at(i) == '7') {
            ok = true;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
}
