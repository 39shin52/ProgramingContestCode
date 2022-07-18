#include <bits/stdc++.h>
using namespace std;

// set便利だね〜〜〜〜
// int main(){
// 	int n;
// 	cin >> n;
// 	int d[n];
// 	for(int i = 0; i < n; i++) cin >> d[i];

// 	set<int> values;
// 	for(int i = 0; i < n; i++) {
// 		values.insert(d[i]);
// 	}
// 	cout <<  values.size() << endl;
// }

// パケット法(別で貯めておくやり方)
int main() {
	int n;
	int d[110];

	cin >> n;
	for(int i = 0; i < n; i++) cin >> d[i];

	int num[101] = {0};	// パケット
	for(int i = 0; i < n; i++) {
		num[d[i]]++;
	}

	int res = 0;	// 答えを格納
	for(int i = 1; i <= 100; i++) {
		if(num[i]) {
			++res;
		}
	}
	cout << res << endl;
}

// int main() {
//     int N;
//     int d[110];
//     cin >> N;
//     for (int i = 0; i < N; ++i) cin >> d[i];

//     int num[110] = {0};  // バケット
//     for (int i = 0; i < N; ++i) {
//         num[d[i]]++;  // d[i] が 1 個増える
//     }

//     int res = 0;  // 答えを格納
//     for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
//         if (num[i]) {  // 0 より大きかったら
//             ++res;
//         }
//     }
//     cout << res << endl;
// }