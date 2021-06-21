#include <bits/stdc++.h>
using namespace std;

const vector<string> WORDS = {"dream", "dreamer", "erase", "eraser"};

bool recursive(string& s, int index) {
    if (index >= s.size()) {
        return true;
    }
    for (string word : WORDS) {
        if (s.substr(index, word.size()) == word) {
            if (recursive(s, index + word.size())) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    cout << (recursive(s, 0) ? "YES" : "NO") << endl;
}
