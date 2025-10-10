#include <stdio.h>

struct score {
	char name[20];
	int math;
	int sci;
	int tech;
	float avg;
};

int main() {
	struct max {
		int person;
		float avg;
	};

	int i, n;
	scanf("%d", &n);

	struct score score[n];
	struct max max;

	for (i = 0; i < n; i++) {
		scanf(" %s %d %d %d", score[i].name, &score[i].math, &score[i].sci, &score[i].tech);
		score[i].avg = (score[i].math + score[i].sci + score[i].tech) / 3.0;

		if (i == 0 || score[i].avg > max.avg) {
			max.person = i;
			max.avg = score[i].avg;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%s: %.2f\n", score[i].name, score[i].avg);
	}

	printf("Highest: %s (%.2f)", score[max.person].name, max.avg);
	return 0;
}