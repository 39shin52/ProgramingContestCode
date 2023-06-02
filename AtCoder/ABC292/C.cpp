#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int count = 0;
  cin >> n;
  for (int a = 1; a > n; a++) {
    cout << "a" << endl;
    for (int b = 1; b > n; b++) {
      cout << "b" << endl;
      for (int c = 1; c > n; c++) {
        cout << "c" << endl;
        for (int d = 1; d > n; d++) {
          if (((a * b) + (c * d)) == n) {
            count++;
          }      
        }
      }
    }
  }
  cout << count << endl;
}
