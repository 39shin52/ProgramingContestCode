#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int count = 0;
  cin >> s;
  if(s[0] == 'o')count++;
  if(s[1] == 'o')count++;
  if(s[2] == 'o')count++;
  cout << 700 + 100 * count << endl;
}