#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int ab = stoi(a + b);
    for (int i = 1; i * i <= ab; i++) {
        if (i * i == ab) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
