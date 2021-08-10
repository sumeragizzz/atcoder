#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n - 1);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < n; i++) cin >> b.at(i);
    for (int i = 0; i < n - 1; i++) cin >> c.at(i);

    int ans = 0;
    int before = -1;
    for (int i = 0; i < n; i++) {
        ans += b.at(a.at(i) - 1);
        if (a.at(i) - before == 1) {
            ans += c.at(before - 1);
        }
        before = a.at(i);
    }

    cout << ans << endl;
}
