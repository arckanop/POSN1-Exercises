#include <bits/stdc++.h>
using namespace std;

int main() {
    pair <string, pair<float, int>> student_result;
    string name = "Preeya";
    pair <float, int> score = {92.5, 88};
    student_result = make_pair(name, score);

    cout << "Student: " << student_result.first << endl;

    cout << "Midterm Score: " << student_result.second.first << endl << "Final Score (Original): " << student_result.second.second << endl;


    student_result.second.second = 95;

    cout <<  "Final Score (Updated): " << student_result.second.second << endl;
}
