#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        int count = 2;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 8) {
            sum++;
        }
    }

    cout << sum << endl;
}
