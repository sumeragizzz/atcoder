#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        int count = 0;
        for (int target = a; target % 2 == 0; target /= 2) {
            count++;
        }

        if (count < min) {
            min = count;
        }
    }

    cout << min << endl;
}
