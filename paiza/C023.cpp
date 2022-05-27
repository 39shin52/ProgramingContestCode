// 解けず


https://paiza.jp/challenges/85/show


#include<bits/stdc++.h>
using namespace std;

int main() {
  int a_0, b_0, c_0, d_0, e_0, f_0, n;
  cin >> a_0 >> b_0 >> c_0 >> d_0 >> e_0 >> f_0 >> n;
  int count = 0;
  int a[n], b[n], c[n], d[n], e[n], f[n];
  for(int i = 0; i< n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i];
  for(int j = 0; j < n; j++) {
    for(int i = 0; i < n; i++){
        if(a[i] == a_0 || a[i] == b_0 || a[i] == c_0 || a[i] == d_0 || a[i] == e_0 || a[i] == f_0){
          cout << "a[i] = " << a[i] << endl;
          count++;
        }
        if(b[i] == a_0 || b[i] == b_0 || b[i] == c_0 || b[i] == d_0 || b[i] == e_0 || b[i] == f_0){
          count++;
        }
        if(c[i] == a_0 || c[i] == b_0 || c[i] == c_0 || c[i] == d_0 || c[i] == e_0 || c[i] == f_0){
          count++;
        }
        if(d[i] == a_0 || d[i] == b_0 || d[i] == c_0 || d[i] == d_0 || d[i] == e_0 || d[i] == f_0){
          count++;
        }
        if(e[i] == a_0 || e[i] == b_0 || e[i] == c_0 || e[i] == d_0 || e[i] == e_0 || e[i] == f_0){
          count++;
        }
        if(f[i] == a_0 || f[i] == b_0 || f[i] == c_0 || f[i] == d_0 || f[i] == e_0 || f[i] == f_0){
          count++;
        }
    }
    cout << count << endl;
  }
  
}