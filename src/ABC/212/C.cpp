#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int x = 0;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b.at(i);
        x = max(x, b.at(i));
    }
    sort(b.begin(), b.end());

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        auto iter = lower_bound(b.begin(), b.end(), a.at(i));
        int index = distance(b.begin(), iter);
        if (index < b.size()) {
            int diff1 = index == 0 ? INT_MAX : abs(b.at(index - 1) - a.at(i));
            int diff2 = abs(b.at(index) - a.at(i));
            ans = min(ans, min(diff1, diff2));
        } else {
            ans = min(ans, abs(x - a.at(i)));
        }
    }

    cout << ans << endl;
}
