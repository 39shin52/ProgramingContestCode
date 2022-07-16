#include<bits/stdc++.h>
using namespace std;

int sum(int n){
  cout << "n = " << n;
  int num = 0;
  while(n > 0){
    num += n % 10;
    n /= 10;
  }
  cout << " num = " << num << endl;
  // if(num >= 2 && num <= 5){
  //   cout << "sumed = " << num << endl;
  // }
  return num;
}

int main(){
  int s, a, b, ans = 0;
  cin >> s >> a >> b;
  for(int i = 1; i <= s; i++){
    if(sum(i) >= a && sum(i) <= b)ans+= i;
  }
  cout << ans << endl;
}