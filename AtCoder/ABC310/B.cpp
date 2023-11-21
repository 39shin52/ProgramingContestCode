
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(101), c(101);

    vector<vector<int>> f(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        cin >> p.at(i) >> c.at(i);
        for(int j = 0; j < c.at(i); j++) {
            cin >> f.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p.at(i) >= p.at(j)) {
                
            }
        }
    }
}