#include <stdio.h>

int main() {
	int num, i, ans = 1;
	printf("Enter a positive number: ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++) {
		printf("%d ", i);
		ans *= i;
		if (i != num) printf("x ");
		else printf("= ");
	}
	printf("%d", ans);

	return 0;
}