#include<bits/stdc++.h>
using namespace std;

int main() {
    int s[8];

    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }

    int tmp = s[0];

    for (int i = 1; i < 8; i++) {
        if (tmp > s[i]) {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] < 100 || s[i] > 675) {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] % 25 != 0) {
            cout << "No" << endl;
            return 0;
        }
        tmp = s[i];
    }

    cout << "Yes" << endl;

}