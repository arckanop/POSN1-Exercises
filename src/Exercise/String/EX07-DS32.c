// Kanop Sutharomna

#include <stdio.h>

int main() {
	char str1[105], str2[105], ch;
	// int found1 = 0, found2 = 0;

	scanf("%s %s %c", str1, str2, &ch);

	int a, b, found1 = 0, found2 = 0;

	for (a = 0; str1[a] != '\0'; a++) {
		if (ch == str1[a]) {
			found1 = 1;
			break;
		}
	}

	for (b = 0; str2[b] != '\0'; b++) {
		if (ch == str2[b]) {
			found2 = 1;
			break;
		}
	}

	if (found1) a++;
	else a = -1;

	if (found2) b++;
	else b = -1;

	printf("%d\n%d\n", a, b);

	if ((a == -1 && b == -1) || a == b) {
		printf("1");
	} else if ( a < b && a != -1) {
		printf("1");
	} else if (a > b && b != -1) {
		printf("2");
	} else {
		printf("1");
	}

	return 0;
}