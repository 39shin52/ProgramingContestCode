#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k, count = 0, tmp = 0;
  cin >> n >> m >> k;
  int b[m];
  for(int i = 0; i < m; i++) cin >> b[i];

  for(int i = 0; i < n; i++) {
    bool flag = false;
    for(int j = 0; j < m; j++) {
      if(b[j] == i) {
        flag = true;
        for(int l = 1; l <= k; l++) {
          if (b[j + l] == i + l) {
            tmp++;
          }
        }
      }
    }
    // cout << i << flag << endl;
    if(!flag) {
      count++;
    }
  }
  cout << count - tmp << endl;
}