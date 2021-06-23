#include <bits/stdc++.h>
using namespace std;

void fill_island(vector<vector<char>> &a, vector<vector<bool>> &checked, int y,
                 int x) {
    if (y < 0 || y >= 10 || x < 0 || x >= 10 || a.at(y).at(x) == 'x' ||
        checked.at(y).at(x)) {
        return;
    }

    checked.at(y).at(x) = true;

    fill_island(a, checked, y - 1, x);
    fill_island(a, checked, y + 1, x);
    fill_island(a, checked, y, x - 1);
    fill_island(a, checked, y, x + 1);
}

int main() {
    vector<vector<char>> a(10, vector<char>(10));
    for (int i = 0; i < 10; i++) {
        string in;
        cin >> in;
        for (int j = 0; j < 10; j++) {
            a.at(i).at(j) = in.at(j);
        }
    }

    int y, x;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a.at(i).at(j) == 'o') {
                y = i;
                x = j;
                goto loopend;
            }
        }
    }
loopend:

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a.at(i).at(j) == 'x') {
                vector<vector<char>> modifiedA;
                copy(a.begin(), a.end(), back_inserter(modifiedA));
                modifiedA.at(i).at(j) = 'o';

                vector<vector<bool>> checked(10, vector<bool>(10, false));
                fill_island(modifiedA, checked, y, x);

                bool ok = true;
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (a.at(i).at(j) == 'o' && !checked.at(i).at(j)) {
                            ok = false;
                            break;
                        }
                    }
                }
                if (ok) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
}
