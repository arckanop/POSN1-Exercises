#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int i, num, face[3];
	cin >> num;
	face[2] = num % 10;
	num /= 10;
	face[1] = num % 10;
	num /= 10;
	face[0] = num % 10;

	for (i = 0; i < 3; i++) {
		switch (face[i]) {
			case 1:
				cout << "   ";
				break;
			case 2:
				cout << " * ";
				break;
			case 3:
				cout << "*  ";
				break;
			case 4:
				cout << "* *";
				break;
			case 5:
				cout << "* *";
				break;
			case 6:
				cout << "* *";
				break;
			default: cout << "   ";
		}
	}

	cout << endl;

	for (i = 0; i < 3; i++) {
		switch (face[i]) {
			case 1:
				cout << " * ";
				break;
			case 2:
				cout << "   ";
				break;
			case 3:
				cout << " * ";
				break;
			case 4:
				cout << "   ";
				break;
			case 5:
				cout << " * ";
				break;
			case 6:
				cout << "* *";
				break;
			default: cout << "   ";
		}
	}

	cout << endl;

	for (i = 0; i < 3; i++) {
		switch (face[i]) {
			case 1:
				cout << "   ";
				break;
			case 2:
				cout << " * ";
				break;
			case 3:
				cout << "  *";
				break;
			case 4:
				cout << "* *";
				break;
			case 5:
				cout << "* *";
				break;
			case 6:
				cout << "* *";
				break;
			default: cout << "___";
		}
	}

	return 0;
}