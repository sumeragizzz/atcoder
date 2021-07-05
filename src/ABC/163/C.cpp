#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        m[a]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << m[i] << endl;
    }
}
