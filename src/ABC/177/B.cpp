#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int maxMatches = 0;
    for (int i = 0; i < s.size() - t.size() + 1; i++) {
        int matches = 0;
        for (int j = 0; j < t.size(); j++) {
            if (s.at(i + j) == t.at(j)) {
                matches++;
            }
        }
        maxMatches = max(matches, maxMatches);
    }

    cout << t.size() - maxMatches << endl;
}
