#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0;
  bool flag = true;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  while(true) {
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 != 0) {
        flag = false;
      }
    }

    if(!flag) break;

    for(int i = 0; i < n; i++) {
      a[i] /= 2;
    }

    count++;
  }
  cout << count << endl;
}