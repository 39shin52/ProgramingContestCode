#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m, point = 0, tmp = 0;
  cin >> n >> m;
  int f[m];
  for(int i = 0; i < m; i++)cin >> f[i];

  for(int i = 0; i < m; i++) {
    if(f[i] <= point) {
      tmp = point;
      point -= f[i];
      f[i] -= tmp;
    } else {
      n -= f[i];
      point += f[i] * 0.1;
    }
    cout << n << " " << point << endl;
  }
}