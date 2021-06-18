#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;

        if (find(vec.begin(), vec.end(), d) == vec.end()) {
            vec.push_back(d);
            ans++;
        }
    }

    cout << ans << endl;
}
