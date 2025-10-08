#include <stdio.h>

int main() {
	int arr[5] = {0, 1, 2, 3, 4};
	int *p = arr;

	printf("arr[2] = %d\narr[3] = %d", *(p + 2), *(p + 3));

	return 0;
}