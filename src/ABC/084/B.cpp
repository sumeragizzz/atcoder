#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;

    for (int i = 0; i < s.size(); i++) {
        char c = s.at(i);
        if (i == a) {
            if (c != '-') {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (c < '0' || c > '9') {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}
