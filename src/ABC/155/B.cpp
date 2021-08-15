#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a.at(i) % 2 == 0 && a.at(i) % 3 != 0 && a.at(i) % 5 != 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "APPROVED" : "DENIED") << endl;
}
