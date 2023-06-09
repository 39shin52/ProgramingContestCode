#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s, res = "out";
  cin >> n >> s;
  int len = s.length();
  for (int i = 0; i < len; i++) {
    if (s[i] == '|') {
      for (int j = i; j < len; j++) {
        if (s[j] == '*') {
          cout << "in" << endl;
          return 0;
        } else if (i != j && s[j] == '|') {
          cout << "out" << endl;
          return 0;
        }
      }
    }
  }
}