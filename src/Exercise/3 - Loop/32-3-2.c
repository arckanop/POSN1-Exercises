#include <stdio.h>

int main() {
	int i, x, min, max;
	printf("Enter the numbers that you want to find the min and max: \n");

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

	printf("The minimum value is %d.\nAnd the maximum value is %d.", min, max);
	return 0;
}