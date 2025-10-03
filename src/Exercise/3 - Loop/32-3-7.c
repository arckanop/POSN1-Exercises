#include <stdio.h>

int main() {
	int i, n;
	printf("Enter a number to get the square of the numbers before it: ");
	scanf("%d", &n);

	if (n >= 1) {
		for (i = 1; i <= n; i++) {
			printf("%.2f\t%.2f\n", (float) i, (float) i * i);
		}
	} else if (n < 0) {
		for (i = 1; i >= n; i--) {
			printf("%.2f\t%.2f\n", (float) i, (float) i * i);
		}
	} else if (n == 0) {
		printf("%.2f\t%.2f\n", (float) n, (float) n);
	}

	return 0;
}