#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    cout << (abs(a - x) < abs(b - x) ? "A" : "B") << endl;
}
