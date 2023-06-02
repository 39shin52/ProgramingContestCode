#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  if(n * a - b < 0) cout << n * a << endl;
  else if(n * a - b > 0) cout << b << endl;
  else cout << b << endl;
}