#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        sum += a.at(i);
    }
    int avg = sum / n;

    for (int i = 0; i < n; i++) {
        if (a.at(i) > avg) {
            cout << a.at(i) - avg << endl;
        } else {
            cout << avg - a.at(i) << endl;
        }
    }
}
