#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;
    long long base = 1000;
    while (n >= base) {
        ans += max(n - base + 1, 0ll);
        base *= 1000;
    }

    cout << ans << endl;
}
