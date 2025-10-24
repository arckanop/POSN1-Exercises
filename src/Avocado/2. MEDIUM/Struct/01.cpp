#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct data {
	int ID;
	char name[50];
	char surname[50];
	int age;
	char telNO[15];
	int score;
};

char* toLower(char str[30]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
	}

	return str;
}

int main() {
	struct data student[100] = {
		{ 10001, "Liam",       "Smith",    13,  "0651234567", 35 },
		{ 10002, "Olivia",     "Johnson",  14,  "0812345678", 48 },
		{ 10003, "Noah",       "Williams", 15,  "0923456789", 29 },
		{ 10004, "Emma",       "Brown",    16,  "0613456789", 41 },
		{ 10005, "Oliver",     "Jones",    12,  "0834567890", 15 },
		{ 10006, "Ava",        "Garcia",   13,  "0945678901", 30 },
		{ 10007, "Elijah",     "Miller",   14,  "0685678901", 45 },
		{ 10008, "Charlotte",  "Davis",    15,  "0876543210", 22 },
		{ 10009, "William",    "Rodriguez",16,  "0917654321", 10 },
		{ 10010, "Sophia",     "Martinez", 12,  "0628765432", 39 },
		{ 10011, "James",      "Hernandez",13,  "0849876543", 28 },
		{ 10012, "Amelia",     "Lopez",    14,  "0950987654", 40 },
		{ 10013, "Benjamin",   "Gonzalez", 15,  "0691098765", 19 },
		{ 10014, "Isabella",   "Wilson",   16,  "0882109876", 44 },
		{ 10015, "Lucas",      "Anderson", 12,  "0973210987", 21 },
		{ 10016, "Mia",        "Thomas",   13,  "0664321098", 37 },
		{ 10017, "Henry",      "Taylor",   14,  "0855432109", 11 },
		{ 10018, "Evelyn",     "Moore",    15,  "0936543210", 49 },
		{ 10019, "Alexander",  "Jackson",  16,  "0647654321", 5  },
		{ 10020, "Harper",     "Martin",   12,  "0868765432", 18 },
		{ 10021, "Ethan",      "Lee",      13,  "0999876543", 89 },
		{ 10022, "Abigail",    "Perez",    14,  "0670987654", 62 },
		{ 10023, "Daniel",     "Thompson", 15,  "0821098765", 79 },
		{ 10024, "Emily",      "White",    16,  "0982109876", 54 },
		{ 10025, "Matthew",    "Harris",   12,  "0633210987", 91 },
		{ 10026, "Ella",       "Sanchez",  13,  "0894321098", 56 },
		{ 10027, "Logan",      "Clark",    14,  "0965432109", 70 },
		{ 10028, "Grace",      "Ramirez",  15,  "0656543210", 84 },
		{ 10029, "Jackson",    "Lewis",    16,  "0817654321", 52 },
		{ 10030, "Avery",      "Robinson", 12,  "0928765432", 95 },
		{ 10031, "Samuel",     "Walker",   13,  "0619876543", 68 },
		{ 10032, "Sofia",      "King",     14,  "0830987654", 76 },
		{ 10033, "Michael",    "Young",    15,  "0941098765", 55 },
		{ 10034, "Chloe",      "Allen",    16,  "0682109876", 93 },
		{ 10035, "Sebastian",  "Wright",   12,  "0873210987", 60 },
		{ 10036, "Layla",      "Scott",    13,  "0914321098", 87 },
		{ 10037, "Jack",       "Green",    14,  "0625432109", 71 },
		{ 10038, "Zoey",       "Baker",    15,  "0846543210", 99 },
		{ 10039, "David",      "Hall",     16,  "0957654321", 58 },
		{ 10040, "Skylar",     "Carter",   12,  "0698765432", 81 },
		{ 10041, "Carter",     "Adams",    13,  "0889876543", 65 },
		{ 10042, "Lily",       "Evans",    14,  "0970987654", 98 },
		{ 10043, "Julian",     "Russell",  15,  "0661098765", 57 },
		{ 10044, "Scarlett",   "Murray",   16,  "0852109876", 78 },
		{ 10045, "Theodore",   "Rogers",   12,  "0933210987", 90 },
		{ 10046, "Hannah",     "Bailey",   13,  "0644321098", 63 },
		{ 10047, "Leo",        "Reed",     14,  "0865432109", 83 },
		{ 10048, "Stella",     "Cook",     15,  "0996543210", 69 },
		{ 10049, "Gabriel",    "Hughes",   16,  "0677654321", 97 },
		{ 10050, "Aurora",     "Hayes",    12,  "0828765432", 51 },
		{ 10051, "Joseph",     "Cooper",   13,  "0989876543", 74 },
		{ 10052, "Madison",    "Perry",    14,  "0630987654", 66 },
		{ 10053, "John",       "Long",     15,  "0891098765", 85 },
		{ 10054, "Victoria",   "Price",    16,  "0962109876", 57 },
		{ 10055, "Aiden",      "Foster",   12,  "0653210987", 94 },
		{ 10056, "Nova",       "Murphy",   13,  "0814321098", 72 },
		{ 10057, "Mason",      "Kelly",    14,  "0925432109", 50 },
		{ 10058, "Riley",      "Rivera",   15,  "0616543210", 80 },
		{ 10059, "Caleb",      "Ward",     16,  "0837654321", 61 },
		{ 10060, "Aria",       "Jenkins",  12,  "0948765432", 92 },
		{ 10061, "Owen",       "Howard",   13,  "0689876543", 55 },
		{ 10062, "Eliana",     "Griffin",  14,  "0870987654", 88 },
		{ 10063, "Ezra",       "Patterson",15,  "0911098765", 53 },
		{ 10064, "Penelope",   "Cox",      16,  "0622109876", 77 },
		{ 10065, "Isaac",      "Mitchell", 12,  "0843210987", 99 },
		{ 10066, "Camila",     "Bell",     13,  "0954321098", 64 },
		{ 10067, "Luka",       "Torres",   14,  "0695432109", 89 },
		{ 10068, "Hazel",      "Morris",   15,  "0886543210", 62 },
		{ 10069, "Jacksons",   "Wood",     16,  "0977654321", 79 },
		{ 10070, "Violet",     "Reed",     12,  "0668765432", 54 },
		{ 10071, "Asher",      "King",     13,  "0859876543", 91 },
		{ 10072, "Luna",       "Cook",     14,  "0930987654", 56 },
		{ 10073, "Colton",     "Harris",   15,  "0641098765", 70 },
		{ 10074, "Willow",     "Sanchez",  16,  "0862109876", 84 },
		{ 10075, "Finn",       "Clark",    12,  "0993210987", 52 },
		{ 10076, "Gianna",     "Ramirez",  13,  "0674321098", 95 },
		{ 10077, "Robert",     "Lewis",    14,  "0825432109", 68 },
		{ 10078, "Aurora",     "Robinson", 15,  "0986543210", 76 },
		{ 10079, "Grayson",    "Walker",   16,  "0637654321", 55 },
		{ 10080, "Eleanor",    "King",     12,  "0898765432", 93 },
		{ 10081, "Micah",      "Young",    13,  "0969876543", 60 },
		{ 10082, "Nova",       "Allen",    14,  "0650987654", 87 },
		{ 10083, "Adrian",     "Wright",   15,  "0811098765", 71 },
		{ 10084, "Bella",      "Scott",    16,  "0922109876", 99 },
		{ 10085, "Jaxon",      "Green",    12,  "0613210987", 58 },
		{ 10086, "Kinsley",    "Baker",    13,  "0834321098", 81 },
		{ 10087, "Kai",        "Hall",     14,  "0945432109", 65 },
		{ 10088, "Mila",       "Carter",   15,  "0686543210", 98 },
		{ 10089, "Brooks",     "Adams",    16,  "0877654321", 57 },
		{ 10090, "Summer",     "Evans",    12,  "0918765432", 78 },
		{ 10091, "Wesley",     "Russell",  13,  "0629876543", 90 },
		{ 10092, "Elena",      "Murray",   14,  "0840987654", 63 },
		{ 10093, "Maddox",     "Rogers",   15,  "0951098765", 83 },
		{ 10094, "Freya",      "Bailey",   16,  "0692109876", 69 },
		{ 10095, "Jesse",      "Reed",     12,  "0883210987", 97 },
		{ 10096, "Sloane",     "Cook",     13,  "0974321098", 51 },
		{ 10097, "Everett",    "Hughes",   14,  "0665432109", 74 },
		{ 10098, "Delilah",    "Hayes",    15,  "0856543210", 66 },
		{ 10099, "Ryan",       "Cooper",   16,  "0937654321", 85 },
		{ 10100, "Adeline",    "Perry",    12,  "0648765432", 72 }
	};

	char target[20];
	char fName[50], lName[50];
	cin >> target;

	char *p;
	int i, found = 0;

	for (i = 0; i < sizeof(student) / sizeof(student[0]); i++) {

		strcpy(fName, student[i].name);
		strcpy(lName, student[i].surname);

		p = strstr(toLower(fName), toLower(target));

		if (p != NULL) {
			printf("%d %s %s %d %s %d\n",
				student[i].ID,
				student[i].name,
				student[i].surname,
				student[i].age,
				student[i].telNO,
				student[i].score);
		   found = 1;
		} else {
			p = strstr(toLower(lName), toLower(target));

			if (p != NULL) {
				printf("%d %s %s %d %s %d\n",
					student[i].ID,
					student[i].name,
					student[i].surname,
					student[i].age,
					student[i].telNO,
					student[i].score
				);

				found = 1;
			}
		}
	}

	if (found == 0) printf("not have");

	return 0;
}
