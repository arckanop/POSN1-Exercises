#include <stdio.h>

int main() {
	int num, i, j, count = 0, prime;
	printf("Enter number to find the prime numbers less than it: ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++) {
		prime = 1;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}

		if (prime) {
			printf("%d\n", i);
			count++;
		}
	}

	printf("There are %d prime numbers that are less than or equal to %d.", count, num);
	return 0;
}