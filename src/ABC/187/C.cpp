#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    vector<string> ss(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
        ss.at(i) = s.at(i).substr(1);
    }
    sort(ss.begin(), ss.end());

    for (int i = 0; i < n; i++) {
        if (binary_search(ss.begin(), ss.end(), s.at(i))) {
            cout << s.at(i) << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}
