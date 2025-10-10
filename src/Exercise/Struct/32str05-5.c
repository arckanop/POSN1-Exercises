#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct student {
	int id;
	char name[40];
	struct date birth;
	struct date checkIn;
	int class;
};

int main() {
	int i, targetBirthMonth, found = 0;
	struct student youngest;
	struct student record[5] = {
		{10001, "Chris Hemsworth", {11, 12, 2552}, {3, 5, 2560}, 4},
		{10002, "Tom Cruise",      {3,  4, 2552},  {6, 5, 2555}, 4},
		{10003, "Taylor Swift",    {13, 12, 2552}, {1, 5, 2560}, 2},
		{10004, "Hugh Grant",      {9,  9, 2551},  {1, 5, 2560}, 1},
		{10005, "Kristen Stewart", {9,  4, 2552},  {7, 5, 2560}, 1}
	};

	printf("ID\tName\t\t\tBirth(dd/mm/yyyy)\n");

	for (i = 0; i < 5; i++) {
		printf("%-5d %-20s %02d/%02d/%04d\t\t\n",
			   record[i].id,
			   record[i].name,
			   record[i].birth.day, record[i].birth.month, record[i].birth.year
			   );
	}

	printf("\nID\tName\t\t\tBirth(dd/mm/yyyy)\tAge (From 01/10/2568)\n");

	for (i = 0; i < 5; i++) {
		int age = 2568 - record[i].birth.year;

		if (10 < record[i].birth.month || (10 == record[i].birth.month && 1 < record[i].birth.day)) age--;

		printf("%-5d %-20s %02d/%02d/%04d\t\t%d\n",
			   record[i].id,
			   record[i].name,
			   record[i].birth.day, record[i].birth.month, record[i].birth.year,
			   age
			   );
	}

	return 0;
}