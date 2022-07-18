#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int frq[26] = {0};

  for(int i = 0; i < s.size(); i++) {
    frq[s[i] - 'a'] = 1;
  }

  for(char i = 'a'; i <= 'z'; i++) {
    int x = frq[i - 'a'];
    if(x != 1){
      cout << i << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}

