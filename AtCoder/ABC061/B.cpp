#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(55);
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a[x - 1]++;
    a[y - 1]++;
  }
  for(int i = 0; i < n; i++) cout << a[i] << endl;
}