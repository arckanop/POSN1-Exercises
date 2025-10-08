#include <stdio.h>

int main() {
	int num1, num2;
	printf("Input num1: ");
	scanf("%d", &num1);
	printf("Input num2: ");
	scanf("%d", &num2);

	int *x = &num1, *y = &num2;

	printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d", *x + *y, *x - *y, *x * *y, *x / *y);

	return 0;
}