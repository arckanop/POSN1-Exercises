#include <iostream>
using namespace std;

long long func(long long x) {
	if (x == 0) return 0;
	if (x == 1) return 4;
	else return (10 + 6 * (x - 2)) + func(x -1);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	long long x;
	cin >> x;

	cout << func(x) << endl;

	return 0;
}