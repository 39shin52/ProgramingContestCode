#include<bits/stdc++.h>
using namespace std;

int main() {
 int n, ans = 0;
 cin >> n;
 int l[n], r[n];
 for(int i = 0; i < n; i++) {
  cin >> l[i] >> r[i];
  ans += r[i] - l[i] + 1;
 }

 cout << ans << endl;
}