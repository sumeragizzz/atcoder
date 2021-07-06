#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++) {
        string rotated = s.substr(s.size() - i) + s.substr(0, s.size() - i);
        if (rotated == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
