#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	char start;
	int i, j, x, r, c, ctr, choose;
	scanf("%c %d", &start, &x);

	choose = x % 10;
	c = (x / 10) % 10;
	r = x / 100;


	char pattern[r + 5][c + 5];

	for (i = 1; i <= r; i++) {
		ctr = 0;
		ctr += i - 1;
		for (j = 1; j <= c; j++) {
			pattern[i][j] = ((ctr + (start - 'A')) % 26) + 'A';
			ctr += r;
		}
	}

	// for (i = 1; i <= r; i++) {
	// 	for (j = 1; j <= c; j++) {
	// 		cout << pattern[i][j];
	// 	}
	// 	cout << endl;
	// }

	for (i = 1; i <= c; i++) cout << pattern[choose][i];
	return 0;
}
