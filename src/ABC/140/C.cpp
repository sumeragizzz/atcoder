#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> b.at(i);
    }

    long long sum = b.front();
    for (int i = 1; i < n - 1; i++) {
        sum += min(b.at(i - 1), b.at(i));
    }
    sum += b.back();

    cout << sum << endl;
}
