#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  while(true) {
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 == 0) {
        a[i] /= 2;
      } else {
        cout << count << endl;
        return 0;
      }
    }
    count++;
  }
}