// 解けず

#include<bits/stdc++.h>
using namespace std;

int main() {
  int h, w, sum = 0;
  cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  vector<vector<int>> num(h, vector<int>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> v.at(i).at(j);
    }
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> num.at(i).at(j);
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(v.at(i).at(j) == 'o') {
        sum += num.at(i).at(j);
      }
    }
  }
  cout << sum << endl;
}