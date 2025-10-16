#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
	pair<int, string> product = {101, "Apple"};

	cout << "Product ID: " << product.first << endl;
	cout << "Product Name: " << product.second << endl;
}