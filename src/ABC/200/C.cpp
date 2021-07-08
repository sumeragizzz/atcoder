#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a % 200]++;
    }

    long long count = 0;
    for (auto p : m) {
        if (p.second > 1) {
            count += (long long)(p.second - 1 + 1) * (p.second - 1) / 2;
        }
    }
    cout << count << endl;
}
