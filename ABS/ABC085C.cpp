#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j + i <= n; j++) {
      if(10000 * i + 5000 *  j + 1000 * (n - i - j) == y) {
        cout << i << " " << j << " " << n - i - j << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
}