#include <bits/stdc++.h>
using namespace std;

long long g1(long long a) {
    string s = to_string(a);
    sort(s.begin(), s.end(), greater<char>());
    return stoll(s);
}

long long g2(long long a) {
    string s = to_string(a);
    sort(s.begin(), s.end());
    return stoll(s);
}

long long f(long long a) {
    return g1(a) - g2(a);
}

int main() {
    int n, k;
    cin >> n >> k;

    long long a = n;
    for (int i = 0; i < k; i++) {
        a = f(a);
    }
    cout << a << endl;;
}
