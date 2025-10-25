#include <iostream>
using namespace std;

int main() {
	int i, j, n, tmp;
	cin >> n;

	int arr[n + 5];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1) cout << ", "; //","
	}

	cout << endl;

	for (i = n - 1; i >= 0; i--) {
		cout << arr[i];
		if (i != 0) cout << ", "; //","
	}

	return 0;
}