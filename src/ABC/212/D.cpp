#include <bits/stdc++.h>
using namespace std;

map<long long, long long> ope2(map<long long, long long> &m, long long ope2x) {
    map<long long, long long> result;
    for (auto p : m) {
        result[p.first + ope2x] = p.second;
    }
    return result;
}

int main() {
    int q;
    cin >> q;

    map<long long, long long> m;
    vector<long long> ans;
    for (int i = 0; i < q; i++) {
        int ope;
        cin >> ope;
        long long ope2x = 0;
        if (ope == 1) {
            if (ope2x > 0) {
                map<long long, long long> newM;
                for (auto p : m) {
                    newM[p.first + ope2x] = p.second;
                }
                m = newM;
                ope2x = 0;
            }
            int x;
            cin >> x;
            m[x]++;
        } else if (ope == 2) {
            int x;
            cin >> x;
            ope2x += x;
        } else {
            if (ope2x > 0) {
                map<long long, long long> newM;
                for (auto p : m) {
                    newM[p.first + ope2x] = p.second;
                }
                m = newM;
                ope2x = 0;
            }
            int key = m.begin()->first;
            ans.push_back(key);
            m[key]--;
            if (m[key] == 0) {
                m.erase(key);
            }
        }
// printf("ope2x: %d\n", ope2x);
// for (auto p : m) {
//     printf("m key: %d, value: %d\n", p.first, p.second);
// }
    }

    for (long long value : ans) {
        cout << value << endl;
    }
}
