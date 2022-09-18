#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n - 1];
  int ans = 0, tmp;
  for(int i = 0; i < n - 1; i++) cin >> a[i];
  
  for(int i = 0; i < n - 1; i++) {
    if(a[i] <= m) ans += a[i];
  }

  cout << ans << endl;

}
