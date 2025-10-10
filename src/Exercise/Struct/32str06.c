#include <stdio.h>

struct item {
	char code[5];
	char name[100];
	int quantity;
	float price;
};

int main() {
	struct data {
		int idx;
		float price;
	}; struct data max = {};
	int n, i;
	scanf("%d", &n);

	struct item list[n + 5];

	for (i = 0; i < n; i++) {
		scanf("%s %s %d %f", list[i].code, list[i].name, &list[i].quantity, &list[i].price);
		if (i == 0) {
			max.price = list[i].price;
			max.idx = i;
		}
		else if (list[i].price > max.price) {
			max.price = list[i].price;
			max.idx = i;
		}
	}

	printf("%s %s %d %.2f", list[max.idx].code, list[max.idx].name, list[max.idx].quantity, list[max.idx].price);

	return 0;
}