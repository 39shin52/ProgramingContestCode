#include<bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || \
    s[i] == 'e' || s[i] == 'o' || s[i] == 'A' || s[i] == 'I' || \
    s[i] == 'U' || s[i] == 'E' || s[i] == 'O') {
      
    } else {
      t += s[i];
    }
  }
  cout << t << endl;
}