#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> productID;

    string x;
    int i, n, c, num;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x >> num;

        switch (x[0]) {
        case 'A':
            productID.insert(num);
            c = 0;
            for (auto ID : productID) {
                cout << ID << " ";
                c++;
            }
            if (c == 0) cout << "Empty";
            cout << endl;
            break;
        case 'D':
            productID.erase(num);
            for (auto ID : productID) {
                cout << ID << " ";
                c++;
            }
            if (c == 0) cout << "Empty";
            cout << endl;
            break;
        case 'C':
            c = 0;
            for (auto ID : productID) {
                cout << ID << " ";
                c++;
            }
            if (c == 0) cout << "Empty";
            cout << endl;
        }
    }

     c = 0;
    for (auto ID : productID) {
        cout << ID << " ";
        c++;
    }
    if (c == 0) cout << "Empty";
    cout << endl;

    return 0;
}

