#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    int x = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
        x = max(x, m[s]);
    }

    for (auto p : m) {
        if (p.second == x) {
            cout << p.first << endl;
        }
    }
}
