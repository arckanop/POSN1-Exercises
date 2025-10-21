#include <stdio.h>

int main() {
	int i, j, mtrx[4][4];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &mtrx[i][j]);
		}
	}

	printf("The sum of the upper triangle is %d", mtrx[0][1] + mtrx[0][2] + mtrx[0][3] + mtrx[1][2] + mtrx[1][3] + mtrx[2][3]);
	return 0;
}