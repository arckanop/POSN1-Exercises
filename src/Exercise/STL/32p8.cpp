#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    map <string, int> student_scores = {{"Alice", 85}, {"Bob", 72}, {"Charlie", 95}};
    student_scores.insert({"David", 60});

    cout << "Bob's current score: " << student_scores["Bob"] << endl;

    student_scores["Bob"] = 80;

    cout << "Bob's new score: " << student_scores["Bob"] << endl;

    student_scores["Eve"];

    auto it = student_scores.find("Charlie");

    if (it != student_scores.end()) {
        cout << "Found " << it->first << "'s score: " << it->second << endl;
    } else cout << "Charlie not found!" << endl;

    auto it2 = student_scores.find("Frank");

    if (it2 != student_scores.end()) {
        cout << "Found " << it->first << "'s score: " << it->second << endl;
    } else cout << "Frank not found!" << endl;

    for (auto student : student_scores) {
        cout << student.first << ": " << student.second << endl;
    }

    student_scores.erase("David");
    cout << "<-- Removed David -->" << endl;

    for (auto student : student_scores) {
        cout << student.first << ": " << student.second << endl;
    }

    return 0;
}