#include<bits/stdc++.h>
using namespace std;

int main() {
    std::map<string, int> num;

    num["A"] = 0;
    num["B"] = 3;
    num["C"] = 1;
    num["D"] = 4;
    num["E"] = 1;
    num["F"] = 5;
    num["G"] = 9;

    string a, b;
    int sum = 0;
    cin >> a >> b;

    if (a > b) {
        a.swap(b); 
    }

    int flag = 0;

    for(auto it = num.begin(); it != num.end(); it++) {
        if (it->first == a || flag == 1) {
            flag = 1;
            sum += it->second;
        }
        if (it->first == b) {
            flag = 0;
            break;
        }
    }
    
    cout << sum - num.at(a) << endl;
    return 0;
}