#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    int m;
    cin >> m;

    vector<string> t(m);
    for (int i = 0; i < m; i++) {
        cin >> t.at(i);
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (s.at(i) == s.at(j)) {
                sum++;
            }
        }
        for (int j = 0; j < m; j++) {
            if (s.at(i) == t.at(j)) {
                sum--;
            }
        }
        if (sum > max) {
            max = sum;
        }
    }

    cout << max << endl;
}
