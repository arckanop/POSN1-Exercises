// Kanop Sutharomna

#include <stdio.h>

int main() {
	int i, seq, found = 0;
	scanf("%d", &seq);

	if (seq >= 1 && seq <= 26) {
		for (i = 1; i <= 26; i++) {
			if (seq == i && found == 0) {
				printf("%c\n", 'A' + i - 1);
				found = 1;
			}

			if (found == 1) {
				printf("%c", 'A' + i - 1);
			}
		}
	} else printf("-null-");

	return 0;
}