#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    char array[h][w];
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < w; j++) {
            array[i][j] = s.at(j);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (array[i][j] == '#') {
                continue;
            }
            int count = 0;
            if (i - 1 >= 0 && j - 1 >= 0 && array[i - 1][j - 1] == '#') {
                count++;
            }
            if (i - 1 >= 0 && array[i - 1][j] == '#') {
                count++;
            }
            if (i - 1 >= 0 && j + 1 < w && array[i - 1][j + 1] == '#') {
                count++;
            }
            if (j - 1 >= 0 && array[i][j - 1] == '#') {
                count++;
            }
            if (j + 1 < w && array[i][j + 1] == '#') {
                count++;
            }

            if (i + 1 < h && j - 1 >= 0 && array[i + 1][j - 1] == '#') {
                count++;
            }
            if (i + 1 < h && array[i + 1][j] == '#') {
                count++;
            }
            if (i + 1 < h && j + 1 < w && array[i + 1][j + 1] == '#') {
                count++;
            }
            array[i][j] = '0' + count;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << array[i][j];
        }
        cout << endl;
    }
}
