#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        string ai;
        cin >> ai;
        for (int j = 0; j < w; j++) {
            a.at(i).at(j) = ai.at(j);
        }
    }

    vector<vector<char>> omitRow;
    for (int i = 0; i < h; i++) {
        bool flag = false;
        for (int j = 0; j < w; j++) {
            if (a.at(i).at(j) == '#') {
                flag = true;
                break;
            }
        }
        if (flag) {
            omitRow.push_back(a.at(i));
        }
    }

    vector<vector<char>> omitColumn(omitRow.size(), vector<char>());
    for (int i = 0; i < w; i++) {
        bool flag = false;
        for (int j = 0; j < omitRow.size(); j++) {
            if (omitRow.at(j).at(i) == '#') {
                flag = true;
                break;
            }
        }
        if (flag) {
            for (int j = 0; j < omitRow.size(); j++) {
                omitColumn.at(j).push_back(omitRow.at(j).at(i));
            }
        }
    }

    for (vector<char> aa : omitColumn) {
        for (char aaa : aa) {
            cout << aaa;
        }
        cout << endl;
    }
}
