#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  int A[n], B[n];
  for(int i = 0; i < n; i++) {
    cin >> A[i] >> B[i];
  }
  for(int i = 0; i < n; i++) {
    if(a < A[i]) {
      cout << "Low" << endl;
    } else if(b > B[i]){
      cout << "Low" << endl;
    } else {
      cout << "High" << endl;
    }
  }
}