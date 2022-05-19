#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, x, y;
  cin >> n >> x >> y;
  for(int i = 1; i <= n; i++){
    if(i % x == 0) {
      if(i % y == 0) {
        cout << "AB" << endl;
      } else {
        cout << "A" << endl;
      }
    } else if(i % y == 0) {
      cout << "B" << endl;
    } else {
      cout << "N" << endl;
    }
  }
}