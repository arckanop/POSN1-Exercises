#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v1;
    cout << "Size of v1 is " << v1.size() << endl;

    vector<int> v2 = {2, 3, 4};
    cout << v2[1] << endl;

    v1= v2;
    v1[0] = 20;
    cout << v1[0] << ", " << v1[1] << ", " << v1[2] << endl;
    v1.push_back(99);
    cout << v1[3] << endl;
    cout << v1.size() << endl;

    return 0;
}
