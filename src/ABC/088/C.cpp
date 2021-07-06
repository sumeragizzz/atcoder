#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c.at(i).at(j);
        }
    }

    for (int i = 1; i < 3; i++) {
        int difference = c.at(i).at(0) - c.at(0).at(0);
        for (int j = 1; j < 3; j++) {
            if (c.at(i).at(j) - c.at(0).at(j) != difference) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
