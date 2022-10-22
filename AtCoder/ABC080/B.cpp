#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int tmp = n;
  while(n > 0) {
    count += n % 10;
    n /= 10; 
  }
  if(tmp % count == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}