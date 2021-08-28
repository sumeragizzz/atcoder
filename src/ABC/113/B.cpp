#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;

    int currentIndex = 0;
    double currentDiff = DBL_MAX;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        double avg = t - h * 0.006;
        double diff = abs(a - avg);
        if (diff < currentDiff) {
            currentIndex = i;
            currentDiff = diff;
        }
    }

    cout << currentIndex + 1 << endl;
}
