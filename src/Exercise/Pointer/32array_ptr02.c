#include <stdio.h>

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;

	for (int i = 0; i < 5; i++) {
		*p = *p + 2;
		printf("%d ", *p);
	}

	return 0;
}