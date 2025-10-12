#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long r, total = 0, base = 1;
	char binary[64], hex[64];
	int i, len = 0;

	cin >> binary;

	for (i = 0; binary[i] != '\0'; i++) {
		len++;
	}

	for (i = len - 1; i >= 0; i--) {
		total += (binary[i] - '0') * base;
		base *= 2;
	}

	if (total != 0) {
		for (i = 0; total != 0; i++) {
			r = total % 16;
			if (r <= 9) hex[i] = r + '0';
			else hex[i] = r + 'A' - 10;
			total /= 16;
		}
		hex[i] = '\0';

		len = 0;

		for (i = 0; hex[i] != '\0'; i++) {
			len++;
		}

		for (i = len - 1; i >= 0; i--) {
			cout << hex[i];
		}

	} else cout << "0";
	return 0;
}