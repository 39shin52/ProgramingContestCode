#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  int l[n];
  for (int i = 0; i < n; i++)cin >> l[i];
  sort(l, l + n);

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      for (int k = 0; k < n; k++){
        if (i < j && j < k){
          if (l[i] != l[j] && l[j] != l[k] && l[i] + l[j] > l[k]){
            // cout << "l[i] = " << l[i] << endl;
            // cout << "l[j] = " << l[j] << endl;
            // cout << "l[k] = " << l[k] << endl;
            // cout << " " << endl;
            ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
}