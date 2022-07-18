#include<bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  int x_a = x - a;
  int x_b = x - b;
  if(x_a < 0) x_a *= -1;
  if(x_b < 0) x_b *= -1;
  if(x_a > x_b) cout  << "B" << endl;
  else cout << "A" << endl;
}