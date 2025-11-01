#include <stdio.h>

int main() {
	int n, i, j, x = -1, start = 0;
	printf("Enter a number: ");
	scanf("%d",&n);

	for (i = 1; i <= n; i++) {
		start = x;
		x += i;
		for (j = x; j > start; j--) {
			printf("%c", (j % 26) + 65);
		}
		printf("\n");
	}

	return 0;
}