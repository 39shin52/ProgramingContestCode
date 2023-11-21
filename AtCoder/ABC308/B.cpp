#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, sum = 0, count = 0;
    cin >> n >> m;
    string c[101], d[101];
    int p[101];
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for(int i = 1; i <= m; i++) {
        cin >> d[i];
    }
    for(int i = 0; i <= m; i++) {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (c[i] == d[j]) {
                sum += p[j];
                count++;
            }
        }
    }

    if (count != n) {
        int t = n - count;
        sum += p[0] * t;
    }

    cout << sum << endl;

    return 0;
}