#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> abc(3, vector<int>(n));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> abc.at(i).at(j);
        }
    }

    map<int, int> a;
    for (int i = 0; i < n; i++) {
        a[abc.at(0).at(i)]++;
    }

    map<int, int> bc;
    for (int i = 0; i < n; i++) {
        bc[abc.at(1).at(abc.at(2).at(i) - 1)]++;
    }

    long long ans = 0;
    for (auto p : a) {
        ans += (long long)p.second * bc[p.first];
    }
    cout << ans << endl;
}
