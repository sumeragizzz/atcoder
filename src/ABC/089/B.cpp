#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s == "Y") {
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
}
