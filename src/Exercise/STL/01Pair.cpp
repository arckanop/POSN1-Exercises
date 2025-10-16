#include <iostream>
#include <utility>
#include <string>

int main() {
	std::pair<int, std::string> product = {101, "Apple"};

	std::cout << "Product ID: " << product.first << std::endl;
	std::cout << "Product Name: " << product.second << std::endl;
}