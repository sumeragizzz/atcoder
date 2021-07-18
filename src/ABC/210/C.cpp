#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c.at(i);

    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        m[c.at(i)]++;
        if (i >= k) {
            m[c.at(i - k)]--;
            if (m[c.at(i - k)] == 0) {
                m.erase(c.at(i - k));
            }
        }
        ans = max(ans, (int)m.size());
    }
    cout << ans << endl;
}
