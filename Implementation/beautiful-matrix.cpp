// Link : https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 0, y = 0;
	vector<vector<int>>vec(5, vector<int>(5));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int p;
			cin >> p;
			vec[i][j] = p;
			if (p == 1) {
				x = i + 1;
				y = j + 1;
			}
		}
	}
	int res = abs(3 - x) + abs(3 - y);
	cout << res << endl;
	return 0;
}
