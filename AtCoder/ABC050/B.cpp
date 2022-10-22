#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int t[110], p[110], x[110];
  for(int i = 1; i <= n; i++) cin >> t[i];

  cin >> m;
  for(int i = 1; i <= m; i++) {
    int a, b, ans = 0;
    cin >> a >> b;
    for(int i = 1; i <= n; i++) {
      if(i == a) {
        ans += b;
      } else {
        ans += t[i];
      }
    }
    cout << ans << endl;
  }
}