#include <stdio.h>
#include <math.h>

struct group {
	char name[20];
	int num[3];
	int prime[3];
	int idx;
};

int main() {
	int i, j, k, n, prime, idx, x;
	scanf("%d", &n);

	struct group group[n + 1];

	for (i = 0; i < n; i++) {
		scanf("%s %d %d %d", group[i].name, &group[i].num[0], &group[i].num[1], &group[i].num[2]);
	}

	for (i = 0; i < n; i++) {
		group[i].idx = 0;
		for (j = 0; j < 3; j++) {
			x = group[i].num[j];
			if (x > 1) {
				prime = 1;

				for (k = 2; k <= sqrt(x); k++) {
					if (x % k == 0 && k != x) {
						prime = 0;
						break;
					}
				}

				if (prime == 1) {
					group[i].prime[group[i].idx] = group[i].num[j];
					group[i].idx++;
				}
			}
			/*
			if (group[i].num[j] % 2 != 0 && group[i].num[j] != 2) prime = 0
			if (prime == 0 && group[i].num[j] != 1)
			*/
		}
	}

	for (i = 0; i < n; i++) {
		printf("%s: ", group[i].name);
		if (group[i].idx != 0) {
			for (j = 0; j < group[i].idx; j++) {
				printf("%d ", group[i].prime[j]);
			}
			printf("\n");
		} else {
			printf("None\n");
		}
	}


	return 0;
}