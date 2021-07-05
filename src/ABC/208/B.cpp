#include <bits/stdc++.h>
using namespace std;

int selectCoin(int max) {
    int coin = 1;
    for (int i = 1; i * coin <= max; i++) {
        coin *= i;
    }
    return coin;
}

int main() {
    int p;
    cin >> p;

    int ans = 0;
    int target = p;
    while (target > 0) {
        int coin1 = selectCoin(target);
        ans += target / coin1;
        target = target % coin1;
    }

    cout << ans << endl;
}
