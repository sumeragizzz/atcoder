#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }
    sort(p.begin(), p.end());

    int ans = 0;
    for (int i = 0; binary_search(p.begin(), p.end(), ans = x + ((i + 1) / 2 * pow(-1, i))); i++) {
        // NOP
    }
    cout << ans << endl;
}
