#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, q;
    cin >> l >> q;

    vector<int> c(q), x(q);
    for (int i = 0; i < q; i++) {
        cin >> c.at(i) >> x.at(i);
    }

    vector<int> w(q);
    w.at(0) = l;
    int d = 1;
    for (int i = 0; i < q; i++) {
        int sum = 0;
        int index;
        for (int j = 0; j < d; j++) {
            if (x.at(i) > sum && x.at(i) <= sum + w.at(j)) {
                index = j;
                break;
            }
            sum += w.at(j);
        }
        if (c.at(i) == 1) {
            int a = x.at(i) - sum;
            int b = w.at(index) - a;
            w.at(index) = a;
            w.insert(w.begin() + index + 1, b);
            d++;
        } else {
            cout << w.at(index) << endl;
        }
    }
}
