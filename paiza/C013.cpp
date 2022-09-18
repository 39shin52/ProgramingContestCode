#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int r[m], ans[m];
  int tmp = 0;
  bool flag;

  for(int i = 0; i < m; i++) cin >> r[i];

  for(int i = 0; i < m; i++) {
    flag = true;
    int count = r[i];

    for(;count > 0;) {
      tmp = count % 10;
      if(tmp == n) {
        flag = false;
      }

      count /= 10;
    }
    if(flag) {
      ans[i] = r[i];
    } else {
      ans[i] = 0;
    }
  }

  for(int i = 0; i < m; i++) {
    if(ans[i] != 0) {
      flag = true; 
      cout << ans[i] << endl;
    }
  } 

  if (!flag) cout << "none" << endl;
}