#include <stdio.h>

int main() {
	int a = 5;
	int *p = &a;

	printf("A = %d, Address of p: %p\n", *p, p);

	*p = 100;

	printf("A = %d", *p);

	return 0;
}