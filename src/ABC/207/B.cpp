#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c * d <= b) {
        cout << -1 << endl;
        return 0;
    }

    long long skyBlue = a;
    long long red = 0;
    int ans = 0;
    while (skyBlue > red * d) {
        skyBlue += b;
        red += c;
        ans++;
    }

    cout << ans << endl;
}
