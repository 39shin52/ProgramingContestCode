#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, sum = 0;
  cin >> n;

  
  //
  if(n % 10 == 0)cout << "10" << endl;
  else {
    // 各桁を足す
  //
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }
    cout << sum << endl;
  }
}