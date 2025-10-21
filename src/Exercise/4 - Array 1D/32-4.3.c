#include <stdio.h>

int main() {
	int arr[10];
	int i, sum = 0, min, max;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			min = arr[i];
			max = arr[i];
		}

		if (min > arr[i]) min = arr[i];
		if (arr[i] > max) max = arr[i];
		sum += arr[i];
	}

	printf("Min = %d, Max = %d\nSum = %d, Average = %.2f", min, max, sum, (float) sum/10);
}