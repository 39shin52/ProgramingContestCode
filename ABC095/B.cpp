#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, x, sum = 0, ans;
  int min = 100000;
  cin >> n >> x;
  int m[n];
  for(int i = 0; i < n; i++){
    cin >> m[i];
    sum += m[i];
    if(min > m[i]){
      min = m[i];
    }
  }
  x = x - sum;
  ans = (x / min) + n;
  printf("%d\n", ans);
}