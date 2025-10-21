#include <stdio.h>

int main() {
	int i, j, mtrx[3][2], sum = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &mtrx[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			sum += mtrx[i][j];
		}
	}

	printf("The sum of the matrix's entries = %d", sum);
	return 0;
}