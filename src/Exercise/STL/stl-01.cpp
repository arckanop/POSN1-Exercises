#include <iostream>
#include <map>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	map <int, int> m;

	int i, n, x, max;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> x;

		m[x];
		m[x]++;
	}

	for (auto num : m) {
		if (num.second > m[max]) max = num.first;
	}

	cout << max << endl;

	return 0;
}