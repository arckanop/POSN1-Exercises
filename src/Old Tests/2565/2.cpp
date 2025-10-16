#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    char str[22];
    cin >> str;

    int i, j, sum = 0, len = 0, pos = 0;

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for (i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            for (j = i; j < len; j++) {
                if (str[i] == str[j]) {
                    sum += str[i] - '0';
                    pos = j;
                }
            }
            i = pos;
        }
    }

    cout << sum << endl;
    return 0;
}
//12344435633872