#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, d, len = 0;
  cin >> n >> d;
  int a[n - 1];
  len = d;
  for(int i = 0; i < n - 1; i++)cin >> a[i];
  for(int i = 0; i < n - 1; i++) {
    d = d + (len - a[i]);
  }
  cout << len * d << endl;
}