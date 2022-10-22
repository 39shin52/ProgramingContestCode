#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k, ans = 0;
  cin >> n >> k;
  int x[n];
  for(int i = 0; i < n; i++) cin >> x[i];
  
  for(int i = 0; i < n; i++) {
    if(x[i] >= (k - x[i])) {
      ans += (k - x[i]) * 2;
    } else {
      ans += x[i] * 2;
    }
  }
  cout << ans << endl;
}