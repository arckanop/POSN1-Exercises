#include <stdio.h>

int main() {
	int i, j, n, found = 0;
	char target[100];

	printf("Input ");
	scanf("%d", &n);
	printf("Strings: ");

	char str[n + 5][505];

	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}

	printf("Target string: ");
	scanf("%s", target);

	for (i = 0; i < n; i++) {
		char *p = str[i];
		char *q = target;

		while (*p != '\0' && *q != '\0' && *p == *q) {
			p++;
			q++;
		}

		if (*p == '\0' && *q == '\0') {
			found = 1;
			printf("Found \"%s\" in the array.\n", target);
			break;
		}
	}
	return 0;
}