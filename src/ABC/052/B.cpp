#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int v = 0;
    int x = 0;
    for (int i = 0; i < n; i++) {
        v += (s.at(i) == 'I') ? 1 : -1;
        x = max(x, v);
    }

    cout << x << endl;
}
