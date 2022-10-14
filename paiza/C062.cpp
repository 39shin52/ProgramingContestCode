// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, count = 0;
//   cin >> n;

//   string t;

//   for(int i = 0; i < n; i++) {
//     cin >> t;
//     if(t == "melon") {
//       if((n - i) >= 9) {
//         i += 9; 
//         count++;
//       } else {
//         count++;
//         break;
//       }
//     }
//   }
//   cout << count << endl;
// }

#include <bits/stdc++.h>
using namespace std;
int main(void){
    int d, s;
    cin >> d >> s;
    if((d * 100000 / s) >= 10000) cout << "yes" << endl;
    else cout << "no" << endl;
}