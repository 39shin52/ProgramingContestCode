#include<bits/stdc++.h>
using namespace std;

int main(){
  string e;
  int sum = 0;
  cin >> e;
  for(int i = 0; i < e.length(); i++) {
    if(e[i] == '<')sum += 10;
    if(e[i] == '/')sum += 1;
  }
  cout << sum << endl;
}