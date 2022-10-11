#include<bits/stdc++.h>
using namespace std;

int calc(int n) {
  int sum = 0;
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int tmp1 = 0, tmp2 = 0;

  for(int i = 1; i <= n; i++) {
    int sum = calc(i);
    if(sum >= a && sum <= b) tmp2 += i;
  } 
  cout << tmp2 << endl;
}

