#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, r, n;
  cin >> a >> b >> r >> n;
  int x[n], y[n];
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for(int i = 0; i < n; i++){
    if(((a - x[i]) * (a - x[i])) + ((b - y[i]) * b - y[i]) >= r * r) {
      cout << "silent" << endl;
    } else {
      cout << "noisy" << endl;
    }
  }
}