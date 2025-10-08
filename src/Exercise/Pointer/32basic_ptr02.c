#include <stdio.h>

int main() {
	int b = 20;
	int *q = &b;

	printf("B = %d\n", *q);

	*q = 5;

	printf("B' = %d", *q);

	return 0;
}