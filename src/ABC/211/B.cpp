#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> strings;
    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        strings.insert(s);
    }

    cout << (strings.size() == 4 ? "Yes" : "No") << endl;
}
