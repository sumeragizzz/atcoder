#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a]++;

        for (auto x : m) {
            if (a != x.first) {
                ans += x.second;
            }
        }
    }

    cout << ans << endl;
}
