#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<int> ab(2);
    for (int i = 0; i < n; i++) {
        ab.at(i % 2) += a.at(i);
    }

    cout << ab.at(0) - ab.at(1) << endl;
}
