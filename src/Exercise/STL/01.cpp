#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	pair <int, double> employee1;
	make_pair(101, 55000.50);
	pair <int, double> employee2 = {102, 60000};

	cout << "--- Employee 1 ---" << endl << "ID: " << employee1.first << endl << "Salary: " << employee1.second << endl;

	employee2.second = 65000.00;

	cout << "--- Employee 2 (Updated)---" << endl << "ID: " << employee2.first << endl << "Salary: " << employee2.second << endl;
}