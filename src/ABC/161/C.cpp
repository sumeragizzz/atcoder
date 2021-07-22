#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    n %= k;
    long long min = n;
    while (true) {
        n = abs(n - k);
        if (n >= min) {
            break;
        }
        min = n;
    }

    cout << min << endl;
}
