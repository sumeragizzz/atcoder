#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 0; i / pow(10, j) > 0; j++) {
            sum += i % (int)pow(10, j + 1) / pow(10, j);
        }
        if (sum >= a && sum <= b) {
            ans += i;
        }
    }

    cout << ans << endl;
}
