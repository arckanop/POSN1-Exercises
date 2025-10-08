#include <stdio.h>

int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = arr;
	int i, sum = 0;

	for (i = 0; i < 10; i++) {
		sum += *(p + i);
	}

	printf("Sum = %d", sum);

	return 0;
}