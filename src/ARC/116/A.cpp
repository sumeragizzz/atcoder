#include <bits/stdc++.h>
using namespace std;

void judge(int n, long long &odd, long long &even) {
    if (n % 2 != 0) {
        odd++;
    } else {
        even++;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        long long odd = 0;
        long long even = 0;
        for (long long j = 1; j * j <= n; j++) {
            if (n % j != 0) {
                continue;
            }

            judge(j, odd, even);
            if (n / j != j) {
                judge(n / j, odd, even);
            }
        }

        string ans;
        if (odd > even) {
            ans = "Odd";
        } else if (even > odd) {
            ans = "Even";
        } else {
            ans = "Same";
        }
        cout << ans << endl;
    }
}
