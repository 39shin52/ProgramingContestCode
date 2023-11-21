#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    // int min = 10001;
    cin >> n >> p >> q;

    vector<int> d(n);

    for(auto& num: d) {
        cin >> num;
    }

    int min = *std::min_element(d.begin(), d.end());

    if (min + q > p) {
        cout << p << endl;
    } else {
        cout << min + q << endl;
    }
    return 0;
}