#include <iostream>
#include <map>
#include <string>
// #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	map<int, string> list;
	string s;

	int i, n, x;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x >> s;
		list[x] = s;
	}

	for (auto student : list) {
		cout << student.second << endl;
	}

	return 0;
}