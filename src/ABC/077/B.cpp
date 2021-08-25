#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;
    while (i > 0) {
        double r = sqrt(i);
        if (r == floor(r)) {
            break;
        }
        i--;
    }

    cout << i << endl;
}
