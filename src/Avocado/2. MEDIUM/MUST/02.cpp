#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int i, len = 0;
	long long total = 0, base = 1;
	char hex[25];
	cin >> hex;

	for (i = 0; hex[i] != '\0'; i++) {
		len++;
	}

	for (i = len - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			total += (hex[i] - '0') * base;
		} else if (hex[i] >= 'A' && hex[i] <= 'F') {
			total += (hex[i] - 'A' + 10) * base;
		}
		base *= 16;
	}

	cout << total;

	return 0;
}