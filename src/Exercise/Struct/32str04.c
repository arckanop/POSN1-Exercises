#include <stdio.h>

struct book {
	char name[100];
	int year;
	char pub[60];
	char country[60];
};

int main() {
	int i;
	struct book rec[5] = {
		{"C_Programming", 1978, "Pearson", "USA"},
		{"Let_Us_C", 1999, "BPB", "India"},
		{"Programming_Fundamemtals", 2012, "Wiley", "UK"}
	};

	printf("--- Book Information ---\n");
	for (i = 0; i < 3; i++) {
		printf("Title: %s, Year: %d, Publisher: %s (%s)\n", rec[i].name, rec[i].year, rec[i].pub, rec[i].country);
	}

	return 0;
}