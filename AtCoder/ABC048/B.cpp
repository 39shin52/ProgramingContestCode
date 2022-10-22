#include<bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, x, count = 0;
  cin >> a >> b >> x;
  long long aa = b / x;
  long long bb = (a + x - 1) / x;
  cout << aa - bb  + 1<< endl;
}

// bのxで割り切れる数の量
// aの次でxで割り切れる数の量
// 引いて差を出す