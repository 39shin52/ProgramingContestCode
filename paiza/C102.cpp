#include<bits/stdc++.h>
using namespace std;

// ansを出力
void printans(string str) {
  for(int i = 0; i < 31; i++) {
    cout << str[i] << endl;
  }
}

int main() {
  int n, m;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)cin >> a[i];
  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++)cin >> b[i];
  bool flag = true;
  string ans(31, 'x');


  // aを入れる
  for(int i = 0; i < n; i++) {
    ans[a[i] - 1] = 'A';
  }
  // bを入れる
  for(int i = 0; i < m; i++) {
    ans[b[i] - 1] = 'B';
  }

  // 被ったとこだけ変える
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i] == b[j]) {
        if(flag) {
          ans[a[i] - 1] = 'A';
          flag = false;
        } else {
          flag = true;
          ans[b[j] - 1] = 'B';
        }
      }
    }
  }

  printans(ans);
}