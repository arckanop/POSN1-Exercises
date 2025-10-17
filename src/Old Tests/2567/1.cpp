#include <iostream>
using namespace std;

int buc[64];

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	char str[32], tmp, x;
	scanf("%s", str);

	int i, j, n = strlen(str);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (str[j] > str[j + 1]) {
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		x = str[i];
		if (x >= 'A' && x <= 'Z') {
			buc[x - 'A'] = 1;
		} else {
			buc[x - 'a' + 26] =	1;
		}
	}

	for (i = 0; i < 52; i++) {
		x = buc[i];
		if (i < 26 && x == 1) {
			printf("%c ", i + 'A');
		} else if (x == 1) printf("%c ", i - 26 + 'a');
	}

	return 0;
} //ABCDEFGHIJKLabcderstuvwxyz