#include <stdio.h>

int main() {
	char str[100];
	char *p = str;

	scanf("%s", str);

	int i, count = 0;
	for (i = 0; *(p + i) != '\0'; i++) {
		if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u') count++;
	}

	printf("%d", count);

	return 0;
}