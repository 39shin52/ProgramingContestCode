#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double res[n];
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        res[i] = ((double)a[i] / ((double)a[i] + (double)b[i]));
    }
    std::vector<double> des(res, res + n);

    std::vector<int> indices(n);
    std::iota(indices.begin(), indices.end(), 0);

    std::sort(indices.begin(), indices.end(), [&res](int i1, int i2) {
        return res[i1] > res[i2];
    });

    for (auto v : indices) {
        cout << v + 1 << " ";
    }
    
    return 0;
}