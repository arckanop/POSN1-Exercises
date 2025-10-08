#include <stdio.h>

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	float avg;

	for (int i = 0; i < 5; i++) {
		if (i == 0) avg = 1.0 * (*p);
		else avg += 1.0 * (*(p + i));
	}

	avg /= 5.0;

	printf("%.2f", avg);

	return 0;
}