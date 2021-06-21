#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int beforeT = 0;
    int beforeX = 0;
    int beforeY = 0;

    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        int elapsed = t - beforeT;
        int moved = abs(beforeX - x) + abs(beforeY - y);

        if (moved > elapsed || (elapsed - moved) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }

        beforeT = t;
        beforeX = x;
        beforeY = y;
    }

    cout << "Yes" << endl;
}
