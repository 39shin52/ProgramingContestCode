#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, r, max = 0, pin = 0;
  cin >> n >> r;
  int h[n], w[n], d[n];
  int ans[n];
  for(int i = 0; i < n; i++) {
    cin >> h[i] >> w[i] >> d[i];
    ans[i] = 0;
  }
  for(int i = 0; i < n; i++) {
    if(h[i] >= r * 2 && w[i] >= r * 2 && d[i] >= r * 2) {
      ans[i] += h[i] + w[i] + d[i];
    }
  }

  // ソート
  //sort(ans, ans + n);
  for(int i = 0; i < n; i++) {
    if(ans[i] != 0) {
      cout << i + 1 << endl;
    }
  }
}