#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  int f[n];
  for(int i = 0; i < n; i ++)cin >> f[i];
  for(int i = 1; i < n; i++) {
    if(f[i] > f[i - 1]) {
      sum += f[i] - f[i - 1];
    } else {
      sum += f[i - 1] - f[i];
    }
  }
  cout << sum + f[0] - 1  << endl;
}