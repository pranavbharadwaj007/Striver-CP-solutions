// Link : https://codeforces.com/problemset/problem/151/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int nll = (k * l) / nl;
	int lli = c * d;
	int mm = p / np;
	cout << min(nll, min(lli, mm)) / n;

	return 0;
}
