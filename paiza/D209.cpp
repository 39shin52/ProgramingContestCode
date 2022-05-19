#include<bits/stdc++.h>
using namespace std;

int main(){
  int count = 0;
  char n;
  string s;
  cin >> n >> s;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == n) {
       count++; 
    }
  }
  cout << count << endl;
}