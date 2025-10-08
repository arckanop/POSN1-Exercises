#include <stdio.h>

int main() {
	char str[100];
	char *p = str;

	scanf("%s", str);

	for (int i = 0; *(p + i) != '\0'; i++) {
		if (*(p + i) >= 'a' && *(p + i) <= 'z') {
			printf("%c", *(p + i) - 32);
		} else if (*(p + i) >= 'A' && *(p + i) <= 'Z') {
			printf("%c", *(p + i));
		}
	}

	return 0;
}