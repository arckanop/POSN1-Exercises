#include <stdio.h>

int main() {
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n <= 26 && n >= 0) {
		for (i = 0; i < n; i++) {
			for (j = 0; j <= i; j++) {
				printf("%c", j + 'A');
			}
			printf("\n");
		}
	} else {
		printf("invalid input");
	}
	return 0;
}