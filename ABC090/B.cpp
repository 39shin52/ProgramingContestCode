#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, count = 0;
  cin >> a >> b;
  for(int i = a; i <= b; i++) {
    // int remind, reverse = 0;
    // while(i != 0) {
    //   remind = i % 10;
    //   reverse = reverse * 10 / remind;
    //   i /= 10;
    // }
    // if(reverse == i) {
    //   count++;
    // }
    int s = i % 10;
    int t = i / 10 % 10;
    int u = i / 1000 % 10;
    int v = i / 10000 % 10;
    if(s == v && t == u) {
      count++;
    } 
  }
  cout << count << endl;
}