#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	char output[64];
	int i, j, b, r, op, length, len[2];
	char input[2][64];
	long long base, result, total[2];

	cin >> b >> input[0] >> input[1] >> op;


	for (i = 0; i < 2; i++) {
		len[i] = 0;
		for (j = 0; input[i][j] != '\0'; j++) {
			len[i]++;
		}

		base = 1;
		total[i] = 0;
		if (b != 0) {
			for (j = len[i] - 1; j >= 0; j--) {
				if (input[i][j] >= '0' && input[i][j] <= '9') total[i] += (input[i][j] - '0') * base;
				else total[i] += ((input[i][j] - 'A') + 10) * base;
				base *= b;
			}
		}
	}

	switch (op) {
		case 1:
			result = total[0] + total[1];
			break;
		case 2:
			result = total[0] - total[1];
			break;
	}

	if (result != 0) {
		for (i = 0; result != 0; i++) {
			r = result % b;
			if (r <= 9) output[i] = r + '0';
			else output[i] = r - 10 + 'A';
			result /= b;
		}
		output[i] = '\0';

		length = 0;

		for (i = 0; output[i] != '\0'; i++) {
			length++;
		}

		for (i = length - 1; i >= 0; i--) {
			cout << output[i];
		}
	} else cout << "0";
	return 0;
}