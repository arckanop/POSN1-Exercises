#include <stdio.h>

int main() {
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d",&n);

	for (i = 0; i <= n - 1; i++) {
		for (j = 1; j <= n - i - 1; j++) {
			printf(" ");
		}
		for (j = -i; j <= i; j++) {
			if (j < 0) {
				printf("%d", -j);
			} else {
				printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}