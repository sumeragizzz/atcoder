#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int odd = 0;
    int even = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '1') {
            if (i % 2 == 0) {
                odd++;
            } else {
                even++;
            }
        }
    }

    int ans = 0;
    if (even < odd) {
        ans += (s.size() + 1) / 2 - odd;
        ans += even;
    } else {
        ans += odd;
        ans += s.size() / 2 - even;
    }
    cout << ans << endl;
}
