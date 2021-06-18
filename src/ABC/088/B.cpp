#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n; i++) {
        int maxIndex = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a.at(j) > a.at(maxIndex)) {
                maxIndex = j;
            }
        }
        if (i % 2 == 0) {
            alice += a.at(maxIndex);
        } else {
            bob += a.at(maxIndex);
        }
        a.erase(a.begin() + maxIndex);
    }

    cout << alice - bob << endl;
}
