#include <bits/stdc++.h>
using namespace std;

int main() {
    string o, e;
    cin >> o >> e;

    string ans;
    for (int i = 0; i < o.size();i ++) {
        ans.push_back(o.at(i));
        if (i < e.size()) {
            ans.push_back(e.at(i));
        }
    }
    cout << ans << endl;
}
