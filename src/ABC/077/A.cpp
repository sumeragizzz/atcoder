#include <bits/stdc++.h>
using namespace std;

int main() {
    string c1, c2;
    cin >> c1 >> c2;

    cout << (c1.at(0) == c2.at(2) && c1.at(1) == c2.at(1) && c1.at(2) == c2.at(0) ? "YES" : "NO") << endl;
}
