#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  bool flag = false;
  cin >> n;
  for(int i = 0; i <= 25; i++){
    for(int j = 0; j <= 14; j++){
      if((4 * i) + (7 * j) == n){
        flag = true;
        break;
      }
    }
  }
  if(flag){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}