#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  vector<int> d(n);
  for(int i = 0; i < n; i++) {
    cin >> a;
    d.push_back(a);
  }

  sort(d.begin(), d.end());
  d.erase(unique(d.begin(), d.end()), d.end());

  cout << d.size() - 1 << endl;
}