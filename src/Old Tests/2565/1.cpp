#include <iostream>
using namespace std;

int seq(int n) {
	if (n == 1) return 3;
	else return seq(n - 1) + n + 1;
}

int main() {
	// ios:sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;

	cout << seq(n) << endl;

	return 0;
}