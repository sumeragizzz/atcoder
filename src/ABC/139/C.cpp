#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h.at(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        // 移動できる回数が現時点の最大回数以下の場合は終了
        if (n - i - 1 <= ans) {
            break;
        }
        int count = 0;
        // 現時点の最大回数を超える為に移動すべき最低の位置
        int target = i + ans + 1;
        for (int j = i; j < n - 1; j++) {
            // 対象の位置より左であるのに既に値が低かった場合は終了
            if (target < n && j < target && h.at(j) < h.at(target)) {
                break;
            }
            if (h.at(j) < h.at(j + 1)) {
                break;
            }
            count++;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;
}
