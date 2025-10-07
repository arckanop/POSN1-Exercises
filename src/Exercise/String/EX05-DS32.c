// Kanop Sutharomna

#include <stdio.h>

int main() {
	int i, n, s, x, found = 0, null = 0;
	scanf("%d %d", &n, &s);

	int sheep[n + 3];

	for (i = 0; i < n; i++) {
		scanf("%d", &sheep[i]);
		if (sheep[i] < 0 || sheep[i] > 10) {
			null = 1;
		}
	}

	if (n >= 1 && n <= 6 && s >= 1 && s <= 10 ) {
		for (i = 0; i < n; i++) {
			if (sheep[i] == s) {
				found = 1;
				printf("%d", i);
				break;
			}
		}

		if (found == 0 || null == 1) {
			printf("-null-");
		}
	} else printf("-null-");

	return 0;
}