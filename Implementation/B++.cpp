// Link : https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int t;
	cin >> t;
	int res = 0;
	while (t--) {
		string s;
		cin >> s;
		if (s[1] == '+') {
			res = res + 1;
		} else if (s[1] == '-') {
			res = res - 1;
		}
	}
	cout << res << endl;
	return 0;
}
