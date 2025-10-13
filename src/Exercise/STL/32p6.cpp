#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

   vector <int> data = {10, 5, 20, 5, 30, 5, 40};
   int target_value = 5;

   auto it1 = find(data.begin(), data.end(), target_value);

   if (it1 != data.end()) {
         cout << "First occurrence of " << target_value << " found: " << endl ;
         cout << "Index " << 1 << ": " << it1 - data.begin() << endl;
   }

   auto it2 = find(it1+1, data.end(), target_value);

   if (it2 != data.end()) {
         cout << "Second occurrence of " << target_value << " found: " << endl ;
         cout << "Value: " << *it2 << endl << "Index " << 2 << ": " << it2 - data.begin();
   }

    return 0;
}

