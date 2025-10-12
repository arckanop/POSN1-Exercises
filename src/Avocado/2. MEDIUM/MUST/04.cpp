#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	char input[64], output[25];
	int i, r, in, out, len = 0;
	long long num, total = 0, base = 1;

	cin >> in >> input >> out;

	for (i = 0; input[i] != '\0'; i++) {
		len++;
	}

	if (in != 0) {
		for (i = len - 1; i >= 0; i--) {
			if (input[i] >= '0' && input[i] <= '9') total += (input[i] - '0') * base;
			else total += ((input[i] - 'A') + 10) * base;
			base *= in;
		}
	}

	if (total != 0) {
		for (i = 0; total != 0; i++) {
			r = total % out;
			if (r <= 9) output[i] = r + '0';
			else output[i] = r - 10 + 'A';
			total /= out;
		}
		output[i] = '\0';

		len = 0;

		for (i = 0; output[i] != '\0'; i++) {
			len++;
		}

		for (i = len - 1; i >= 0; i--) {
			cout << output[i];
		}
	} else {
		cout << "0";
	}

	return 0;
}