#include<bits/stdc++.h>
using namespace std;

// int main() {
//   int n, w;
//   cin >> n >> w;
//   string t;

//   vector<vector<string>> data(n, vector<string>(w));
//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < w; j++) {
//       cin >> t;
//       data.at(i).at(j) = t;
//       if(t == ".") {

//       }
      
//     }
//   }
// } 
int main() {
  int h, w;
  string b[101];

  cin >> h >> w;
  for(int i = 0; i < h; i++) cin >> b[i];

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(b[i][j] == '.') {
        int c = 0;
        for(int dx = -1; dx < 2; dx++) {
          for(int dy = -1; dy < 2; dy++) {
            if(dx == 0 && dy == 0) continue;
            int xx = j + dx;
            int yy = i + dy;
            if(0 <= xx && xx < w && 0 <= yy && yy < h) {
              if(b[yy][xx] == '#') c++;
            }
          }
          b[i][j] = char('0' + c);
        }
      }
    }
  }

  for(int i = 0; i < h; i++) {
    cout << b[i] << endl;
  }
}