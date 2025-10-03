#include <stdio.h>

int main() {
	int i, n;
	float square;
	printf("Enter a number to get the power of 2: ");
	scanf("%d", &n);

	if (n >= 1) {
		for (i = 1; i <= n; i++) {
			if (i == 1) square = 2;
			printf("%.2f\t%.2f\n", (float) i, square);
			square *= 2;
		}
	} else if (n < 0) {
		for (i = 1; i >= n; i--) {
			if (i == 0) {
				printf("%.2f\t%.4f\n", (float) i, (float) 0);
			} else {
				if (i == 1) square = 1;
				if (i == -1) square = 0.5;
				printf("%.2f\t%.4f\n", (float) i, square);
				square /= 2;
			}
		}
	} else if (n == 0) {
		printf("%.2f\t%.2f\n", (float) n, (float) n);
	}
	return 0;
}