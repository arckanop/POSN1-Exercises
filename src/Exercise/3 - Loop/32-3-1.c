#include <stdio.h>

int main() {
	int i, x;
	float avg = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &x);
		avg += x;
	}

	avg /= 10.0;
	printf("%.2f", avg);

	return 0;
}