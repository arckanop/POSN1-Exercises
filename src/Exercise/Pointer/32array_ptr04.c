#include <stdio.h>

int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *p = arr;
	int i, max = *p;

	for (i = 0; i < 10; i++) {
		if (*(p + i) > max) max = *(p + i);
	}

	printf("Max = %d", max);

	return 0;
}