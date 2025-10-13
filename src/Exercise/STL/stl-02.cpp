#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int i, j, n;

	cin >> n;

	vector<vector<int>>  mtrx(n, vector<int>(n));

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> mtrx[i][j];
		}
	}

	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cout << mtrx[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}