#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s.at(i);
    }

    vector<string> f{"ABC", "ARC", "AGC", "AHC"};
    for (int i = 0; i < f.size(); i++) {
        auto itr = find(s.begin(), s.end(), f.at(i));
        size_t index = distance(s.begin(), itr);
        if (index == s.size()) {
            cout << f.at(i) << endl;
            break;
        }
    }
}
