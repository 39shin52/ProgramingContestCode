#include<bits/stdc++.h>
using namespace std;

int main() {
  int xc, yc, r_1, r_2, n;
  cin >> xc >> yc >> r_1 >> r_2 >> n;
  int x[n], y[n];
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

  for(int i = 0; i < n; i++) {
    if((r_1 * r_1) <= ((x[i] - xc) * (x[i] - xc)) + ((y[i] - yc) * (y[i] - yc)) && \
    ((x[i] - xc) * (x[i] - xc)) + ((y[i] - yc) * (y[i] - yc)) <= (r_2 * r_2)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}
