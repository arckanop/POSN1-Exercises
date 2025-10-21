#include <stdio.h>

int main() {
	int arr[6];
	int i;

	for (i = 1; i <= 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 5; i > 0; i--) {
		printf("%d ", arr[i]);
	}
}