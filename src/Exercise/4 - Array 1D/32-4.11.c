#include <stdio.h>

int main() {
	int i, j, mtrx[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &mtrx[i][j]);
		}
	}

	printf("The sum of the upper triangle is %d", mtrx[0][1] + mtrx[0][2] + mtrx[1][2]);
	return 0;
}