#include<bits/stdc++.h>
using namespace std;

string divide[4]  = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());
  for(int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());
  
  bool flag = true;
  for(int i = 0; i < s.size();) {
    bool flag2 = false;
    for(int j = 0; j < 4; j++) {
      string d = divide[j];
      if(s.substr(i, d.size()) == d) {
        flag2 = true;
        i += d.size();
      }
    }
    if(!flag2) {
      flag = false;
      break;
    }
  }

  if(!flag) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}