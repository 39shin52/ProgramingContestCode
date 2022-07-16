#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int ans = 0;
  cin >> s;
  for(int i = 0; i < s.length(); i++)if(s[i] == 'R')ans = 1;

  if(s[0] == 'R' && s[1] == 'R')ans = 2;
  if(s[1] == 'R' && s[2] == 'R')ans = 2;
  if(s[0] == 'R' && s[1] == 'R' && s[2] == 'R')ans = 3;
  cout << ans << endl;
}