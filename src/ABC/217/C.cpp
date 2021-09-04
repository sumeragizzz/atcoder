#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }

    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        q.at(p.at(i) - 1) = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << (i == 0 ? "" : " ") << q.at(i);
    }
    cout << endl;
}
