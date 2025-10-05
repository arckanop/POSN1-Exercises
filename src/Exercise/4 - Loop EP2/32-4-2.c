#include <stdio.h>

int main() {
	int i, n, x, min, max, sum = 0;
	printf("Enter the quantity and the numbers: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);

		if (x > 0 && x < 100) {
			if (i == 0) {
				min = x;
				max = x;
			} else {
				if (x < min) min = x;
				if (x > max) max = x;
			}
			sum += x;
		} else {
			printf("Invalid input");
			return 0;
		}
	}

	printf("Max = %d\nMin = %d\nSum = %d\nAvg = %.3f", max, min, sum, (float) sum / n);
	return 0;
}