#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define fl(n) fixed << setprecision(n)
typedef long long ll;
using P = pair<int,int>;
 
int main(){
    int n, t;
    cin >> n >> t;
    vector<int> c(n);
    vector<int> r(n);
    rep(i, n) cin >> c[i];
    rep(i, n) cin >> r[i];
    int M = 0;
    int ans = 0;
    rep(i, n) {
        if(c[i] == t){
            M = max(M, r[i]);
            if(M == r[i]) ans = i+1;
        }
    }
    if(ans != 0){
        cout << ans << endl;
        return 0;
    }
    rep(i, n){
        if(c[i] == c[0]){
            M = max(M, r[i]);
            if(M == r[i]) ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}