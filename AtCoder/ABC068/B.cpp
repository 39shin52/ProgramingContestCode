#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, count = 0, ans = 1;
  cin >> n;
  while(true){
    n /= 2;
    if(n == 0)break;
    count++;
  }
  for(int i = 0; i < count; i++){
    ans *= 2;
  }
  cout << ans << endl;
}