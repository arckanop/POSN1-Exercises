#include <stdio.h>

int main() {
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d",&n);

	for (i = 0; i <= n - 1; i++) {
		for (j = 1; j <= n - i - 1; j++) {
			printf(" ");
		}

		for (j = 1; j <= i + 1; j++) {
			printf("%d", j);
		}

		for (j = i; j >= 1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}