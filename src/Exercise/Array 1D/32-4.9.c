#include <stdio.h>

int main() {
	int i, j, mtrx[5][3], colSum[3], rowSum[5];

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &mtrx[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 0) colSum[j] = mtrx[i][j];
			else colSum[j] += mtrx[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			if (j == 0) rowSum[i] = mtrx[i][j];
			else rowSum[i] += mtrx[i][j];
		}
	}

	printf("Column Sum: %d, %d, %d (Column 1, 2 and 3)\n", colSum[0], colSum[1], colSum[2]);
	printf("Row Sum: %d, %d, %d, %d, %d (Row 1, 2, 3, 4, 5)", rowSum[0], rowSum[1], rowSum[2], rowSum[3], rowSum[4]);
	return 0;
}