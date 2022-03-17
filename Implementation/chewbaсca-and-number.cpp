// Link : https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;
int rev(int n) {
	int sum = 0;
	while (n) {
		sum *= 10;
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0 && s[i] == '9') continue;
		int x = s[i] - '0';
		int y = 9 - x;
		if (x > y) s[i] = '0' + y;
	}
	cout << s << endl;
	return 0;
}
