#include <iostream>
using namespace std;

int main() {
	char number[20];
	int i, x, sum = 0;
	cin >> number;

	for (i = 0; i < strlen(number); i++) {
		if (i % 2 == 0) {
			x = (number[i] - '0') * 2;
			if (x > 9) x = (x / 10) + (x % 10);
			sum += x;
		} else sum += number[i] - '0';
	}

	if (sum % 10 == 0) cout << "yes";
	else cout << "no";

	return 0;
} //5490123456789128