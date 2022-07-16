#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k, count = 0;
  cin >> n >> k;
  while(n != 0) {
    n /= k;
    count++;
  }
  cout << count << endl;
}