#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int i, j, num, n, x, y, ctr = 1, sum;
	cin >> num;
	n = num / 100;
	x = (num / 10) % 10;
	y = num % 10;

	int arr[n + 5][n + 5];

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (ctr > 9) ctr -= 9;
			arr[i][j] = ctr;
			ctr++;
		}
	}

	// for (i = 1; i <= n; i++) {
	// 	for (j = 1; j <= n; j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	if (x - 1 <= 0 || y - 1 <= 0 || x + 1 >= n || y + 1 >= n) {
		cout << "NO";
	} else {
		sum = arr[y - 1][x - 1] + arr[y - 1][x] + arr[y - 1][x + 1] + arr[y][x - 1] + arr[y][x + 1] + arr[y + 1][x - 1] + arr[y + 1][x] + arr[y + 1][x + 1];
		cout << sum << endl;
	}

	return 0;
}
