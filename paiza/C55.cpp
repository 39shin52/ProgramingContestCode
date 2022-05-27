#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string g, ans;
  cin >> n >> g;
  string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  for(int i = 0; i < n; i < i++) {
    if(i == n - 1){
      if(s[i].find(g) != string::npos) ans += s[i];
    } else if(s[i].find(g) != std::string::npos) ans += s[i] + "\n";
  }
  if(ans.length() == 0) cout << "None" << endl;
  cout << ans << endl;
}