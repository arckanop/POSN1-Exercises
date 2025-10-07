#include <iostream>
using namespace std;

int main() {
	char sym = 'x';
	int i, j, n;
	cin >> n;

	if (n != 2 && n > 0) {
		if (n % 2 == 0) {
			int x = n / 2;
			for (i = 0; i < x; i++) {
				for (j = 0; j < x - i - 1; j++) {
					cout << ' ';
				}

				for (j = 0; j <= i; j++) {
					cout << sym;
				}

				for (j = 1; j <= i; j++) {
					cout << sym;
				}
				cout << endl;
			}

			for (i = 0; i < x; i++) {
				for (j = i; j > 0; j--) {
					cout << ' ';
				}

				for (j = x - i; j > 0; j--) {
					cout << sym;
				}

				for (j = 1; j < x - i; j++) {
					cout << sym;
				}
				cout << endl;
			}
		} else {
			int x = n / 2;
			for (i = 0; i < x; i++) {
				for (j = 0; j < x - i; j++) {
					cout << ' ';
				}

				for (j = 0; j <= i; j++) {
					cout << sym;
				}

				for (j = 1; j <= i; j++) {
					cout << sym;
				}
				cout << endl;
			}

			x = x + 1;
			for (i = 0; i < x; i++) {
				for (j = i; j > 0; j--) {
					cout << ' ';
				}

				for (j = x - i; j > 0; j--) {
					cout << sym;
				}

				for (j = 1; j < x - i; j++) {
					cout << sym;
				}
				cout << endl;
			}
		}
	} else {
		cout << "Invalid input." << endl;
	}

	return 0;
}