#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int i, len = 0, binary[64];
	long long num;
	cin >> num;

	if (num != 0) {
		for (i = 0; num != 0; i++) {
			binary[i] = num % 2;
			len++;
			num /= 2;
		}

		for (i = len - 1; i >= 0; i--) {
			cout << binary[i];
		}
	} else cout << "0";

	return 0;
}