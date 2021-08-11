#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<string, int, int>> sp(n);
    for (int i = 0; i < n; i++) {
        string s;
        int p;
        cin >> s >> p;
        sp.at(i) = make_tuple(s, -p, i + 1);
    }

    sort(sp.begin(), sp.end());

    for (auto t : sp) {
        cout << get<2>(t) << endl;
    }
}
