#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> characters;
    for (char c : s) {
        characters.insert(c);        
    }

    for (int i = 0; i < 26; i++) {
        if (!characters.count('a' + i)) {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}
