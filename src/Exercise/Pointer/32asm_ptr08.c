#include <stdio.h>

int main() {
	int i, j, n = 10, tmp, arr[15];

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

	int *q = arr;
	for (i = 0; i < n; i++) {
		printf("%d ", *(q + i));
	}

	return 0;
}