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
    string before;
    for (int i = 0; i < n; i++) {
        if (i > 0 && (s.count(w.at(i)) > 0 || before.back() != w.at(i).front())) {
            cout << "No" << endl;
            return 0;
        }
        s.insert(w.at(i));
        before = w.at(i);
    }
    cout << "Yes" << endl;
}
