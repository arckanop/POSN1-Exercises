#include <stdio.h>

int main() {
	int x, y, i;
	printf("Enter 2 numbers that you want to find the multiples of (less than or equal to): \n");
	scanf("%d %d", &x, &y);

	for (i = 1; i <= 1000; i++) {
		if (i % x == 0 && i % y == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
