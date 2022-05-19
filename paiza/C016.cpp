#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'A') {
      s[i] = '4';
    }
    if(s[i] == 'E') {
      s[i] = '3';
    }
    if(s[i] == 'G') {
      s[i] = '6';
    }
    if(s[i] == 'I') {
      s[i] = '1';
    }
    if(s[i] == 'O') {
      s[i] = '0';
    }
    if(s[i] == 'S') {
      s[i] = '5';
    }
    if(s[i] == 'Z') {
      s[i] = '2';
    }
  }
  for(int i = 0; i < s.length(); i++)cout << s[i];
  cout << endl;
}