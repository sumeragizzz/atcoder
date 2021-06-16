#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int ans = A;
  for (int i = 0; i < N; i++) {
    string OP;
    int B;
    cin >> OP >> B;

    if (OP == "+") {
        ans += B;
    } else if (OP == "-") {
        ans -= B;
    } else if (OP == "*") {
        ans *= B;
    } else {
        if (B == 0) {
          cout << "error" << endl;
          break;
        }
        ans /= B;
    }
    cout << i + 1 << ":" << ans << endl;
  }
}
