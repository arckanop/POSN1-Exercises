#include <stdio.h>

int main() {
	int i, j, A[4], B[4], count = 0, found = 0;

	for (i = 0; i < 4; i++) {
		scanf("%d", &A[i]);
	}
	for (i = 0; i < 4; i++) {
		scanf("%d", &B[i]);
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			found = 0;
			if (A[i] == B[j]) {
				if (found == 0) {
					found = 1;
					count++;
				}
			}
		}
	}

	printf("Repeat = %d numbers", count);
	return 0;
}