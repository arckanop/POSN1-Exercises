// Kanop Sutharomna

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100], target;

	scanf("%s %s %c", str1, str2, &target);

	int i, len = 0, found = 0, seq = 0, pos = 0;

	for (i = 0; str1[i] != '\0'; i++) {
		len++;
	}

	for (i = 0; i < len; i++) {
		if (str1[i] == target) {
			found = 1;
			seq = i;
			break;
		}
	}
	seq++;

	if (found == 1) {
		for (i = 0; i < seq; i++) {
			printf("%c", str1[i]);
			pos++;
		}
		printf("%s", str2);

		for (i = pos; i < len; i++) {
			printf("%c", str1[i]);
		}
	} else {
		printf("-1");
	}

	return 0;
}