#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n / 10000 != 0) cout << "5" << endl;
  else if(n / 1000 != 0) cout << "4" << endl;
  else if(n / 100 != 0) cout << "3" << endl;
  else if(n / 10 != 0) cout << "2" << endl;
  else cout << "1" << endl;
}
