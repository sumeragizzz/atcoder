#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j <= i; j++) {
            if (p.at(i) > p.at(j)) {
                ok = false;
                break;
            }
        }
        if (ok) ans++;
    }
    cout << ans << endl;
}
