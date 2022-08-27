#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n, ans = 0;
  cin >> n;
  for(long long i = 0; ; i++) {
    if((n - i) % 998244353 == 0) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}