#include<bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if(s == t){
    cout << "NO" << endl;
  } else {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
