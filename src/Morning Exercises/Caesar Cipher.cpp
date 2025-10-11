#include <iostream>
using namespace std;

int main() {
	char str[2005];
	int i, n, len = 0;

	scanf("%d %[^\n]", &n, str);

	for (i = 0; str[i] != '\0'; i++) {
		len++;
	}

	for (i = 0; i <= len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = (((str[i] - 'A') - n) % 26 ) + 'A';

			if (str[i] < 'A') str[i] += 26;
		} else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = (((str[i] - 'a') - n) % 26 ) + 'a';

			if (str[i] < 'a') str[i] += 26;
		}
	}

	for (i = 0; i < len; i++) {
		cout << str[i];
	}

	return 0;
}