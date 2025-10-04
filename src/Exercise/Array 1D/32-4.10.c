#include <stdio.h>

int main() {
	int i, j, mtrx[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &mtrx[i][j]);
		}
	}

	/*
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mtrx[i][j]);
		}
		printf("\n");
	}
	*/

	printf("The sum of the two main diagonals is %d", (mtrx[0][0] + mtrx[1][1] + mtrx[2][2]) + (mtrx[2][0] + mtrx[1][1] + mtrx[0][2]));
	return 0;
}