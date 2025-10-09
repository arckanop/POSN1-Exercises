#include <iostream>
using namespace std;

long long fact(long long x) {
	if (x == 1) return 1;
	else return x * fact(x - 1);
}

int main() {
	long long x;
	cin >> x;

	cout << fact(x) << endl;

	return 0;
}