#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, evsum = 0, odsum = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n, greater<>());

  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) evsum += a[i];
    else odsum += a[i];
  }

  cout  << evsum - odsum << endl;
}