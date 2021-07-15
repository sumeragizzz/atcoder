#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> min(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
        min.at(i) = std::min(p.at(i), (i == 0) ? INT_MAX : min.at(i - 1));
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (p.at(i) <= min.at(i)) ans++;
    }
    cout << ans << endl;
}
