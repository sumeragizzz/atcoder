#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w.at(i);
    }

    set<string> s;
    s.insert(w.at(0));
    for (int i = 1; i < n; i++) {
        if (s.count(w.at(i)) > 0 || w.at(i - 1).back() != w.at(i).front()) {
            cout << "No" << endl;
            return 0;
        }
        s.insert(w.at(i));
    }
    cout << "Yes" << endl;
}
