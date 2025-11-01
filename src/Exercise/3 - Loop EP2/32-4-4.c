#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if ( !(n < 1)) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= i; j++) {
				printf("%d ", i * j);
			}
			printf("\n");
		}
	} else {
		printf("invalid input");
	}
	return 0;
}