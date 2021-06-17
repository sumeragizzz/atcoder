#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vec(m * 2);
    for (int i = 0; i < m; i++) {
        cin >> vec.at(i * 2) >> vec.at(i * 2 + 1);
    }

    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < m * 2; j++) {
            if (i == vec.at(j)) {
                count++;
            }
        }
        cout << count << endl;
    }
}
