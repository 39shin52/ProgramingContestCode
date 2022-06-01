#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x_r, x_g, x_b;
  cin >> n >> x_r >> x_g >> x_b;
  char t[n], c[n];
  for(int i = 0; i < n; i++) cin >> t[i] >> c[i];
  //cout << "x_r " << x_r << ", x_g " << x_g << ", x_b " << x_b << endl;
  for(int i = 0; i < n; i++) {
    if(t[i] == 'R') {
      if(c[i] == 'R') {
        x_r++;
      }
      else if(c[i] == 'G') {
        x_g++;
      }
      else if(c[i] == 'B') {
        x_b++;
      }
      else if(c[i] == 'Y') {
        x_r++; 
        x_g++;
      }
      else if(c[i] == 'M') {
        x_b++; 
        x_r++;
      }
      else if(c[i] == 'C') {
        x_g++; 
        x_b++;
      }
      else if(c[i] == 'W') {
        x_r++; 
        x_g++; 
        x_b++;
      }
      else ;
    } else {
      if(c[i] == 'R') {
        x_r--;
      }
      else if(c[i] == 'G') {
        x_g--;
      }
      else if(c[i] == 'B') {
        x_b--;
      }
      else if(c[i] == 'Y') {
        x_r--; 
        x_g--;
      }
      else if(c[i] == 'M') {
        x_b--; 
        x_r--;
      }
      else if(c[i] == 'C') {
        x_g--; 
        x_b--;
      }
      else if(c[i] == 'W') {
        x_r--; 
        x_g--; 
        x_b--;
      }
      else ;
    }
    
    if(x_r == x_b && x_r == x_g){
      break;
    }
  }
  if(x_r == x_b && x_r == x_g){
    cout << x_r << endl;
  } else {
    cout << "no" << endl;
  }
  
}