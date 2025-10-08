#include <stdio.h>

int main() {
	int i, j, n;

	printf("Input ");
	scanf("%d", &n);
	getchar();
	printf("Strings: ");

	char str[n + 5][505];

	for (i = 0; i < n; i++) {
		// scanf("%s", str[i]);
		gets(str[i]);
	}

	for (i = 0; i < n; i++) {
		char *p = str[i];
		int len = 0;
		for (j = 0; *(p + j) != '\0'; j++) {
			len++;
		}

		printf("Length of \"%s\" = %d\n", str[i], len);
	}
	return 0;
}
