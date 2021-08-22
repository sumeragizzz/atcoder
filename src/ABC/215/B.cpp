#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long k = 0;
    long long x = n;
    while (x / 2 > 0) {
        x = x / 2;
        k++;
    }

    cout << k << endl;
}
