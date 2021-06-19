#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    map<long long, long long> m;
    for (long long i = 0; i < n; i++) {
        long long a;
        cin >> a;
        m[a]++;
    }

    long long ans = n * (n - 1) / 2;
    for (pair<long long, long long> p : m) {
        ans -= p.second * (p.second - 1) / 2;
    }

    cout << ans << endl;
}
