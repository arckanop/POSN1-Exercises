// Kanop Sutharomna

#include <stdio.h>

int main() {
	char str[505], ch;
	scanf("%s %c", str, &ch);

	int i, length = 0, found;

	for (i = 0; str[i] != '\0'; i++) {
		length++;
	}

	for (i = 0; i < length; i++) {
		if (str[i] == ch) {
			found = 1;
			break;
		}
	}

	if (found == 1) {
		printf("%d\n%d", i, i + 1);
	} else printf("-null-\n-endofsize-");

	return 0;
}