#include <stdio.h>

int main() {
	int n, i, j, c;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n >= 0 && n <= 200) {
		for (i = 0; i < n; i++) {
			for (j = 0; j <= i; j++) {
				if (j == 0) c = j;
				if (c >= 26) c -= 26;
				printf("%c ", c + 65);
				c++;
			}
			printf("\n");
		}
	} else {
		printf("invalid input");
	}
	return 0;
}