#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h.at(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n - 1; j++) {
            if (h.at(j) < h.at(j + 1)) {
                break;
            }
            count++;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;
}
