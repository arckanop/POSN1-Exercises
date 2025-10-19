#include <stdio.h>

int main() {
	int i, j, k, n, x, max;
	scanf("%d", &n);

	int size[n + 5];

	for (i = 0; i < n; i++) {
		scanf("%d", &size[i]);

		if (i == 0) max = size[i];
		else if (size[i] > max) max = size[i];
	}

	for (i = 0; i < max; i++) {
		for (j = 0; j < n; j++) {
			x = size[j];
			if (i < x) {
				for (k = 0; k < i; k++) {
					printf(" ");
				}

				printf("\\");

				for (k = 0; k < 2 * (x - i) - 2; k++) {
					printf(" ");
				}

				printf("/");

				for (k = 0; k < i; k++) {
					printf(" ");
				}
			} else {
				for (k = 0; k < x + size[j]; k++) {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}