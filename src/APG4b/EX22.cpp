#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ab.at(i) = make_pair(b, a);
    }
    sort(ab.begin(), ab.end());

    for (auto p : ab) {
        cout << p.second << " " << p.first << endl;
    }
}
