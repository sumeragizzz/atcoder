#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    string line;
    for (int i = 0; i < w + 2; i++) {
        line.push_back('#');
    }

    cout << line << endl;
    for (int i = 0; i < h; i++) {
        string a;
        cin >> a;
        cout << '#' << a << '#' << endl;
    }
    cout << line << endl;
}
