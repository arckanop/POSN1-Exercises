#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<double> temps = {25.5, 27.1, 28.0, 26.3, 29.8};

    temps[2] = 30.5;

    if (temps.empty()) cout << "The vector is empty." << endl;

    temps.pop_back();

    cout << "Updated Day " << 3 << ", temp: " << temps.at(2) << endl << "Remaining elements: " << temps.size();

    return 0;
}
