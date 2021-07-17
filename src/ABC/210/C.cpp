#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c.at(i);
    }

    int ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
        set<int> s;
        for (int j = 0; j < k; j++) {
            s.insert(c.at(i + j));
        }
        ans = max(ans, (int)s.size());
        if (ans == k) {
            break;
        }
    }
    cout << ans << endl;
}
