#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    
    if (n > 10 && n % 5 == 0) {
        cout << n << endl;
        return 0;
    }

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }
    if (n >= 3 && n <= 7) {
        cout << 5 << endl;
        return 0;
    }
    if (n == 8 || n == 9) {
        cout << 10 << endl;
        return 0;
    }

    a = n % 10;
    if (a == 3 || a == 4 || a == 6 || a == 7) {
        cout << n / 10 * 10 + 5 << endl;
    } else if (a == 8 || a == 9 || a == 1 || a == 2) {
        cout << n / 10 * 10 << endl;
    }
}