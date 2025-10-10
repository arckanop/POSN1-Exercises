#include <stdio.h>

struct item {
	char code;
	int quantity;
	float price;
};

int main() {
	int n, i, count = 0;
	scanf("%d", &n);

	struct item list[n + 2];

	for (i = 0; i < n; i++) {
		scanf(" %c %d %f", &list[i].code, &list[i].quantity, &list[i].price);
		if (list[i].quantity >= 10 && list[i].price < 100.0) count++;
	}

	printf("count = %d", count);

	return 0;
}