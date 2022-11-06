#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, h[110], Hmax = 0, Imax = 0;;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> h[i];

  for(int i = 0; i < n; i++) {
    if(Hmax <= h[i]) {
      Hmax = h[i];
      Imax = i;
    }
  }

  cout << Imax + 1 << endl;
}