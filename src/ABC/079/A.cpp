#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digit1 = n / 1000;
    int digit2 = n % 1000 / 100;
    int digit3 = n % 100 / 10;
    int digit4 = n % 10;

    if (digit1 == digit2 && digit1 == digit3 || digit2 == digit3 && digit2 == digit4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
