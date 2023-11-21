#include<bits/stdc++.h>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    if (a == 3 || a == 6) {
       cout << "No" << endl;
    } else {
        if (b - a == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }
    return 0;
}