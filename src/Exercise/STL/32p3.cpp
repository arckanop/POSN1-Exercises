#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> score;
    score.push_back(85);
    score.push_back(90);
    score.push_back(78);
    score.push_back(92);

    score.insert(score.end(), 100);

    cout << "Size: " << score.size() << endl;
    cout << "First score: " << score[0] << endl;
    cout << "Last score: " << score.at(4);

    return 0;
}
