#include<bits/stdc++.h>
using namespace std;

// int main(){
//   int n, t, a, min = 100000, ans;
//   cin >> n >> t >> a;
//   int h[n];
//   for(int i = 0; i < n; i++){
//     cin >> h[i];
//     h[i] = t - h[i] * 0.006 * 1000;
//     h[i] = a - h[i];
//     if(h[i] < 0)h[i] *= -1;
//     if(min > h[i]){
//       min = h[i];
//       ans = i;
//     }
//   }
//   cout << ans + 1 << endl;
// }

int main(){
  int n, t, a, x, ans = 0, min = 1000000;
  cin >> n >> t >> a;
  for(int i = 1; i <= n; i++){
    cin >> x;
    // cout << "x = " << x << endl;
    int d = (t * 1000 - x * 6) - a * 1000;
    if(d < 0)d = -d;
    // cout << "d = " << d << endl;
    if(min > d){
      min = d;
      ans = i;
    }
  }
  cout << ans << endl;
}

// int main(){
//     int N, T, A;
//     cin >> N >> T >> A;
//     int h[N];
//     for(int i = 1; i <= N; i++){
//       cin >> h[i];
//       cout << "h[i] = " << h[i] << endl;
//     }
//     int min = 1000000;
//     int ans;
//     for(int i = 1; i <= N; i++){
//         int d = (1000 * T - h[i] * 6) - A * 1000;
//         cout << "d = " << d << endl;
//         if(d < 0)d = -d;
//         if(min > d){
//             min = d;
//             ans = i;
//         }
//     }
//     cout << ans << endl;
// }
