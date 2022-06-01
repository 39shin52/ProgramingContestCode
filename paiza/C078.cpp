#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, c_1, c_2, stock = 0, profit = 0;
  cin >> n >> c_1 >> c_2;
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  for(int i = 0; i < n; i++) {
    if(p[i] <= c_1){
      stock++;
      profit -= p[i];
    } else if(p[i] >= c_2) {
      profit += p[i] * stock;
      stock = 0;
    } else {

    }
  }
  if(stock != 0) {
    profit += p[n - 1] * stock;
  }
  cout << profit << endl;
}