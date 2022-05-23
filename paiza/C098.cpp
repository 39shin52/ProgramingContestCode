#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  int s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  cin >> m;
  int a[m], b[m], x[m];
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    cin >> b[i];
    cin >> x[i];
  }

  for(int i = 0; i < m; i++) {
    if(s[a[i] - 1] - x[i] <= 0) {
      s[b[i] - 1] += s[a[i] - 1];
      s[a[i] - 1] = 0;
    } else{
      s[a[i] - 1] -= x[i];
      s[b[i] - 1] += x[i];
    }
  }
  for(int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }
}
