#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	char hex[10], oct[64], bin[64];

	cin >> hex;

	long long total = 0, base = 1, dec;
	int i, r;

	for (i = strlen(hex) - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') total += (hex[i] - '0') * base;
		else total += ((hex[i] - 'A') + 10) * base;
		base *= 16;
	}

	if (total != 0) {
		dec = total;

		for (i = 0; total != 0; i++) {
			r = (total % 2);
			bin[i] = r + '0';
			total /= 2;
		}
		bin[i] = '\0';

		total = dec;
		for (i = 0; total != 0; i++) {
			r = (total % 8);
			oct[i] = r + '0';
			total /= 8;
		}
		oct[i] = '\0';

		for (i = strlen(bin) - 1; i >= 0; i--) {
			cout << bin[i];
		}

		cout << endl;

		for (i = strlen(oct) - 1; i >= 0; i--) {
			cout << oct[i];
		}

	} else cout << "0\n0";

	return 0;
}