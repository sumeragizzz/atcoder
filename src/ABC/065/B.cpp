#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    int index = 1;
    for (int i = 1; i <= n; i++) {
        if (vec.at(index - 1) == 2) {
            cout << i << endl;
            return 0;
        }
        index = vec.at(index - 1);
    }

    cout << -1 << endl;
}
