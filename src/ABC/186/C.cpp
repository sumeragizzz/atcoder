#include <bits/stdc++.h>
using namespace std;

bool judge(int target, int radix) {
    stringstream ss;
    ss << (radix == 8 ? oct : dec) << target;
    int len = ss.str().size();

    for (int i = 0; i < len; i++) {
        int digit = target % (int)pow(radix, i + 1) / pow(radix, i);
        if (digit == 7) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (judge(i, 8) && judge(i, 10)) {
            ans++;
        }
    }
    cout << ans << endl;
}
