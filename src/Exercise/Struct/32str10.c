#include <stdio.h>

struct score {
	char name[50];
	int score;
};

int main() {
	int i, j, n;
	scanf("%d", &n);

	struct score students[n + 2], tmp;

	for (i = 0; i < n; i++) {
		scanf(" %s %d", students[i].name, &students[i].score);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (students[j].score < students[j + 1].score) {
				tmp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%s %d\n", students[i].name, students[i].score);
	}
	return 0;
}