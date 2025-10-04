#include <stdio.h>

int main() {
	int i, j, hist[5];

	for (i = 0; i < 5; i++) {
		scanf("%d", &hist[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", hist[i]);
		for (j = 0; j < hist[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}