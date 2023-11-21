#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    vector<vector<int>> seller;
    vector<vector<int>> buyer;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int min = 1000000;
        if (min < a[i]) {
            seller.at(i).push_back(a[i]);
        }
    }
}