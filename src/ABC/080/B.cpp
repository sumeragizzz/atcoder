#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int divisor = 1;
    while (n >= divisor) {
        sum += n % (divisor * 10) / divisor;
        divisor *= 10;
    }

    if (n % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
