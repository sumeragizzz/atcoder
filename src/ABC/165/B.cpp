#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long deposit = 100;
    long long years = 0;
    while (deposit < x) {
        long long interest = deposit / 100;
        deposit += interest;
        years++;
    }
    cout << years << endl;
}
