#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int plus = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      plus++;
    }
  }

  int minus = (S.size() - 1) / 2 - plus;
    
  cout << 1 + plus - minus << endl;
}
