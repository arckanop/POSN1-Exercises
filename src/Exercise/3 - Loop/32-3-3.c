#include <stdio.h>

int main() {
	int num, i;
	scanf("%d", &num);

	if (num == 0 || num == 1 || num == -1) {
		printf("No");
		return 0;
	} else if (num < 0) {
		num *= -1;
	}

	for ( i = 1; i <= num; i++) {
		if (num % i == 0 ) {
			if (i == num) {
				printf("Prime number");
				break;
			} else if (i != 1) {
				printf("Not a prime number");
				break;
			}
		}
	}
	
	return 0;
}