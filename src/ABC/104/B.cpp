#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.front() != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    int indexC = s.find('C', 1);
    if (indexC == string::npos || indexC < 2 || indexC > s.size() - 2) {
        cout << "WA" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || i == indexC) continue;
        if (s.at(i) < 'a' || s.at(i) > 'z') {
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;
}
