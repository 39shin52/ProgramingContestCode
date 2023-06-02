#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];

  sort(p, p + n, greater<>());

  int num = n / x;
  int q[num];
  for(int i = 0; i <= num; i++) {
    q[i] = p[n - i];
  }

  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += p[i];
  }

  cout << sum << endl;
 
}