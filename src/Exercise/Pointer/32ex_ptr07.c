#include <stdio.h>

int main() {
	int i, j, n, tmp;

	printf("Input the numbers of elements to store in the array: ");
	scanf("%d", &n);

	int arr[n + 10];

	printf("Input %d number of elements in the array: ", n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j <= n - 2; j++) {
			int *p = &arr[j];
			if (*p > *(p + 1)) {
				tmp = *p;
				*p = *(p + 1);
				*(p + 1) = tmp;
			}
		}
	}

	printf("The elements in the array after sorting: \n");

	int *q = arr;
	for (i = 0; i < n; i++) {
		printf("%d ", *(q + i));
	}

	return 0;
}