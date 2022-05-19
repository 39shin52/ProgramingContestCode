#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, d;
  cin >> n >> d;
  int x[n][d];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < d; j++){
      cin >> x[i][j];
    }
  }

  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int num = 0;
      for(int k = 0; k < d; k++){
        int diff = abs(x[i][k] - x[j][k]);
        num += diff * diff;
      }
      bool flag = false;
      for(int i = 0; i <= num; i++){
        if(i * i == num) flag = true;
      }
      if(flag)ans++;
    }
  }
  cout << ans << endl;
}