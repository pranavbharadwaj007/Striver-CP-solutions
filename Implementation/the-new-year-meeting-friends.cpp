// Link : https://codeforces.com/problemset/problem/723/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e7 + 7;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k, l;
	vector<int>vec;
	for (int i = 0; i < 3; i++) {
		int p;
		cin >> p;
		vec.push_back(p);

	}
	sort(vec.begin(), vec.end());
	int x = abs(vec[1] - vec[0]) + abs(vec[1] - vec[2]);
	cout << x << endl;


	return 0;
}
