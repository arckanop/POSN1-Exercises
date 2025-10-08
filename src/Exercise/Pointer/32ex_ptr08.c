#include <stdio.h>

int main() {
	int i, j, n;

	printf("Input ");
	scanf("%d", &n);
	printf("Strings: ");

	char str[n + 5][505];

	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1; j++) {
			// int *p = &arr[j];
			// if (*p > *(p + 1)) {
			// 	tmp = *p;
			// 	*p = *(p + 1);
			// 	*(p + 1) = tmp;
			// }
		}
	}
	return 0;
}
