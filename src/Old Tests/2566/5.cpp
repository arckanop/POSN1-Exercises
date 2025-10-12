#include <iostream>
using namespace std;

char buc[30];

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	char text[32], x;
	scanf("%s", text);

	int i;
	for (i = 0; text[i] != '\0'; i++) {
		buc[text[i] - 'A']++;
	}

	for (i = 0; i < 26; i++) {
		if (buc[i] == 1) {
			printf("%c", 'A' + i);
			break;
		}
	}

	return 0;
}