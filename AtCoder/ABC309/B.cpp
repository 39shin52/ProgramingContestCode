#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> res(n, vector<int>(n));
    char tmp[n][n];
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
        cin >> tmp[i][j];
       }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t = tmp[i][j] - '0';
            a.at(i).at(j) = t;
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == 0) {
                if (j == 0) {
                    res.at(0).at(0) = a.at(1).at(0);
                } else {
                    // res.at(0).at(j) = a[0][j - 1];
                    res.at(0).at(j) = a.at(0).at(j - 1);
                }
            } else if (i == n - 1) {
                if (j == n - 1) {
                    // res.at(n - 1).at(j) == a[i - 1][n - 1];
                    res.at(n - 1).at(j) == a.at(i - 1).at(n - 1);
                } else {
                    // res.at(n - 1).at(j) = a[i][j + 1];
                    res.at(n - 1).at(j) = a.at(i).at(j + 1);
                }
            } else if (j == 0) {
                // res.at(i).at(j) == a[i + 1][j];
                res.at(i).at(j) == a.at(i + 1).at(j);
            } else {
                // res.at(i).at(j) == a[i][j];
                res.at(i).at(j) == a.at(i).at(j);
                cout << i << " " << j << " " << a[i][j] << " " << res.at(i).at(j) << endl;
            }
        }
    }

    for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
        cout << res.at(i).at(j);
       }
       cout << endl;
    }
}