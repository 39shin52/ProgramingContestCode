#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, res = 0;
  cin >> n >> a >> b;

  for(int i = 1; i <= n; i++) {
    int tmp = i;
    int sum = 0;
    while(tmp > 0) {
      sum += tmp % 10;
      tmp /= 10;
    }
    if(sum >= a && sum <= b) res += i;
  }

  cout << res << endl;
}