#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> product_ids = {1005, 1012, 1030, 1045, 1051};

    int target_id = 1030;

    cout << "IDs: ";

    for (int id : product_ids) {
        cout << id << " ";
    }
    cout << endl;

    auto it = find(product_ids.begin(), product_ids.end(), target_id);

    cout << "Target: " << target_id << endl;

    if (it != product_ids.end()) cout << "ID Found!";
    else printf("ID Not Found.");

    return 0;
}

