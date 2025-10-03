#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the dimensions for your triangle (left aligned): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}