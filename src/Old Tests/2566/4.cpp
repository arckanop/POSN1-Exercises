#include <iostream>
using namespace std;

int cal[10][10];

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int i, j, x, y, num, start, day, ctr = 1;

	cin >> num >> start >> day;

	// for (i = 1; i < start; i++) {
	// 	printf("    ");
	// }

	// for (i = 1; i <= num; i++) {
	// 	cal[i] = i;
	// }

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			cal[i][j] = 0;
		}
	}

	for (i = 1; ctr < num; i++) {
		for (j = 1; j <= 7; j++) {
			if (ctr > num) break;
			if (j == 1 && i == 1) j = start;
			if (ctr == day) {
				x = i;
				y = j;
			}
			cal[i][j] = ctr;
			ctr++;
		}
	}

	// ctr = 1;
	// for (i = 1; ctr < num; i++) {
	// 	for (j = 1; j <= 7; j++) {
	// 		if (j == 1 && i == 1) j = start;
	// 		printf("%4d", cal[i][j]);
	// 		ctr++;
	// 	}
	// 	cout << endl;
	// }

	cout << cal[x-1][y] + cal[x][y -1] + cal[x][y + 1] + cal[x + 1][y];

	// for (i = 1; i <= num; i++) {
	// 	printf("%3d", i);
	// 	if ((i + start - 1) % 7 == 0) cout << endl;
	// }

	// if (day - 1 < )

	// cout << cal[day - 1] + cal[day + 1] + cal[day - 7] + cal[day + 7];

	return 0;
}