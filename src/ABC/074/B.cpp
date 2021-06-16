#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int a = x * 2;
        int b = (k - x) * 2;
        if (a < b) {
            sum += a;
        } else {
            sum += b;
        }
    }

    cout << sum << endl;
}
