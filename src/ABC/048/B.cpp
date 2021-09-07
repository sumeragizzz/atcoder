#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    cout << b / x - max(a - 1, 0ll) / x + (a == 0 ? 1 : 0) << endl;
}
