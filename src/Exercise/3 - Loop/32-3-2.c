#include <stdio.h>

int main() {
	int i, x, min, max;

	for (i = 0; i < 10; i++) {
		scanf("%d", &x);

		if ( i == 0) {
			min = x;
			max = x;
		} else if (x < min) {
			min = x;
		} else if (x > max) {
			max = x;
		}
	}

	printf("Min = %d\nMax = %d", min, max);
	return 0;
}