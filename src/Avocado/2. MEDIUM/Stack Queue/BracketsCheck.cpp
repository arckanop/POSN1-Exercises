#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int t[20];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<char> s;
	char str[100010], top;
	int i, yes = 1;

	cin >> str;

	if (str[0] == ')' || str[0] == '}' || str[0] == ']') {
		cout << "no";
		return 0;
	}

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == '(' || str[i] == '{' || str[i] == '[') s.push(str[i]);
		else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
			if (s.size() != 0) {
				top = s.top();
				s.pop();
			}
			else {
				cout << "no";
				return 0;
			}

			if (str[i] == ')' && top != '(') {
				cout << "no";
				return 0;
			} else if (str[i] == '}' && top != '{') {
				cout << "no";
				return 0;
			} else if (str[i] == ']' && top != '[') {
				cout << "no";
				return 0;
			}
		}
	}

	if (yes && s.size() == 0) {
		cout << "yes";
	} else {
		cout << "no";
	}

	return 0;
}