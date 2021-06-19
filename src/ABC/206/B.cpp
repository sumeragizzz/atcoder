#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int amount = 0;
    int days = 0;
    while (amount < n) {
        days++;
        amount += days;
    }

    cout << days << endl;
}
