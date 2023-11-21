#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> ans = { "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD" };
    cin >> s;

    for (string t : ans)  {
        if (t == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;

}