#include <iostream>
using namespace std;

int t[20];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int i, j, x, n, min, max, count;

	cin >> count >> n;

	// for (i = 0; i < count; i++) t[i] = 0;

	for (i = 0; i < n; i++ ) {
		cin >> x;

		for (j = 0; j < count; j++) {
			if (j == 0) min = j;
			else if (t[j] < t[min]) min = j;
		}

		t[min] += x;
	}

	for (i = 0; i < count; i++) {
		if (i == 0) max = i;
		else if (t[i] > t[max]) max = i;
	}

	cout << t[max] << endl;

	return 0;
}