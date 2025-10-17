#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	char str1[32], str2[32], x;
	cin >> str1 >> str2;

	int i, len1 = strlen(str1), len2 = strlen(str2), buc1[64], buc2[64];

	for (i = 0; i < 64; i++) buc1[i] = 0;
	for (i = 0; i < 64; i++) buc2[i] = 0;

	for (i = 0; i < len1; i++) {
		x = str1[i];
		if (x >= 'A' && x <= 'Z') buc1[x - 'A']++;
		else if (x >= 'a' && x <= 'z') buc1[x - 'a' + 26]++;
	}

	for (i = 0; i < len2; i++) {
		x = str2[i];
		if (x >= 'A' && x <= 'Z') buc2[x - 'A']++;
		else if (x >= 'a' && x <= 'z') buc2[x - 'a' + 26]++;
	}

	for (i = 0; i < 52; i++) {
		if (buc1[i] > 0 && buc2[i] > 0) {
			if (i < 26) printf("%c ", i + 'A');
			else printf("%c ", i - 26 + 'a');
		}
	}
	return 0;
}