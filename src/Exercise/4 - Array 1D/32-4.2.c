#include <stdio.h>

int main() {
	int arr[10];
	int i, sum = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("Sum = %d", sum);
}