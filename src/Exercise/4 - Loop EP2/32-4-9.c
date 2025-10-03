#include <stdio.h>

int main() {
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d",&n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j < i ; j++) {
			printf(" ");
		}
		printf("\\");
		for (j = 0; j < 2 * (n - i); j++) {
			printf(" ");
		}
		printf("/\n");
	}
	return 0;
}