#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	long long A, B, X, d;
	cin >> A >> B >> d;

	X = A *B;

	int i;
	char str[100];

	sprintf(str, "%lld", X);

	if (d - 1 >= strlen(str)) cout << "_";
	else cout << str[d -1];

	return 0;
}