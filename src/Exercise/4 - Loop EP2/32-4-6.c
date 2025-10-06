#include <stdio.h>

int main() {
	int n, i, j, c = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n >= 0 && n <= 200) {
		for (i = 0; i < n; i++) {
			for (j = 0; j <= i; j++) {
				printf("%c", (c % 26) + 'A');
				c++;
			}
			printf("\n");
		}
	} else {
		printf("invalid input");
	}
	return 0;
}