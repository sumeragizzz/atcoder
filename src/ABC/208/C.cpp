#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    long long base = k / n;
    long long remainder = k % n;

    vector<int> sorted;
    copy(a.begin(), a.end(), back_inserter(sorted));
    sort(sorted.begin(), sorted.end());

    int number = (remainder - 1 < 0 || remainder - 1 >= n) ? 0 : sorted.at(remainder - 1);
    for (int i = 0; i < n; i++) {
        cout << (a.at(i) <= number ? base + 1 : base) << endl;
    }
}
