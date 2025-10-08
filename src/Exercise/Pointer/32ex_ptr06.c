#include <stdio.h>

int main() {
	char A = 'A', *p = &A;

	for (int i = 0; i < 26; i++) {
		printf("%c ", *p + i);
	}

	return 0;
}
