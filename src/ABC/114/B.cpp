#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = INT_MAX;
    for (int i = 0; i < s.size() - 2; i++) {
        int x = stoi(s.substr(i, 3));
        ans = min(ans, abs(753 - x));
    }

    cout << ans << endl;
}
