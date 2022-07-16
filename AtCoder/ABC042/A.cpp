#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, fcount = 0, scount = 0;
  cin >> a >> b >> c;
  if(a == 5) fcount++;
  if(a == 7) scount++;
  if(b == 5) fcount++;
  if(b == 7) scount++;
  if(c == 5) fcount++;
  if(c == 7) scount++;
  if(fcount == 2 && scount == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
}