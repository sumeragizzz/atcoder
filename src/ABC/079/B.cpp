#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long before = 2;
    long long ans = 1;
    for (int i = 1; i < n; i++) {
        long long lucas = ans + before;
        before = ans;
        ans = lucas;
    }

    cout << ans << endl;
}
